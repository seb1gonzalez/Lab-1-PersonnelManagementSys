all: tree.out
	echo "Completed Compilation, Welcome Neo"
tree.out:BSTSG.o
	gcc BSTSG.o

BSTSG.o: BSTSG.c BST.h
	gcc -c BSTSG.c
clean:
	rm -f *.o tree.out
