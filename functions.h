#include <stdio.h>

#include <malloc.h>
#include <string.h>



/*Sebastian Gonzalez 2018
 */

typedef struct Node{

  struct Node *right;

  struct Node *left;

  char value[];

} Node;



//function to create a Node for the BST

struct Node* newNode(char newVal[]){

  Node *newNode= (Node*)malloc(sizeof(Node));

  strcpy(newNode->value,newVal);

  newNode->left = NULL;

  newNode->right = NULL;

  return newNode;



};

//print elements in tree from smallest to largest

void inOrder(struct Node* root){

  if(root != NULL){

    inOrder(root->left);

    printf("%s \n",root->value);
    inOrder(root->right);

  }

};



//iterative search function

void search(struct Node* root,char target[]){

  while(root != NULL){

    if (strcmp(target,root->value) == 0) {
      printf("Value %s is in the tree \n", target);

      return;

    }

    //if target is less than the root, search left subtree

    if(strcmp(target,root->value) < 0){

      root = root->left;

    }

    //if target is greater than root's value, check right subArbol

    if(strcmp(target, root->value) > 0){

      root = root->right;

    }

  }

  printf("Sorry, value %s not found\n",target);



};


struct Node* add (struct Node* root, char value[]){

    //check ifEmpty

    if (root == NULL){

      root = newNode(value);

    }



    //add left if less than

    else if(strcmp(value,root->value) < 0){

      root->left = add(root->left,value);
    }



    //do nothing for duplicates

    else if(strcmp(value,root->value) == 0){



      printf("This person is already on the list.-> %s \n",value);

    }



    //add right if greater

    else{

      root->right = add(root->right,value);

    }



    return root;

  };
