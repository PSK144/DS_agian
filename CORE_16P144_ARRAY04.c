//4) ODD COUNT ELEMENT

#include<stdio.h>

int main()
{
	int numberofelements,i,element,exor=0;
	printf("Enter the number of elements\t");
	scanf("%d",&numberofelements);
	
	printf("\nEnter the array elements\n\t");
	for(i=0;i<numberofelements;scanf("%d",&element),exor=exor^element,printf("\t"),i++);

	printf("\nThe odd number of times occured value is  %d",exor);
}
