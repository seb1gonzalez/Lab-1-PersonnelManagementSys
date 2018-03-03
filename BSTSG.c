//CREATED BY SEBASTIAN GONZALEZ FEB 25,2018
//time invested 8 hours, research www.tutorialspoint.com -> pointers, malloc, linked list
// other resources JAVA BST, JAVA LinkedList

void displayOptions(){
  printf("Welcome, please select an option\n");
  printf("Press 1 to add an Employee\n");
  printf("Press 2 to remove an Employee\n");
  printf("Press 3 to display all Employees\n");
  printf("Press 9 to exit\n");
  
};
int main() {

  //make BS treeRoot empty or Null
  Node *root = NULL;
  FILE *file;

  //allocate some memory for the name of the person
  char fname[10], lname[10];
  char inputname[];
  char *fullNameptr;
  int option;

  file = fopen("employeeList.txt", "r");
  while (2 == fscanf(file,"%s %s", fname, lname)) {
    fullNameptr = strcat(fname, lname);
    add(root, fullNameptr);
    //reuse pointer
    free(fullNameptr);
  }
  fclose(file);
  while(1){
    displayOptions();
    scanf("%d",&option);

    if(option == 1){
      printf("Enter the employee's name to add\n");
      scanf("%s",inputname);
      add(root,inputname);

    }
    else if(option == 2){
      printf("Enter the employee's name to remove\n");
      scanf("%s",inputname);
      remove(root,inputname);
    }
    else if(option == 3){
      printf("The employees are:\n");
      indorder(root);
    }
    else if(option == 9){
      return;
    }
    else{
      displayOptions();
      continue;
    }
  }
  return 0;
}
