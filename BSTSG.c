//CREATED BY SEBASTIAN GONZALEZ FEB 25,2018
//time invested 8 hours, research www.tutorialspoint.com -> pointers, malloc, linked list, File I/O, string.h.
// other resources JAVA BST, JAVA LinkedList


#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include "BST.h"
#include "fileOperations.h"
#include <stdlib.h>



int main() {

    //make BS treeRoot empty or Null
    Node *root = NULL;

    //start adding elements to tree using file functions
    char inputFile[] = "employeeList.txt";
    readMyFile(inputFile);
    return 0;
}
