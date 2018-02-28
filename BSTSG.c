//CREATED BY SEBASTIAN GONZALEZ FEB 25,2018
//time invested 2 hours, research www.tutorialspoint.com -> pointers, malloc, linked list
// other resources JAVA BST, JAVA LinkedList


#include <stdio.h>
#include <malloc.h>
#include "BST.h"
#include <stdlib.h>



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
