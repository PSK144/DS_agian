//7) COUNTING OCCURANCE OF X

#include<stdio.h>

int countx(int array[],int i,int n,int x)
{
	if(i<n-1)
	{
	if(array[(i+n)/2]==x)
		return 1+countx(array,i,(n/2)-1,x)+countx(array,(n/2)+1,n,x);
	else
		return 1;
	}
	else
	{
		if(array[i+1]==x)
			return 1;
		else
			return 0;
	}
}


int main()
{
	int numberofelements,i,x,count;
	printf("Enter the number of elements\t");
	scanf("%d",&numberofelements);
	
	int array[numberofelements];
	printf("Enter the array elements\n\t");
	for(i=0;i<numberofelements;scanf("%d",&array[i]),printf("\t"),i++);
	
	printf("Enter X value\t");
	scanf("%d",&x);
	
	count=countx(array,0,numberofelements-1,x);
	printf("Number of occurence of %d is %d",x,count+1);
	return 0;
}
