//CREATED BY SEBASTIAN GONZALEZ FEB 25,2018
//time invested 2 hours, research www.tutorialspoint.com -> pointers, malloc, linked list
// other resources JAVA BST, JAVA LinkedList
// https://www.geeksforgeeks.org/binary-search-tree-set-1-search-and-insertion/

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

//FUNCTIONS IN BST


//general structure for BST
typedef struct Node {
    int value;
    struct Node *right;
    struct Node *left;
} Node;

//function to create a Node for the BST
struct Node* newNode(int newVal){
    Node *newNode= (Node*)malloc(sizeof(Node));
    newNode->value = newVal;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;

};
void inOrder(struct Node* root){
    if(root != NULL){
        inOrder(root->left);
        printf("%d \n",root->value);
        inOrder(root->right);
    }
};

// add an element to the Tree
struct Node* add (struct Node* root, int value){
    //check ifEmpty
    if (root == NULL){
        root = newNode(value);
    }
    //add left if less than
    else if(value < root->value){
        root->left = add(root->left,value);
    }
    else{
        root->right = add(root->right,value);
    }

    return root;
};



//MAIN
int main() {

    //make BS treeRoot empty or Null
    Node *root = NULL;



    //start adding elements to tree using ADD function
    root = add(root,45);
    add(root,50);
    add (root, 40);
    add(root,60);
    inOrder(root);
    return 0;
}