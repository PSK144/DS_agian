//2) SUM OF TWO ELEMENTS GIVING VALUE X

#include<stdio.h>
int main()
{
	int inumberofelements,i,j;
	printf("Enter the number of array elements\t");
	scanf("%d",&inumberofelements);
	
	int iArray[inumberofelements];
	
	for(i=0;i<inumberofelements;scanf("%d",&iArray[i]),i++);
	
	int ix,icount=0;
	printf("\nEnter the value of x\t");
	scanf("%d",&ix);
	
	printf("The pairs are\n");
	for(i=0;i<inumberofelements;i++)
	{
		for(j=0;j<inumberofelements&&j!=i;j++)
		{
			if(iArray[i]+iArray[j]==ix)
			{
				printf("%d  %d\n",iArray[i],iArray[j]);
				icount++;
			}
		}
	}
	
	printf("\n\nNumber of pairs giving the sum %d",icount);
}
