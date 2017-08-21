//3) MAJORITY ELEMENT IN AN ARRAY

#include<stdio.h>
int main()
{
	int hash[10]={0},flag=1;
	int numberofelements,i;
	printf("Enter the number of elemtns\t");
	scanf("%d",&numberofelements);
	
	int array[numberofelements];
	printf("\nEnter the array elements\n\t");
	for(i=0;i<numberofelements;scanf("%d",&array[i]),hash[array[i]]++,printf("\t"),i++);
	
	printf("\n");
	for(i=0;i<10;i++)
	{
		if(hash[i]>numberofelements/2)
			{
			printf("The max accur elements is %d",i);
			flag=0;
			break;
			}
	}
	
	if(flag)
		printf("NONE");
	
return 0;
}
