/*
 *     num:    201510050407
 * puepose:    ����ת��
 *  Create:    2016��12��31��
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
void zhuanzhi(int n[3][3])
{	int i,j,temp;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{
			if(j>i)
			{
				temp=n[i][j];
				n[i][j]=n[j][i];
				n[j][i]=temp;
			}
		}
		printf("ת�ú�ľ���\n");
}
main()
{
	int n[3][3]={1,2,3,4,5,6,7,8,9};
	print(n);
	zhuanzhi(n);
	print(n);

}