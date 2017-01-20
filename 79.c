#include<stdio.h>
#define N 4

main()
{
	int i,j,t,count=0;
/*	for(i=0;i<N;i++)
		scanf("%d",&a[i]);*/
int	a[N]={4,2,1,3};
	for(i=1;i<=N-1;i++)
		for(j=0;j<N-i;j++)
	if(a[j]>a[j+1])
	{
		t=a[j];
		a[j]=a[j+1];
		a[j+1]=t;
	}
	for(i=0;i<N;i++)
	{
	count++;
		printf("%d ",a[i]);
		if(count%5==0)
			printf("\n");
	}

		printf("\n");
}