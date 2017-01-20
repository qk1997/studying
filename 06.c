/*
 *     num:    201510050407
 * puepose:    度分秒到弧度
 *  Create:    2016年12月31日
 *  Author:    Albert
 */

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
double dms2rad(double deg,double min,double sec)
{
	double rad;
	rad=(deg+min/60+sec/3600)*atan(1)/45;
	return rad;
}
main()
{	
	double rad,deg,min,sec;
	FILE *fp1,*fp2;
	if((fp1=fopen("filein","rt"))==NULL){
		printf("can not open input file\n");
		return -1;
	}
	if((fp2=fopen("fileout","wt"))==NULL){
		printf("can not open create output file\n");
		return -2;
	}
	while(!feof(fp1)){
	fscanf(fp1,"%lf%lf%lf\n",&deg,&min,&sec);
	rad=dms2rad(deg,min,sec);
	printf("%6.3lf\t%6.3lf\t%6.3lf\t%6.3lf\n",deg,min,sec,rad);
	fprintf(fp2,"%6.3lf\t%6.3lf\t%6.3lf\t%6.3lf\n",deg,min,sec,rad);
	}
	fclose(fp1);
	fclose(fp2);


}
