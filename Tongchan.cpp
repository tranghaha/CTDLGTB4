#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100
void nhap(int a[], int &n)
{
	do
	{
		printf("\nNhap so phan tu: ");
		scanf("%d",&n);
		if(n<=0 || n > MAX)
		{
			printf("\nSo phan tu khong hop le.Xin kiem tra lai");
			}
			}while(n<=0 || n>MAX);
			for( int i=0;i<n;i++)
			{
				printf("\nNhap a[%d]: ",i);
				scanf("%d",&a[i]);
				}
				}
				void xuat(int a[], int &n)
				{
					for( int i=0;i<n;i++)
					{
						printf("%4d",a[i]);
						}
						}
						int Tongchan(int a[],int n)
						{
							if(n==0)
							return 0;
							float s = Tongchan(a, n-1);
							if(a[n-1]%2 == 0)
							s = s + a[n-1];
							return s;
							//if(n==0)
							//return 0;
							//if(a[n-1]%2 == 0)// xet phan tu cuoi truoc
							//return Tongchan(a, n-1) + (a, n-1);
							//return Tongchan(a, n-1);
							}
							int main()
							{
								int n;
								int a[MAX];
								nhap(a,n);
								xuat(a,n);
								int Tong = Tongchan(a,n);
								printf("\nTong cac so chan = %d", Tong);
								getch();
								return 0;
								}
							
