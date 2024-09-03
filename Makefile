CFLAGS=-Wall -g

all: task1 task3 task5 task6

task1: task1.c
	cc task1.c -o exefile/task1

task3: task3.c
	cc -g task3.c -o exefile/task3

task5: task5.c
	cc -g task5.c -o exefile/task5

task6: task6.c
	cc -g task6.c -o exefile/task6

clean:
	rm exefile/*
