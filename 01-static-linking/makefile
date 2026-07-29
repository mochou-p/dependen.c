# mochou-p/dependen.c/01-static-linking/makefile

CFLAGS := -std=c89 -Wall -Wextra -Wpedantic

build:
	gcc $(CFLAGS) -c other.c -o other.o
	ar rcs libother.a other.o
	gcc $(CFLAGS) main.c libother.a
