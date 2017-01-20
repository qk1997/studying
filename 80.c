#include<stdio.h>
#include<math.h>
#include<stdlib.h>
main()
{
	FILE *fp1; //定义
struct Data
{
	int up;
	int mid1,mid2;
	int down;
	int s;
}front,rear;
	double sum_d=0,ave_h;
	int d,Val;//视距差，K+黑-红 ；
	int m,m1,m2;//黑面高差和红面高差；
	int k,k1,k2;//后尺和前尺红面基础读数；
	int n,n1,n2;//后尺和前尺红黑面读数差；
	printf("请依次输入水准尺后尺和前尺红面基础读数\n");
	//	scanf("%d%d",&k1,&k2);
	k1=4787;k2=4687;
		k=k1;k1=k2;k2=k;
	//	while(1){
	printf("请依次输入水准尺后尺上丝，下丝，黑面中丝，红面中丝读数\n");
		
	printf("请依次输入水准尺前尺上丝，下丝，黑面中丝，红面中丝读数\n");
	if((fp1=fopen("data.in.c","rt"))==NULL){
		printf("can not open input file\n");
		return -1;
	}	
	while(!feof(fp1)){
	fp1=fopen("file1.txt","rw"); //打开
	fscanf(fp1,"%d%d\n",&k1,&k2);
	fscanf(fp1,"%d%d%d%d\n",&rear.up,&rear.down,&rear.mid1,&rear.mid2);
	fscanf(fp1,"%d%d%d%d\n",&front.up,&front.down,&front.mid1,&front.mid2);}
	fclose(fp1); //关闭
	rear.up=1571;rear.down=1197;rear.mid1=1384;rear.mid2=6171;
	front.up=739;front.down=363;front.mid1=551;front.mid2=5239;
	printf("rear.up=1571;rear.down=1197;rear.mid1=1384;rear.mid2=6171;\n");
	printf("front.up=739;front.down=363;front.mid1=551;front.mid2=5239;\n");
	k=k1;k1=k2;k2=k;
	front.s=front.up-front.down;
	rear.s=rear.up-rear.down;
	d=(rear.s-front.s);
	sum_d=sum_d+d/10.0;
	printf("rear.s=%d front.s=%d\n",rear.s,front.s);
	printf("d=%d sum_d=%lf\n",d,sum_d);
	m1=rear.mid1-front.mid1;
	m2=rear.mid2-front.mid2;
	if(abs(m1)<abs(m2))
		m=abs(m1)+100-abs(m2);
	if(abs(m1)>abs(m2))
		m=abs(m1)-100-abs(m2);
	if(m1<0)
		m=-m;	
	if(m>5||m<-5)
		printf("overrun\n");
	printf("m1=%d m2=%d m=%d\n",m1,m2,m);
	n1=rear.mid1-rear.mid2+k1;
	n2=front.mid1-front.mid2+k2;
	n=n1-n2;
	if((n1>3)||(n1<-3) && (n2>3)||(n2<-3))
		printf("overrun\n");
	printf("n1=%d n2=%d n=%d\n",n1,n2,n);
	if(n!=m)
			printf("error\n");
	printf("Val=%d  ",m);
	ave_h=m1-m/2.0;
	printf("ave_h=%lf\n",ave_h);
//	}

}