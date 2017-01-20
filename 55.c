/*
 *     num:    201510050407
 * puepose:    矩阵求逆
 *  Create:    2016年12月31日
 *  Author:    Albert
 */

#include <stdio.h>
#include <math.h>

int yizishi(int m[3][3],int i,int j){
	int a,b,k=0;
	int n[4];
	for(a=0;a<3;a++)
		for(b=0;b<3;b++){
			if(a!=i&&b!=j){
				n[k]=m[a][b];
				k++;
			}
		}
	k=n[0]*n[3]-n[1]*n[2];
	return k;
}

int  hanglieshi(int m[3][3]){
	int i=0,j;
	int temp=1,sum=0;
	for(j=0;j<3;j++){
		sum=sum+temp*m[0][j]*yizishi(m,i,j);
		temp=-temp;
	}
	return sum;
}

int main(){
	int i,j;
	int hls;
	double A[3][3];
	int m[3][3]={{1,1,1},{1,3,1},{1,3,4}};

	printf("\noriginal matrix\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			printf("%5d ",m[i][j]);
		printf("\n");
	}

	hls=hanglieshi(m);
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			A[j][i]=1.0*yizishi(m,i,j)/hls;

	printf("\n follow matrix ：\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			printf("%5.0lf ",hls*A[i][j]);
		printf("\n");
	}

	printf("\n inversed matrix ：\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			printf("%5.1lf ",A[i][j]);
		printf("\n");
	}
	return 0;
}
