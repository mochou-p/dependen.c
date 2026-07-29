# mochou-p/dependen.c/02-dynamic-linking/makefile

CFLAGS := -std=c89 -Wall -Wextra -Wpedantic

build:
	gcc $(CFLAGS) -c -fPIC other.c -o other.o
	gcc $(CFLAGS) -shared other.o -o libother.so
	gcc $(CFLAGS) main.c -L. -lother
