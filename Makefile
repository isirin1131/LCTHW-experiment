CFLAGS=-Wall -g

all: task1 task3

task1: task1.c
	cc task1.c -o exefile/task1

task3: task3.c
	cc -g task3.c -o exefile/task3

clean:
	rm exefile/*
