/*
 *     num:    201510050407
 * puepose:    矩阵查找最大最小值
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
void seek_max(int m[3][3])
{	int i,j,m1,n1,max;
	max=m[0][0];
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
		{
			if(max<=m[i][j])
			{
				max=m[i][j];
			m1=i;n1=j;
			}
		}
	}
	printf("max=%d \n",max);
	printf("%d,%d\n",m1,n1);
}
void seek_min(int m[3][3])
{int i,j,m2,n2,min;
min=m[0][0];
for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
		{
		if(min>=m[i][j])
		{min=m[i][j];m2=i;n2=j;}
		}
	}
	printf("min=%d\n",min);
	printf("%d,%d\n",m2,n2);
}
main()
{	
	int i,j,m1,m2,n1,n2;
	int max,min;
	int p[3][3]={3,2,5,6,9,8,7,4,1};
	print(p);
	seek_max(p);
	seek_min(p);
}