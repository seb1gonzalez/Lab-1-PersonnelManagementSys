all: EmployeeList

EmployeeList:BSTSG.o
	gcc BSTSG.o

BSTSG.o: BSTSG.c functions.h
	gcc -c BSTSG.c
clean:
	rm -f *.o EmployeeList
