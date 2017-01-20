/*
 *     num:    201510050407
 * puepose:    标准差
 *  Create:    2016年12月31日
 *  Author:    Albert
 */

#include<stdio.h>
#include<math.h>
main()
{	
	int i;
	double sum1=0,sum2=0,X1,S;
	double a[5]={1.2,2.0,3.0,4.0,5.0};
	for(i=0;i<5;i++)
	{
		sum1+=a[i];
	}
	X1=sum1/5;
	for(i=0;i<5;i++)
	sum2+=(a[i]-X1)*(a[i]-X1);
	S=sqrt(sum2/5);
	printf("%lf",S);
}