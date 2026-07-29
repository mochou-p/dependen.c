# mochou-p/dependen.c/03-dynamic-loading/makefile

CFLAGS := -std=c89 -Wall -Wextra -Wpedantic

build:
	gcc $(CFLAGS) -c -fPIC other.c -o other.o
	gcc $(CFLAGS) -shared other.o -o libother.so
	gcc $(CFLAGS) main.c -ldl
