/*
 *     num:    201510050407
 * puepose:    竖曲线点高程计算
 *  Create:    2016年12月31日
 *  Author:    Albert
 */

#include<stdio.h>
#include<stdlib.h>
double Vector_E(double T,double R){return (0.5*T*T/R);}
double Cut_T(double R,double i1,double i2){
	double ct=0.5*R*(i1-i2);
	if(i1>i2) return ct;
	else return -ct;}
int main(){
	double i1,i2,r;
	double T,E;
		scanf("%lf%lf%lf\n",&r,&i1,&i2);
		T=Cut_T(r,i1,i2);
		E=Vector_E(T,r);
		printf("%7.3lf\t%6.2lf\t%9.4lf\t%9.4lf\t%9.4lf\t\n",r,i1,i2,T,E);
		
}
