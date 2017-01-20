/*
 *     num:    201510050407
 * puepose:    摄影测量航向重叠度计算
 *  Create:    2016年12月31日
 *  Author:    Albert
 */

#include<stdio.h>
#include<math.h>
main()
{
	
	FILE *fp1,*fp2;
	double p1,p2,l,L,H,h;
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
	fscanf(fp1,"%lf,%lf,%lf,%lf",&l,&L,&h,&H);
	p1=l/L*100;
	p2=p1+(1-p1)*h/H;
	printf("%lf\t%lf\n",p1,p2);
	fprintf(fp2,"%lf\t%lf\n",p1,p2);
}
	fclose(fp1);
	fclose(fp2);

}

