// 9) PRINT ONCE A ELEMENT IN AN ARRAY

#include<stdio.h>

void quicksort(int array[], int left, int right)
{
	if (left<right)
	{
		int pivot=array[left];
		int i=left+1,j;
		for(j=i; j<=right; j++)
		{
			if(array[j]<pivot)
			{
				array[i]=(array[i]*array[j])/(array[j]=array[i]);
				i++;
			}
		}
		array[left]=(array[left]*array[i-1])/(array[i-1]=array[left]);
	
		//int part=i-1;
		quicksort(array,left,i-2);
		quicksort(array,i,right);
	}
}

int main()
{
	int i,numberofelements;
	scanf("%d",&numberofelements);
	int array[numberofelements];
	for(i=0;i<numberofelements;scanf("%d",&array[i]),i++);
	quicksort(array,0,numberofelements-1);
	
	for(i=0;i<numberofelements;i++)
	{
		if(array[i]==array[i+1])
		{
		while(array[i]==array[i+1])
			i++;
		}
		printf("%d ",array[i]);
	}
	
	return 0;
}
