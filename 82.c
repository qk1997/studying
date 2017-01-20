/*
 *     num:    201510050407
 * puepose:    (TDB)和(TDT)
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
	double TDT,TDB,g,T,a,M,e,s,r,c;
	if((fp1=fopen("filein4","rt"))==NULL){
		printf("can not open input file\n");
		return -1;
	}
	if((fp2=fopen("fileout4","wt"))==NULL){
		printf("can not open create output file\n");
		return -2;
	}
	while(!feof(fp1)){

	fscanf(fp1,"%lf\t%lf\n",&TDT,&T);
	g=(357.528+35999.050*T)*(rad);
	TDB=TDT+0.001658*sin(g+0.0167*sin(g));

	printf("%6.3lf\t%6.3lf\t%6.3lf\t%6.3lf\t%6.3lf\t%6.3lf\n",a,M,e,s,c,r);
	fprintf(fp2,"%6.3lf\t%6.3lf\t%6.3lf\t%6.3lf\t%6.3lf\t%6.3lf\n",a,M,e,s,c,r);
	}
	fclose(fp1);
	fclose(fp2);

}