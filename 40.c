/*
 *     num:    201510050407
 * puepose:    ��һͼ�ε��Ӿ����
 *  Create:    2016��12��31��
 *  Author:    Albert
 */

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define rad atan(1)/45
main()
{
	double d,a,S;
	scanf("%lf%lf\n",&d,&a);
	a=0.5*a*rad;
	S=0.5*d/tan(a);
	printf("%6.3lf\t%6.3lf\t%6.3lf\n",a,d,S);

}
