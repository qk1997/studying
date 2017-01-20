/*
 *     num:    201510050407
 * puepose:    坐标增量公式
 *  Create:    2016年12月31日
 *  Author:    Albert
 */

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define rad atan(1)/45
main()
{	FILE *fp1,*fp2;
	double x,y,D,T,X,Y;
	if((fp1=fopen("filein2","rt"))==NULL){
		printf("can not open input file\n");
		return -1;
	}
	if((fp2=fopen("fileout2","wt"))==NULL){
		printf("can not open create output file\n");
		return -2;
	}
	while(!feof(fp1)){
	fscanf(fp1,"%lf%lf%lf%lf\n",&x,&y,&D,&T);
	T=T*rad;
	X=x+D*cos(T);
	Y=y+D*sin(T);
	printf("%lf\t%lf\t%lf\t%lf\t%lf\t%lf\n",x,y,X,Y,D,T);
	fprintf(fp2,"%lf\t%lf\t%lf\t%lf\t%lf\t%lf\n",x,y,X,Y,D,T);
	}
	fclose(fp1);
	fclose(fp2);

}