/*
 *     num:    201510050407
 * puepose:     分带投影带号计算
 *  Create:    2016年12月31日
 *  Author:    Albert
 */

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
main()
{
	FILE *fp1,*fp2;
	int L1,L2,L0,n1,n2;
if((fp1=fopen("data.in","r"))==NULL)
{
	printf("cannot open this file\n");
	exit(-1);
}
if((fp2=fopen("data.out","w"))==NULL)
{
	printf("cannot open this file\n");
	exit(-2);
}

while(!feof(fp1)){
	fscanf(fp1,"%d%d",&L1,&L2);
	n1=1/6*(L0+3);
	n2=2*n1-1;
	printf("%d%d\n",n1,n2);
	fprintf(fp2,"%d%d\n",n1,n2);
	fclose(fp1);
	fclose(fp2);
}
}