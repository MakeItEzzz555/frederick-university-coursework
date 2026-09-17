#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void searchWords(string KOLOKASI, string word1, string word2) {
    string line, cmpWrd = "";
    char choice;
    bool found1 = false, found2 = false;
    ifstream file(KOLOKASI);

    cout << "\na)Find Lines including both words";
    cout << "\nb)Find Lines including 1 of 2 words";
    cout << "\nc)Find Lines including neither of the 2 words";
    cout << "\nd)Exit";
    cout << "\nChoice ==> ";
    cin >> choice;

    switch (choice) {

    case 'a':
    case 'A':
        while (!file.eof()) {
            getline(file, line);

            for (int i = 0; i < line.size(); i++) {

                if (line[i] != ' ' && line[i] != ',' && line[i] != '.') {
                    cmpWrd += line[i];
                }
                else {

                    if (cmpWrd == word1) {
                        found1 = true;
                    }
                    else if (cmpWrd == word2) {
                        found2 = true;
                    }
                    cmpWrd = "";
                }
            }
            cmpWrd = "";

            if (found1 && found2) {
                int pos1 = line.find(word1);
                int pos2 = line.find(word2);
                line.insert(pos1, "*");
                line.insert(pos1 + word1.length() + 1, "*");
                line.insert(pos2 + 2, "*");
                line.insert(pos2 + word2.length() + 3, "*");
                cout << "\nBoth words found on the following line ==> " << line;
                found1 = false, found2 = false;
            }
        }
        break;

    case 'b':
    case 'B':
        while (!file.eof()) {
            getline(file, line);

            for (int i = 0; i < line.size(); i++) {

                if (line[i] != ' ' && line[i] != ',' && line[i] != '.' && line[i] != '(' && line[i] != ')' && line[i] != '-') {
                    cmpWrd += line[i];
                }
                else {

                    if (cmpWrd == word1) {
                        found1 = true;
                    }
                    else if (cmpWrd == word2) {
                        found2 = true;
                    }
                    cmpWrd = "";
                }
            }
            cmpWrd = "";

            if (found1 || found2) {
                if (found1) {
                    int pos = line.find(word1);
                    line.insert(pos, "*");
                    line.insert(pos + word1.length() + 1, "*");
                }
                if (found2) {
                    int pos = line.find(word2);
                    line.insert(pos, "*");
                    line.insert(pos + word2.length() + 1, "*");
                }
                cout << "\n1 of 2 words found on the following line ==> " << line;
                found1 = false, found2 = false;
            }

        }
        break;

    case 'c':
    case 'C':
        while (!file.eof()) {
            getline(file, line);
            found1 = false; // Reset found1 for each line
            found2 = false; // Reset found2 for each line
            for (int i = 0; i < line.size(); i++) {

                if (line[i] != ' ' && line[i] != ',' && line[i] != '.' && line[i] != '-') {
                    cmpWrd += line[i];
                }
                else {

                    if (cmpWrd == word1) {
                        found1 = true;
                    }
                    else if (cmpWrd == word2) {
                        found2 = true;
                    }
                    cmpWrd = "";
                }
            }
            cmpWrd = "";

            if (found1 == false && found2 == false) {
                cout << "\nNeither words found on the following line ==> " << line;

            }
        }
        break;
    case 'd':
    case 'D':
        cout << "Program will exit";
        system("pause");
        exit(0);
    }
    file.close();
}
int main()
{
    string fileName = "CyprusNews.txt", wrd1, wrd2;

    cout << "Please Choose 2 Words From CyprusNews.txt to search for ==> ";
    cin >> wrd1 >> wrd2;

    searchWords(fileName, wrd1, wrd2);

    return 0;
}