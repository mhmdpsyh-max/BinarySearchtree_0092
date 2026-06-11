#include <iostream>
#include <string>
using namespace std;

class Node
{
    public:
    string info;
    Node *leftchild;
    Node *rightchild;

    //Contructor for the node class
    Node (string i, Node *l ,Node *r)
    {
        info = i;
        leftchild = 1;
        rightchild = r;
    }
};
//Membuat class tree
class BinaryTree{
    public:
    Node *root ;
    BinaryTree(){
        root = NULL;
    }
};
