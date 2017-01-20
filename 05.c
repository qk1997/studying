/*
 *     num:    201510050407
 * puepose:    分带投影经度计算
 *  Create:    2016年12月31日
 *  Author:    Albert
 */

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
main()
{
	FILE *fp1,*fp2;
	int n,L0,L1;
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
	fscanf(fp1,"%lf",&n);
	L0=6*n-3;
	L1=3*n;
	printf("%lf%lf\n",L0,L1);
	fprintf(fp2,"%lf%lf\n",L0,L1);
	fclose(fp1);
	fclose(fp2);
}
