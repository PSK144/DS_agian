//5) MISSING ELEMENT WITH N NATURAL NUMBERS

#include<stdio.h>
main()
{
	int i,numberofelements,element,sum=0;
	printf("Enter the number of elements\t");
	scanf("%d",&numberofelements);
	
	printf("\nEnter the values\n\t");
	for(i=0;i<numberofelements-1;scanf("%d",&element),sum=sum+element,printf("\t"),i++);
	
	printf("\nThe missing element is  %d",((numberofelements*(numberofelements+1))/2)-sum);
	
}
