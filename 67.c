/*
 *     num:    201510050407
 * puepose:    高程参考系统
 *  Create:    2016年12月31日
 *  Author:    Albert
 */

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define rad atan(1)/45
main()
{	FILE *fp1,*fp2;
	double h1,h2,a,H1,H2,N;
	if((fp1=fopen("filein4","rt"))==NULL){
		printf("can not open input file\n");
		return -1;
	}
	if((fp2=fopen("fileout4","wt"))==NULL){
		printf("can not open create output file\n");
		return -2;
	}
	while(!feof(fp1)){
	fscanf(fp1,"%lf%lf%lf%lf\n",&h1,&h2,&a,&N);
	H1=h1+a;H2=h2+N;
	printf("%6.3lf\t%6.3lf\t%6.3lf\t%6.3lf\t%6.3lf\t%6.3lf\n",h1,h2,a,N,H1,H2);
	fprintf(fp2,"%6.3lf\t%6.3lf\t%6.3lf\t%6.3lf\t%6.3lf\t%6.3lf\n",h1,h2,a,N,H1,H2);
	}
	fclose(fp1);
	fclose(fp2);

}