/*
 *     num:    201510050407
 * puepose:    平曲线转角点偏角计算公式
 *  Create:    2016年12月31日
 *  Author:    Albert
 */

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define rad atan(1)/45
main()
{	FILE *fp1,*fp2;
	double a1,a2,b;
	if((fp1=fopen("filein4","rt"))==NULL){
		printf("can not open input file\n");
		return -1;
	}
	if((fp2=fopen("fileout4","wt"))==NULL){
		printf("can not open create output file\n");
		return -2;
	}
	while(!feof(fp1)){
	fscanf(fp1,"%lf%lf\n",&a1,&a2);
	b=a1-a2;
	printf("%6.3lf\t%6.3lf\t%6.3lf\n",a1,a2,b);
	fprintf(fp2,"%6.3lf\t%6.3lf\t%6.3lf\n",a1,a2,b);
	}
	fclose(fp1);
	fclose(fp2);

}