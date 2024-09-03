#include<stdio.h>

int main(int argc, char *argv[])
{
	char *name[4]={"a"};
	int d=4;
	if(argc<d) d=argc;
	for(int i=0; i<d; ++i) {
		name[i] = argv[i+1];
		printf("\n%s\n", name[i]);
	}
	return 0;
}
