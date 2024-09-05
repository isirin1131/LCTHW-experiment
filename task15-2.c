#include<stdio.h>

int main() {
	char *name[] = {"Alice", "Bob", "Charlie", "Sirin"};
	int *cur_age = NULL;

	for(int i=0;i<20;++i)
		printf("-%c|", *(name[0]+i));
	printf("\n----------\n");

	name[0]="jijiboom";

	for(int i=0;i<20;++i)
		printf("-%c|", *(name[0]+i));
	printf("\n----------\n");

	for(int i=0;i<15;++i) printf("-%c|", *(name[1]+i));

/* output:
 -A|-l|-i|-c|-e|-|-B|-o|-b|-|-C|-h|-a|-r|-l|-i|-e|-|-S|-i|
----------
-j|-i|-j|-i|-b|-o|-o|-m|-|-|-|-|--|-;|-<|-|-|-|-|
----------
-B|-o|-b|-|-C|-h|-a|-r|-l|-i|-e|-|-S|-i|-r|
*/
return 0;
}
