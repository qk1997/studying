/*
 *     num:    201510050407
 * puepose:    �̲߳ο�ϵͳ
 *  Create:    2016��12��31��
 *  Author:    Albert
 */

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define rad atan(1)/45
main()
{
	double h1,h2,a,H1,H2,N;
	scanf("%lf%lf%lf%lf\n",&h1,&h2,&a,&N);
	H1=h1+a;H2=h2+N;
	printf("%6.3lf\t%6.3lf\t%6.3lf\t%6.3lf\t%6.3lf\t%6.3lf\n",h1,h2,a,N,H1,H2);

}