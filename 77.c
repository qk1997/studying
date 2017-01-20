/*度分秒到度*/
#include<stdio.h>
struct dms
{
   int deg;
   int min;
   double sec;
}n;
double dms2deg1(int deg,double min,double sec)
{	int n;
	double D;
	n=1234530;
	sec=n%100;
	min=(n%10000-sec)/100;
	deg=n/10000;
	printf("%d°%d′%lf″=",deg,min,sec);
	D=deg+min/60.0+sec/3600.0;
	printf("%lf°",D);
}
double dms2deg2()
{

	double D;
	int deg,min;
	double sec,dms;
	dms=1234530.5;
	deg=(int)dms/10000;
	min=((int)dms-deg*10000)/100;
	sec=dms-deg*10000-min*100;
	printf("%d°%d′%lf″=",deg,min,sec);
	D=deg+min/60.0+sec/3600.0;
	printf("%lf°",D);
}
double dms2deg3(struct dms n)
{
	double D;
	printf("%d°%d′%d″=",n.deg,n.min,n.sec);
	D=n.deg+n.min/60.0+n.sec/3600.0;
	printf("%lf",D);
}
double dms2deg4(double dms[])
{	double D;
	int deg,min;
	double sec;
	deg=(int)dms[1]/10000;
	min=((int)dms[1]-deg*10000)/100;
	sec=dms[1]-deg*10000-min*100;
	D=deg+min/60.0+sec/3600.0;
	printf("%d°%d′%lf″=",deg,min,sec);
	printf("%lf°\n",D);
}
struct dms intput()
{
	double x;
	x=1234530.5;
//	scanf("%lf",&x);
	n.deg=(int)x/10000;
	n.min=(int)(x-n.deg*10000)/100;
	n.sec=x-n.deg*10000-n.min*100;
	return(n);	
}
main()
{
	int deg,min;
	double sec;
	double x;
	char ch;
	double dms[10];
	dms[1]=1234530.5;
	while (1) {
		printf ("\n   Selections:  (1)dms2deg1  (2)dms2deg2  (3)dms2deg3  (4)dms2deg4 (5) Quit\n");
		ch=getchar();
		switch (ch) {
			case '1': dms2deg1(deg,min,sec); break;
			case '2': dms2deg2(); break;
			case '3': intput();dms2deg3(n); break;
			case '4': dms2deg4(dms); break;
			case '5': return ;
			}
	}

}