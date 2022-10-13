// C++ Program to print Top View of a binary Tree

#include <iostream>
#include <queue>
#include <stack>
using namespace std;

// class for Tree node
class Node {
public:
	Node *left, *right;
	int data;
	Node() { left = right = 0; }
	Node(int data)
	{
		left = right = 0;
		this->data = data;
	}
};

/*
		1
		/ \
		2 3
		\
		4
		\
			5
			\
			6
	Top view of the above binary tree is
	2 1 3 6
*/

// class for Tree
class Tree {
public:
	Node* root;
	Tree() { root = 0; }

	void levelorder(){
        queue<Node*> queue;
        while(queue.size()){
            Node* o = queue.front();
            queue.pop();
            cout<<o->data<<" ";
            if(o->left){
                queue.push(o->left);
            }
            if(o->right){
                queue.push(o->right);
            }
        }
    }
		
};

// Driver code
int main()
{
	// Tree object
	Tree t;
	t.root = new Node(1);
	t.root->left = new Node(2);
	t.root->right = new Node(3);
	t.root->left->right = new Node(4);
	t.root->left->right->right = new Node(5);
	t.root->left->right->right->right = new Node(6);
	t.levelorder();
	cout << endl;
	return 0;
}
