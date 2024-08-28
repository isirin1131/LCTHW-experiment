CFLAGS=-Wall -g

all: task1

task1: task1.c
	cc task1.c -o exefile/task1

clean:
	rm exefile/*
