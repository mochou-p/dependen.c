# mochou-p/dependen.c/01-static-linking/makefile

build:
	gcc -c other.c -o other.o
	ar rcs libother.a other.o
	gcc main.c libother.a
