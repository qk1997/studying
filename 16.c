/*
 *     num:    201510050407
 * puepose:    矩阵求迹
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
void Tra(int m[3][3])
{
	int i,j;
	int tra=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			if(i==j){
				tra+=m[i][j];}
	}
		printf("Tra=%d\n",tra);
}
main()
{	
	int i,j,tra=0;
	int m[3][3]={1,2,3,4,5,6,7,8,9};
	print(m);
	Tra(m);
}