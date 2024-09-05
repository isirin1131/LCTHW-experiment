#include<stdio.h>

int main() {
	char *name[] = {"Alice", "Bob", "Charlie", "Sirin"};
	int *cur_age = NULL;

	for(int i=0;i<20;++i)
		printf("-%c|", *(name[0]+i));
	printf("\n----------\n");
	
	cur_age = (int *)name[0];
	printf("###%d###\n", *cur_age);
	int allset=(1<<8)-1;
	printf("%c, %c, %c, %c\n", (*cur_age>>24)&(allset), (*cur_age>>16)&(allset), (*cur_age>>8)&(allset), (*cur_age)&allset);

	cur_age = (int *)(name[0]+4);
	printf("###%d###\n", *cur_age);
	printf("%c, %c, %c, %c\n", (*cur_age>>24)&(allset), (*cur_age>>16)&(allset), (*cur_age>>8)&(allset), (*cur_age)&allset);
	return 0;
/* output
-A|-l|-i|-c|-e|-|-B|-o|-b|-|-C|-h|-a|-r|-l|-i|-e|-|-S|-i|
----------
###1667853377###
c, i, l, A
###1866596453###
o, B, , e
*/
}
