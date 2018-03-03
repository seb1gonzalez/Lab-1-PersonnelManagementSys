#include <stdio.h>
#include<string.h>
#include "BST.h"

void readMyFile(char theFileName[]){
  //Create a file pointer
FILE *file;

//allocate some memory for the name of the person
char fname[8],lname[8];
char fullName[16];
char* fullNameptr;
fullNameptr = fullName;
file=fopen(theFileName,"r");
//while there is 2 strings to read

 while(2 == fscanf(theFileName, "%s %s", fname, lname)){
   //concatenate the name
   fullName = strcat(fname,lname);
   add(root,fullNameptr);

   }
 fclose(file);
}
