/*
 *     num:    201510050407
 * puepose:    角度转换
 *  Create:    2016年12月31日
 *  Author:    Albert
 */

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
double rad2dms(double rad)
{
	int deg,min,sec;
	deg=(int)(rad*45/atan(1));
	min=(int)((rad*45/atan(1)-deg)*60);
	sec=((rad*45/atan(1)-deg)*60-min)*60;
	printf("%d%d%d\n",deg,min,sec);
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
	fscanf(fp1,"%lf\n",&rad);
	rad2dms(rad);
//	printf("%6.3lf\t%6.3lf\t%6.3lf\t%6.3lf\n",deg,min,sec,rad);
//	fprintf(fp2,"%6.3lf\t%6.3lf\t%6.3lf\t%6.3lf\n",deg,min,sec,rad);
	}
	fclose(fp1);
	fclose(fp2);


}
