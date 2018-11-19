#include<stdio.h>

void main(){
	int p[10],pro;
	int i,j,wt=0;
	float avgt,avg=0;
	clrscr();
	printf("Enter the number of process\t: ");
	scanf("%d",&pro);
	for(i=0;i<pro;i++){
		printf("Enter the p%d bus time : ",i+1);
		scanf("%d",&p[i]);
	}
	printf("\nGantt chart\n\n\t\t");
	for(i=0;i<pro;i++){
		printf("P%d\t",i+1);
	}
	printf("\n\t0\t");
	for(i=0;i<pro;i++){
		printf("%d\t",p[i]);
	}

	printf("\n\nWaiting time\n\n");
	for(i=0;i<pro;i++){
		printf("\tP%d\t%d\n",i+1,wt);
		wt=wt+p[i];
		avg=avg+wt;
	}
	avgt=avg/pro;
	printf("\n\nAverage waiting time\t%f",avgt);

	wt=0;
	printf("\n\nTurnaround time\n\n");
	for(i=0;i<pro;i++){
		wt=wt+p[i];
		avg=avg+wt;
		printf("\tP%d\t%d\n",i+1,wt);
	}
	avgt=avg/pro;
	printf("\n\nAverage Turnaround Time\t%f",avgt);

	getch();
}