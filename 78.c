/*
 *     num:    201510050407
 * puepose:    测站归心改正公式
 *  Create:    2016年12月31日
 *  Author:    Albert
 */

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define rad atan(1)/45
#define p 206265
main()
{	FILE *fp1,*fp2;
	double a,M,e,s,c,r;
	if((fp1=fopen("filein4","rt"))==NULL){
		printf("can not open input file\n");
		return -1;
	}
	if((fp2=fopen("fileout4","wt"))==NULL){
		printf("can not open create output file\n");
		return -2;
	}
	while(!feof(fp1)){
	fscanf(fp1,"%lf%lf%lf%lf\n",&a,&M,&e,&s);

	c=e/s*p*sin(M+a);
	r=e/s*p*sin(M+a);

	printf("%6.3lf\t%6.3lf\t%6.3lf\t%6.3lf\t%6.3lf\t%6.3lf\n",a,M,e,s,c,r);
	fprintf(fp2,"%6.3lf\t%6.3lf\t%6.3lf\t%6.3lf\t%6.3lf\t%6.3lf\n",a,M,e,s,c,r);
	}
	fclose(fp1);
	fclose(fp2);

}