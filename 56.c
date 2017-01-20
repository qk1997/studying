/*
 *     num:    201510050407
 * puepose:    单一图形的视距计算
 *  Create:    2016年12月31日
 *  Author:    Albert
 */

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define rad atan(1)/45
main()
{	FILE *fp1,*fp2;
	double d,a,S;
	if((fp1=fopen("filein3","rt"))==NULL){
		printf("can not open input file\n");
		return -1;
	}
	if((fp2=fopen("fileout3","wt"))==NULL){
		printf("can not open create output file\n");
		return -2;
	}
	while(!feof(fp1)){
	fscanf(fp1,"%lf%lf\n",&d,&a);
	a=0.5*a*rad;
	S=0.5*d/tan(a);
	printf("%6.3lf\t%6.3lf\t%6.3lf\n",a,d,S);
	fprintf(fp2,"%6.3lf\t%6.3lf\t%6.3lf\n",a,d,S);
	}
	fclose(fp1);
	fclose(fp2);

}