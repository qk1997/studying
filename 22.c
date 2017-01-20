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
	double U,V,A,T,D,R,L;
	double x1,x2,y1,y2;
	if((fp1=fopen("filein4","rt"))==NULL){
		printf("can not open input file\n");
		return -1;
	}
	if((fp2=fopen("fileout4","wt"))==NULL){
		printf("can not open create output file\n");
		return -2;
	}
	while(!feof(fp1)){
	fscanf(fp1,"%lf%lf%lf%lf%lf%lf\n",&R,&L,&D,&A,&U,&V);
	T=((R+L*L)/(24*R)*tan(D/2))+L*L/2-L*L*L/(240*R*R);
	x1=U+T*cos(A+180);
	y1=V+T*sin(A+180);
	x2=U+T*cos(A+D);
	y2=V+T*sin(A+D);
	printf("%6.3lf\t%6.3lf\t%6.3lf\t%6.3lf\t%6.3lf\n",x1,y1,x2,y2,T);
	fprintf(fp2,"%6.3lf\t%6.3lf\t%6.3lf\t%6.3lf\t%6.3lf\n",x1,y1,x2,y2,T);
	}
	fclose(fp1);
	fclose(fp2);

}