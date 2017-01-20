/*
 *     num:    201510050407
 * puepose:    照准差
 *  Create:    2016年12月31日
 *  Author:     Albert
 */

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define rad atan(1)/45
double ZZC(int dms1,int dms2)
{	
	int sec;double C;
	int deg1,min1,sec1,deg2,min2,sec2;
	sec1=dms1%100;
	min1=(dms1%10000-sec1)/100;
	deg1=(dms1-sec1-min1*100)/10000;
	sec2=dms2%100;
	min2=(dms2%10000-sec2)/100;
	deg2=(dms2-sec2-min2*100)/10000;
	if(deg1<deg2)
	sec=deg1*3600+min1*60+sec1-deg2*3600-min2*60-sec2+180*3600;
	else sec=deg1*3600+min1*60+sec1-deg2*3600-min2*60-sec2-180*3600;
	C=sec;
	return C;
	
}
main()
{	FILE *fp1,*fp2;
	int L,R;
	double c,C,z;
	if((fp1=fopen("filein1","rt"))==NULL){
		printf("can not open input file\n");
		return -1;
	}
	if((fp2=fopen("fileout1","wt"))==NULL){
		printf("can not open create output file\n");
		return -2;
	}
	while(!feof(fp1)){
	fscanf(fp1,"%d%d%lf\n",&L,&R,&z);
	C=ZZC(L,R);
	z=z*atan(1)/45;
	c=-C/sin(z);
	printf("%d\t%d\t%lf\t%lf\t%lf\n",L,R,z,C,c);
	fprintf(fp2,"%d\t%d\t%lf\t%lf\t%lf\n",L,R,z,C,c);
	}
	fclose(fp1);
	fclose(fp2);

}