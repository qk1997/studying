/*
 *     num:    201510050407
 * puepose:    平行圈弧长
 *  Create:    2016年12月31日
 *  Author:     Albert
 */

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define p 206265
#define e 0.0066943799013
main()
{
	FILE *fp1,*fp2;
	double N,B,L1,L2,s,W;
	double a=6370137.0;
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
	fscanf(fp1,"%lf,%lf,%lf,%lf",&B,&L1,&L2);
	W=sqrt((1-e*e)*sin(B));
	N=a/W;
	s=N*cos(B)*(L1-L2)/p;
	printf("%lf\n",s);
	fprintf(fp2,"%lf\n",s);
}
	fclose(fp1);
	fclose(fp2);

}