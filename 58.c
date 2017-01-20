/*
 *     num:    201510050407
 * puepose:    矩阵相减
 *  Create:    2016年12月31日
 *  Author:    Albert
 */

#include<stdio.h>
void print(int x[3][3])
{
	int i,j;
	printf("original matrix: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d ",x[i][j]);
		printf("\n");
	}
}
void minus(int m[3][3],int n[3][3])
{	
	int i,j;
	printf("equals:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%d ",m[i][j]-n[i][j]);
		printf("\n");
	}
}
main()
{	
	int i,j,k;
	int m[3][3]={1,2,3,4,5,6,7,8,9};
	int n[3][3]={2,4,3,5,6,7,8,9,1};
	print(m);
	print(n);
	minus(m,n);
}