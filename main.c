//CREATED BY SEBASTIAN GONZALEZ FEB 25,2018
//time invested 2 hours, research www.tutorialspoint.com -> pointers, malloc, linked list
// other resources JAVA BST, JAVA LinkedList
// https://www.geeksforgeeks.org/binary-search-tree-set-1-search-and-insertion/

#include <stdio.h>
#include <malloc.h>
//FUNCTIONS IN BST


//general structure for BST
struct Node {
    int value;
    struct node *left, *right;
};

//function to create a Node for the BST
struct Node* newNode(int value){
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp-> value = value;
    temp->left = temp->right = NULL;
    return temp;

}

// add an element to the Tree
struct Node* add (struct Node* root, int value){
    //check ifEmpty
    if (root == NULL){
        root = newNode(value);
        return root;
    }
    //ERRORS IN THIS IF WITH "node"
    //Error = "can't resolve variable"
    //if not empty - sort the inserted value
    if(value < node->value){
        node->left = add(node->left,value);
    }
};;

//MAIN
int main() {

    //make BS treeRoot empty or Null
    struct Node* root = NULL;

    //start adding elements to tree using ADD function
    add(root,50);
    add (root, 40);
    add(root,60);
    return 0;
}