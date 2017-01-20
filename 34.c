/*
 *     num:    201510050407
 * puepose:    组合观测法的度盘位置分配
 *  Create:    2016年12月31日
 *  Author:    Albert
 */

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define rad atan(1)/45
main()
{	FILE *fp1,*fp2;
	double a,n,b;
	if((fp1=fopen("filein4","rt"))==NULL){
		printf("can not open input file\n");
		return -1;
	}
	if((fp2=fopen("fileout4","wt"))==NULL){
		printf("can not open create output file\n");
		return -2;
	}
	while(!feof(fp1)){
	fscanf(fp1,"%lf%lf\n",&b,&n);
	if(pow(-1,n)<0)
		a=b/(n-1)+4;
	else a=b/n+4;
	printf("%6.3lf\t%6.3lf\t%6.3lf\n",a,b,n);
	fprintf(fp2,"%6.3lf\t%6.3lf\t%6.3lf\n",a,b,n);
	}
	fclose(fp1);
	fclose(fp2);

}