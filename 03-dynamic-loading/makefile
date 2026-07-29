# mochou-p/dependen.c/03-dynamic-loading/makefile

build:
	gcc -c -fPIC other.c -o other.o
	gcc -shared other.o -o libother.so
	gcc main.c -ldl
