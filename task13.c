#include<stdio.h>

int main(int argc, char *argv[]) {
	printf("%d", argc);
	for(int i=0; argv[1][i] != '\0'; ++i)
{
	printf("\n-%c-\n", argv[1][i]);
	switch(argv[1][i])
{
	case 'Y':
		if(i==1){
			break;
		}
		printf("**\n");
		break;
	default:
		break;
}
}
	return 0;
}
