#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

int main()
{
    int n, i, bookcode[4];
    
    system("cls");
    printf("Masukkan Jumlah Buku : "); scanf("%d", &n);
    for ( i = 1; i <= n; i++)
    {
        printf("Buku Ke %d\n", i);
        printf("Masukkan Kode Buku : "); scanf("%d", &bookcode[i]);
    }
    if (n==2)
    {
        printf("Judul Buku 1 : ", bookcode[1]);
        printf("Judul Buku 2 : ", bookcode[2]);
    }

    return 0;
}