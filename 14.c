/*
 *     num:    201510050407
 * puepose:    求矩阵对角
 *  Create:    2016年12月31日
 *  Author:    Albert
 */

#include<stdio.h>
#include<math.h>
void duijiao(int m[3][3])
{
	int i,j;
	printf("zheng dui jiao:\n");
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			if(i==j)
			printf("%d ",m[i][j]);
			printf("\n");
}
		printf("fan dui jiao:\n");
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			if(abs(i-j)==2||i==1&&i==j)
					printf("%d ",m[i][j]);
					printf("\n");
	}
}
void print(int m[3][3])
{
	int i,j;
	printf("original matrix: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d ",m[i][j]);
		printf("\n");
	}
}
main()
{	
	int m[3][3]={1,2,3,4,5,6,7,8,9};
	print(m);
	duijiao(m);
	
}