/*
 *     num:    201510050407
 * puepose:    地基承载力
 *  Create:    2016年12月31日
 *  Author:    Albert
 */

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define rad atan(1)/45
main()
{	FILE *fp1,*fp2;
	double N,M;
	if((fp1=fopen("filein4","rt"))==NULL){
		printf("can not open input file\n");
		return -1;
	}
	if((fp2=fopen("fileout4","wt"))==NULL){
		printf("can not open create output file\n");
		return -2;
	}
	while(!feof(fp1)){
	fscanf(fp1,"%lf\n",&N);
	M=(N*0.785-2)/100;
	printf("%6.3lf\tlf\n",N,M);
	fprintf(fp2,"%6.3lf\tlf\n",N,M);
	}
	fclose(fp1);
	fclose(fp2);

}