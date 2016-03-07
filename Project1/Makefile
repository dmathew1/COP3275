CC=gcc
CFLAGS=-I.

%.o: %.c 
	$(CC) -c -o $@ $< $(CFLAGS)

project1: project1.o
	$(CC) -o project1 project1.o -I.