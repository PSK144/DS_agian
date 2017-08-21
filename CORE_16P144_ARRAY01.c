//1)FINDING REPEATING NUMBERS

#include <stdio.h>
#include <stdlib.h>
main()
{
  	int numberofelements,i;
   	printf("Enter the number of elements\numberofelements");
   	scanf("%d",&numberofelements);
   
   	printf("Enter the array elements\n\t");
   	int array[numberofelements];
   	for(i=0;i<numberofelements;scanf("%d",&array[i++]));
    
    printf("The repeated elemtns are ");
  	for (i = 0; i < numberofelements; i++)
  	{
    	if (array[abs(array[i])] >= 0)
      		array[abs(array[i])] = -array[abs(array[i])];
    	else
      		printf("%d ", abs(array[i]));
  	}
}
