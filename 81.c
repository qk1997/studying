/*
 * 磁盘文件信息复制
 *
 *  Created on: 2016年12月31日
 *      Author: Albert
 */

#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *in,*out;
	char ch,infile[10],outfile[10];
	printf("请输入读入文件的名字：");
	scanf("%s",infile);
	printf("请输入输出文件的名字：");
	scanf("%s",outfile);
	if((in=fopen("infile","r"))==NULL)
{
	printf("cannot open this file\n");
	exit(-1);
}
if((out=fopen("outfile","w"))==NULL)
{
	printf("cannot open this file\n");
	exit(-2);
}

while(!feof(in)){
	ch=fgetc(in);
	fputc(ch,out);
	putchar(ch);
}
	putchar(10);
	fclose(in);
	fclose(out);
	return 0;
}
