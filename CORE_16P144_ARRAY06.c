//6) REVERSE

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,size;
	char string[100];
	printf("Enter the array or string in single line\n");
	scanf("%[^\n]s",string);
	size=strlen(string);
	//printf("%d",size);
	for(i=0;i<size;printf("%c",string[size-(i+1)]),i++);
}
