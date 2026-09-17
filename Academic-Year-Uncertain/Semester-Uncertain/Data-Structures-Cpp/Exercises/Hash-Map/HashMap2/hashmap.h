#ifndef HASHMAP_H
#define HASHMAP_H

#endif

#include <iostream>
#include <vector>
#include <string>
#include "User.h"


// Bucket Class
class Bucket {
private:
    User* head; // Head of the linked list

public:
    Bucket() : head(nullptr) {}

    ~Bucket() {
        User* current = head;
        while (current) {
            User* toDelete = current;
            current = current->next;
            delete toDelete;
        }
    }

    void insert(const string& username, const string& hashedPassword) {
        User* newUser = new User(username, hashedPassword);
        newUser->next = head;
        head = newUser;
    }

    bool find(const string& username, const string& hashedPassword) {
        User* current = head;
        while (current) {
            if (current->username == username && current->hashedPassword == hashedPassword) {
                return true;
            }
            current = current->next;
        }
        return false;
    }

    User* getHead() const {
        return head;
    }
};



class HashMap {
private:
    vector<Bucket*> buckets; 
    size_t bucketCount;


    size_t hashFunction(const string& key) {
        size_t hashValue = 0;
        for (char ch : key) {
            hashValue = (hashValue * 31 + ch); // Prime (31) number multiplier
                                               //Creates a more unique hashkey with prime number approach
        }
        return hashValue % bucketCount;
    }


    void resizeTable() {
        size_t newBucketCount = bucketCount * 2;
        vector<Bucket*> newBuckets(newBucketCount, nullptr);

        for (size_t i = 0; i < bucketCount; ++i) {
            if (buckets[i]) {
                User* current = buckets[i]->getHead();
                while (current) {
                    size_t newIndex = hashFunction(current->username) % newBucketCount;
                    if (!newBuckets[newIndex]) {
                        newBuckets[newIndex] = new Bucket();
                    }
                    newBuckets[newIndex]->insert(current->username, current->hashedPassword);
                    current = current->next;
                }
                delete buckets[i];
            }
        }

        buckets = move(newBuckets);
        bucketCount = newBucketCount;
    }

public:
    // Constructor
    HashMap() : bucketCount(1) {
        buckets.resize(bucketCount, nullptr);
    }

    // Destructor
    ~HashMap() {
        for (auto bucket : buckets) {
            delete bucket;
        }
    }

    void insert(const string& username, const string& password) {
        string hashedPassword = hashPassword(password);
        size_t index = hashFunction(username);

        if (!buckets[index]) {
            buckets[index] = new Bucket();
            buckets[index]->insert(username, hashedPassword);
        }

        else buckets[index]->insert(username, hashedPassword);

        // Check if resizing is needed
        size_t userCount = 0;
        for (auto bucket : buckets) {
            if (bucket) {
                User* current = bucket->getHead();
                while (current) {
                    userCount++;
                    current = current->next;
                }
            }
        }
        if ((double)userCount / bucketCount > 0.75) {
            resizeTable();
        }

        cout << "User \"" << username << "\" signed up successfully!\n";
    }

    bool login(const string& username, const string& password) {
        size_t index = hashFunction(username);
        if (!buckets[index]) {
            return false;
        }
        string hashedPassword = hashPassword(password);
        return buckets[index]->find(username, hashedPassword);
    }

    string hashPassword(const string& password) {
        size_t hashValue = 0;
        for (char ch : password) {
            hashValue = (hashValue * 37 + ch);
        }
        return to_string(hashValue);
    }

    void dispMap() {
        cout << "\n--- Displaying HashMap ---\n";
        for (size_t i = 0; i < buckets.size(); ++i) {
            cout << "Bucket [" << i << "]: ";
            if (buckets[i]) {
                User* current = buckets[i]->getHead();
                while (current) {
                    cout << "(Username: " << current->username << ", Hashed Password: " << current->hashedPassword << ") -> ";
                    current = current->next;
                }
                cout << "NULL\n";
            }
            else {
                cout << "EMPTY\n";
            }
        }
    }
};

