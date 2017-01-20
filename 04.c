/*
 *     num:    201510050407
 * puepose:    对于不同等级的 GPS 网精度要求
 *  Create:    2016年12月31日
 *  Author:    Albert
 */

#include<stdio.h>
main()
{
	int a;
	scanf("%d",&a);
	if(a<=5) {putchar('A');printf("b=0.1,s=100~2000");}
	if(a<=8) {putchar('B');printf("b=1,s=15~250");}
	else{
		putchar('C');
		putchar('D');
		putchar('E');
		}
