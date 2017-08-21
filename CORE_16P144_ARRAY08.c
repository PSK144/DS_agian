// 8) LEADER ELEMENT IN AN ARRAY

#include<stdio.h>

void maxi(int array[],int n,int max)
{
	if(n>0)
	{
		while(n>=0&&array[n]<max)
		{
				n--;
		}
		maxi(array,n-1,array[n]);	
	}
	printf("%d ",max);
}


int main()
{
	int i,numberofelements;
	printf("Enter the number of elements\t");
	scanf("%d",&numberofelements);
	
	int array[numberofelements];
	printf("\nEnter the array elements\n\t");
	for(i=0;i<numberofelements;scanf("%d",&array[i]),printf("\t"),i++);
	
	printf("\nThe leaders are ");
	maxi(array,numberofelements-2,array[numberofelements-1]);
	
	
	return 0;
}
