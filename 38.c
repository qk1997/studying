/*
 *     num:    201510050407
 * puepose:    ��Ϲ۲ⷨ�Ķ���λ�÷���
 *  Create:    2016��12��31��
 *  Author:    Albert
 */

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define rad atan(1)/45
main()
{	
	int n;
	double a,b;
	scanf("%lf%lf\n",&b,&n);
	if(pow(-1,n)<0)
		a=b/(n-1)+4;
	else a=b/n+4;
	printf("%6.3lf\t%6.3lf\t%6.3lf\n",a,b,n);

}