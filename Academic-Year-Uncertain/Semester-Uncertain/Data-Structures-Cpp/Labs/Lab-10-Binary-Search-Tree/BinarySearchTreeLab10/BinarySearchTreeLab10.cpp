// Binary Tree.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
using namespace std;

class node
{
public:
	int data;
	node* left;
	node* right;

	node(int x)
	{
		data = x;
		left = NULL;
		right = NULL;
	}
};

class binarySearchTree
{
private:
	node* root;

	// recursive methods

	void recInsert(int x, node*& r)
	{
		if (r == NULL)
		{
			r = new node(x);
		}
		else
		{
			if (x < r->data)
			{
				recInsert(x, r->left);
				cout << "Going left for " << x << endl;
			}
			else
			{
				recInsert(x, r->right);
				cout << "Going right for " << x << endl;
			}
		}
	}

	// display items in tree rooted at r
	void recDisplay(node* r)
	{
		if (r != NULL)
		{
			recDisplay(r->left);
			cout << r->data << endl;
			recDisplay(r->right);
		}
	}

	void recdisplay_preorder(node* r)
	{
		// IMPLEMENT THIS FUNCTION
		if (r != nullptr) {
			cout << r->data<<endl;
			return recdisplay_preorder(r->left),
				recdisplay_preorder(r->right);
		}
		else return;
	}

	void recdisplay_postorder(node* r)
	{
		// IMPLEMENT THIS FUNCTION
		if (r != nullptr) {
			return recdisplay_postorder(r->left),
				cout << r->data<<endl,
				recdisplay_postorder(r->right);
		}
		else {
			return;
		}
	}

	int height(node* p)
	{
		if (p == NULL)
			return 0;
		else
			return 1 + max(height(p->left),
				height(p->right));
	}

public:
	binarySearchTree():root(nullptr){}

	void insert(int x)
	{
		recInsert(x, root);
	}

	// display all items in tree
	void display()
	{
		recDisplay(root);
	}

	// display all items in tree preorder
	void display_preorder()
	{
		recdisplay_preorder(root);
	}

	// display all items in tree postorder
	void display_postorder()
	{
		recdisplay_postorder(root);
	}

	int height()
	{
		return height(root);
	}
};

int main()
{

	binarySearchTree tree;

	tree.insert(8);
	tree.insert(11);
	tree.insert(7);
	tree.insert(5);
	tree.insert(2);
	tree.insert(23);

	tree.display();

	cout << "Tree height: " << tree.height() << endl;

	cout << "PreOrder Traversal" << endl;
	tree.display_preorder();

	cout << "PostOrder Traversal" << endl;
	tree.display_postorder();


	return 0;
}