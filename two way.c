
#include <stdio.h>
#include<string.h>

void deciphering();
void encrypting();


void main()
{
	while(1)
	{
		encrypting();
		deciphering();
	}
}

void  deciphering()
{
	char str[100]="0",str_buf[100]="0";
	char *p;
	int number,n,i;
	printf("please input the matter for deciphering :\n");
	gets(str);
	p=str;
	number=str_lenth(p);
	if(number%2==0)
		n=number/2;
	else
		n=number/2+1;
	for(i=0;i<number;i++)
	{
		if(i<n)
			str_buf[2*i]=str[i];
		else
			str_buf[(i-n)*2+1]=str[i];
	}
	printf("%s",str_buf);
	getchar();
}

void encrypting()
{
	char str[100]="0",str_odd[100]="0",str_even[100]="0";
	char *p;
	int number,i,j,m;
	p=str;
	printf("please input the matter for encrypting :\n");
	gets(str);
	number=str_lenth(p);
	m=number/2;
	if(number%2==0)
	{
		for(i=0;i<m;i++)
		{
			str_even[i]=str[2*i];
			str_odd[i]=str[2*i+1];
		}
	}
	else
	{
		for(i=0;i<=m;i++)
		{
			str_even[i]=str[2*i];
			str_odd[i]=str[2*i+1];
		}
	}
	printf("%s",str_even);
	printf("%s",str_odd);
	getchar();
}

int str_lenth(char *pt)
{
	int i=0;
	for(;*pt!='\0';pt++) i++;
	return i;
}
