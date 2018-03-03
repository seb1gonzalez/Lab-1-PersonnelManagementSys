//CREATED BY SEBASTIAN GONZALEZ FEB 25,2018
//time invested 8 hours, research www.tutorialspoint.com -> pointers, malloc, linked list
// other resources JAVA BST, JAVA LinkedList
#include "functions.h"
#include <stdlib.h>
int main() {

  //make BS treeRoot empty or Null
  Node *root = NULL;
  FILE *file;

  //allocate some memory for the name of the person
  char fname[20];
  char inputname[20];
  int option;
  root = add(root,"Sebastian");

  file = fopen("employeeList.txt", "r");
  rewind(file);
  while(fscanf(file,"%s", fname)!= EOF){
    fscanf(file,"%s",fname);
    add(root, fname);
  }
  fclose(file);

 
 while(1){
   
   printf("Welcome, please select an option\n");
   printf("Press 1 to add an Employee\n");
   printf("Press 2 to remove an Employee\n");
   printf("Press 3 to display all Employees\n");
   printf("Press 9 to exit\n");
   printf("\n");

   printf("---------------------------------\n");
    

   scanf("%d",&option);

    if(option == 1){
      printf("Enter the employee's name to add\n");
      scanf("%s",inputname);
      add(root,inputname);
      printf("\n");        
      printf("---------------------------------\n");


    }
    else if(option == 2){
      printf("Enter the employee's name to remove\n");
      scanf("%s",inputname);
      // remove(root,inputname);
      printf("%s has been deleted 4 eva\n",inputname);
      printf("\n");
      printf("---------------------------------\n");

    }
    else if(option == 3){
      printf("The employees are:\n");
      inOrder(root);
      printf("---------------------------------\n");

    }
    else if(option == 9){
      exit(1);
    }
    else{
      printf("Sorry, try again.\n");
      printf("\n");
      printf("---------------------------------\n");

    }
  }
  return 0;
}
