# mochou-p/dependen.c/02-dynamic-linking/makefile

build:
	gcc -c -fPIC other.c -o other.o
	gcc -shared other.o -o libother.so
	gcc main.c -L. -lother
