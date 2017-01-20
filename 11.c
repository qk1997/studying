/*
 *     num:    201510050407
 * puepose:    矩阵相乘
 *  Create:    2016年12月31日
 *  Author:    Albert
 */

#include<stdio.h>
#include<math.h>
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
void multiply(int m[3][3],int n[3][3])
{	
	int i,j;int p[3][3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		p[i][j]=m[i][0]*n[0][j]+m[i][1]*n[1][j]+m[i][2]*n[2][j];
		}
	}
	printf("equals:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%-4d ",p[i][j]);
		printf("\n");
	}

}
main()
{	
	int i,j,k;
	int m[3][3]={1,2,3,4,5,6,7,8,9};
	int n[3][3]={2,3,4,5,6,7,8,9,1};
	print(m);
	print(n);
	multiply(m,n);
}