// 10) ROTATING THE ARRAY

#include<stdio.h>

void rotate(int arr[],int rot,int num)
{
	int i;
	for(i=0;i<num;i++)
	printf("%d  ",arr[(i+rot)%num]);
}


int main()
{
	int numberofelements;
	printf("Enter the number of elements\t");
	scanf("%d",&numberofelements);
	
	int array[numberofelements],i,j;
	printf("Enter the values of array\n\t");
	for(i=0;i<numberofelements;scanf("%d",&array[i]),printf("\t"),i++);
	
	int rotation;
	printf("\nEnter the index have to rotate\t");
	scanf("%d",&rotation);
	
	rotate(array,rotation,numberofelements);
	
	return 0;
}
