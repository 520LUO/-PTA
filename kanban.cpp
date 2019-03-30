#include <stdio.h>
#include <stdlib.h>
int Even (int n);
int  Odd(int n);
int main()
{
	int i=0;
	int n;
	printf("Please input n:");
	scanf("%d",&n);
	if(n<=0)
	{
	exit(0);
	}
	while(n!=1)
	{
	while(n%2==0)
	{
		n=Even(n);
		i++;

	}
	while(n%2!=0 && n!=1)
	{
		n=Odd(n);
		i++;
	}

	}
	printf("%d\n",i);
}
/*Å¼Êý¿³°ëº¯Êý*/
int Even(int n)
{
	n=n/2;
	return n;
}
/*ÆæÊý¿³°ëº¯Êý*/

int Odd(int n)
{
	n=(3*n+1)/2;
	return n;
}