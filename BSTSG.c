//CREATED BY SEBASTIAN GONZALEZ FEB 25,2018
//time invested 2 hours, research www.tutorialspoint.com -> pointers, malloc, linked list
// other resources JAVA BST, JAVA LinkedList


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
//print elements in tree from smallest to largest
void inOrder(struct Node* root){
    if(root != NULL){
        inOrder(root->left);
        printf("%d \n",root->value);
        inOrder(root->right);
    }
};

//iterative search function
void search(struct Node* root,int target){
while(root != NULL){
    if (target == root->value) {
        printf("Value %i is in the tree \n", target);
        return;
    }
    if(target < root->value){
        root = root->left;
    }
    if(target > root->value){
        root = root->right;
    }
}
    printf("Value %i not found\n",target);

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

        //do nothing for duplicates
    else if(root->value == value){}

        //add right if greater
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

    root = add(root,40);
    for(int i = 10 ; i < 50; i+=5) {
        add(root, i);
    }

    inOrder(root);

    search(root,45);
    return 0;
}
/* OUTPUT
*10
*15
*20
*25
*30
*35
*40
*45
*Value 45 is in the tree
*/