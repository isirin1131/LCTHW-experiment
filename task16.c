#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<string.h>

struct Person {
	char *name;
	int age;
	int height;
	int weight;
};

void P_destory(struct Person *who) {
	assert(who != NULL);
	free(who->name);
	free(who);
}

void Person_print(struct Person who)
{
    printf("Name: %s\n", who.name);
    printf("\tAge: %d\n", who.age);
    printf("\tHeight: %d\n", who.height);
    printf("\tWeight: %d\n", who.weight);
}

int main() {
	struct Person joe;
	joe.name = strdup("Joe");
	joe.age = 20;
	joe.height = 179;
	joe.weight = 120;
	Person_print(joe);
	free(joe.name);
	//P_destory(&joe);
return 0;}	
/*
==2055592== Memcheck, a memory error detector
==2055592== Copyright (C) 2002-2024, and GNU GPL'd, by Julian Seward et al.
==2055592== Using Valgrind-3.23.0 and LibVEX; rerun with -h for copyright info
==2055592== Command: ./exefile/task16
==2055592==
Name: Joe
        Age: 20
        Height: 179
        Weight: 120
==2055592==
==2055592== HEAP SUMMARY:
==2055592==     in use at exit: 0 bytes in 0 blocks
==2055592==   total heap usage: 2 allocs, 2 frees, 1,028 bytes allocated
==2055592==
==2055592== All heap blocks were freed -- no leaks are possible
==2055592==
==2055592== For lists of detected and suppressed errors, rerun with: -s
==2055592== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
*/
