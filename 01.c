/*
 *     num:    201510050407
 * puepose:    大地坐标计算空间大地直角坐标
 * Create :    2016年12月31日
 * Author:     Albert
 */

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define e 0.0066943799013
main()
{
	
	FILE *fp1,*fp2;
	double N,B,L,h,W;
	double X,Y,Z;
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
	fscanf(fp1,"%lf,%lf,%lf",&B,&L,&h);
	W=sqrt((1-e*e)*sin(B));
	N=a/W;
	X=(N+h)*cos(B)*cos(L);
	Y=(N+h)*cos(B)*sin(L);
	Z=(N*(1-e*e)+h)*sin(B);
	printf("%lf%lf%lf\n",X,Y,Z);
	fprintf(fp2,"%lf%lf%lf\n",X,Y,Z);
}
	fclose(fp1);
	fclose(fp2);

}

