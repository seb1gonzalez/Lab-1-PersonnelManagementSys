all: EmployeeList

EmployeeList:BSTSG.o
	gcc BSTSG.o

BSTSG.o: BSTSG.c BST.h fileOperations.h
	gcc -c BSTSG.c
clean:
	rm -f *.o EmployeeList
