/*
 *     num:    201510050407
 * puepose:    多边形面积
 *  Create:    2016年12月31日
 *  Author:    Albert
 */

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define rad atan(1)/45
#define p 206265
double area_s(double x[5],double y[5],int n)
{
	double s=0,area;
	int i;
	for(i=1;i<=n;i++){
		if(i+1==n+1){
			x[i+1]=x[1];y[i+1]=y[1];}
			s+=(y[i]+y[i+1])*(x[i+1]-x[i])/2;
}			
			return area;
}
main()
{	FILE *fp1,*fp2;
	
	double a[10],b[10],area;int i=0,n=5;
	if((fp1=fopen("filein4","rt"))==NULL){
		printf("can not open input file\n");
		return -1;
	}
	if((fp2=fopen("fileout4","wt"))==NULL){
		printf("can not open create output file\n");
		return -2;
	}
	while(!feof(fp1)){
	fscanf(fp1,"%lf\t%lf\n",&a[i],&b[i]);
	i++;
	area=area_s(a,b,n);
	printf("%6.3lf\t%6.3lf\t%6.3lf\t%6.3lf\t%6.3lf\n",area);
	fprintf(fp2,"%6.3lf\n",area);
	}
	fclose(fp1);
	fclose(fp2);

}