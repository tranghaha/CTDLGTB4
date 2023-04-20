#include<stdio.h>
#include<conio.h>
int factorial(int n)
{
	if(n == 0)
	return 1;
	else
	return factorial(n-1)*n;
	}
	int main()
	{
		int n;
		printf("\nNhap n: ");
		scanf("%d",&n);
		printf("n! =%d",n);
		return n;	
			}
