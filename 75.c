/*
 *     num:    201510050407
 * puepose:    重力测量工作比例尺
 *  Create:    2016年12月31日
 *  Author:    Albert
 */

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
main()
{
	char ch;
	while(1)
	{	
		printf("\n(1) 重力预查 (2) 重力普查 (3) 重力详查 (4)重力详查\n");
		ch=getch();
		switch(ch)
		{
		case'1':printf("比例尺1:100万,测点间距7000-10000，测点密度0.01-0.02\n");
				printf("比例尺1:50万,测点间距3000-5000，测点密度0.04-0.1\n"); break;
		case'2':printf("比例尺1:20万,测点间距1500-2000，测点密度0.25-0.5\n");
				printf("比例尺1:10万,测点间距500-1000，测点密度1-4\n");break;
		case'3':printf("比例尺1:5万,测点间距200-500，测点密度4-25\n");
				printf("比例尺1:2.5万,测点间距100-200，测点密度25-100\n");break;
		case'4':printf("比例尺1:5000,测点间距25-50，测点密度400-1600\n");
				printf("比例尺1:2000万,测点间距10-20，测点密度2500-10000\n");break;
				break;
		}
	}
}
