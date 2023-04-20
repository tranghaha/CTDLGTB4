#include<stdio.h>
void Nhap(int a[], int n)
{
    for(int i=0; i<n ; i++)
    {
        printf("Nhap a[%d] = ",i);
        scanf("%d", &a[i]);
    }
}
void Sapxep(int a[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }
}

int main()
{
    int a[100];
    int n;
    do{
        printf("Nhap so phan tu cua mang:");
        scanf("%d", &n);
        if(n<1 || n>100)
        {
            printf("Nhap lai:");
        }
    }while(n<1 || n>100);
    Nhap(a, n);
    Sapxep(a,n);
    printf("\nCac phan tu trong mang la:\n");
    printf("\nMang sau khi sap xeo la:\n");
}
