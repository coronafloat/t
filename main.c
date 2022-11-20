#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <string.h>

void gotoxy(int x, int y){
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void login();
void menu();
void loading();
void loadingv2();

int main()
{
    // login();
    menu();

    return 0;
}
void login()
{
    
    char username[100], password[10];
    int pilihan;
    int pengunjung, kodebuku;
    int key;

    login :
    system("cls");
    gotoxy(75,4);
    printf("USERNAME : "); scanf(" %[^\n]s", &username);
    gotoxy(75,5);
    printf("PASSWORD : "); fflush(stdin);
    char ch;
    int i=0;
    while ((ch = (char) _getch())!='\r')
    {
        password[i]=ch;
        printf("*");

        i++;
    }

    if((strcmp(username, "Admin")==0) && (strcmp(password, "kintul")==0))
    {
        printf("\n");
        gotoxy(70,6);
        printf("Selamat anda berhasil Login!\n");
        system("pause");
        loadingv2();
        menu();
    }
        else{
            printf("\n");
            printf("Data anda tidak Valid!!\n");
            system("pause");
            login();
        }
}

void menu()
{
    int pilihan, a, jumlah_buku, kode_buku[4];
    int key=0;
    char namapengunjung[100];
    char nim[10];

    identitas_pengunjung:
    system("cls");
    system("COLOR 4F");
    printf("Nama Pengunjung : "); scanf(" %[^\n]s", &namapengunjung);
    printf("            NIM : "); scanf(" %[^\n]s", &nim);
    for ( a = 0; namapengunjung[a]; a++)
    {
        if(namapengunjung[a]>96)
        namapengunjung[a]-=32;
            else{
            continue;
            }
    }
    printf("+==============================+\n");
    printf("+   Tekan ENTER untuk lanjut   +\n");
    printf("+==============================+\n"); 
    
    key=getch();
    if (key==13)
    {
        system("cls");
        loading();
        goto menu_utama;
    }
        else{
            goto identitas_pengunjung;
        }
        
    
    menu_utama :
    system("cls");
    system("COLOR 1F");
    printf("PERPUSTAKAAN NEGARA FTI\n");
    printf("1. Peminjaman Buku\n");
    printf("2. Pengembalian Buku\n");
    printf("3. Struk\n");
    printf("4. Pesan dan Kesan\n");
    printf("5. Exit\n");
    printf("Masukkan Pilihan Anda : ");scanf("%i", &pilihan);

// PEMINJAMAN BUKU
    
    if (pilihan==1)
    {
        penginputan_data:
        system("cls");
        loading();
        printf("+==========================================================+\n");
        printf("|         LIST BUKU PERPUSTAKAAN NEGARA FTI                |\n"); 
        printf("+==================+=======================================+\n"); 
        printf("|    KODE BUKU     |                 JUDUL BUKU            |\n"); 
        printf("+==================+=======================================+\n"); 
        printf("|       111        |                    Hujan              |\n"); 
        printf("|------------------|---------------------------------------|\n"); 
        printf("|       112        |                  Who am I?            |\n"); 
        printf("|------------------|---------------------------------------|\n"); 
        printf("|       113        |                Kamso Jebles           |\n");
        printf("|------------------|---------------------------------------|\n"); 
        printf("|       114        |                  Superman             |\n");
        printf("+==========================================================+\n\n");
        printf("Masukkan Jumlah Buku yang dipinjam = "); scanf("%d", &jumlah_buku);
                if (jumlah_buku==1)
                {
                    printf("Masukkan Kode Buku : ");scanf("%d", &kode_buku[0]);
                    goto menu_utama;
                }
                    else if (jumlah_buku==2)
                    {
                        printf("Masukkan Kode Buku 1 : "); scanf("%d", &kode_buku[0]);
                        printf("Masukkan Kode Buku 2 : "); scanf("%d", &kode_buku[1]);
                        goto menu_utama;
                    }
                        else if (jumlah_buku==3)
                        {
                            printf("Masukkan Kode Buku 1 : "); scanf("%d", &kode_buku[0]);
                            printf("Masukkan Kode Buku 2 : "); scanf("%d", &kode_buku[1]);
                            printf("Masukkan Kode Buku 3 : "); scanf("%d", &kode_buku[2]);
                            goto menu_utama;
                        }
                            else if (jumlah_buku==4)
                            {
                                printf("Masukkan Kode Buku 1 : "); scanf("%d", &kode_buku[0]);
                                printf("Masukkan Kode Buku 2 : "); scanf("%d", &kode_buku[1]);
                                printf("Masukkan Kode Buku 3 : "); scanf("%d", &kode_buku[2]);
                                printf("Masukkan Kode Buku 4 : "); scanf("%d", &kode_buku[3]);
                                goto menu_utama;
                            }
                                else
                                {
                                    system("cls");
                                    printf("JUMLAH BUKU YANG ANDA INPUT TIDAK SESUAI KETENTUAN");
                                    Sleep(2000);
                                    system("cls");
                                    goto penginputan_data;
                                }
                                
    }

// PENGEMBALIAN BUKU

        else if(pilihan==2)
        {
            system("cls");
            loading();
            if (jumlah_buku==1)
            {
                printf("Jumlah Buku\t\t: 1\n");
                printf("Kode Buku\t\t= %s", kode_buku);
                system("pause");
                goto menu_utama;
            }
            
        }

// STRUK

            else if (pilihan==3)
            {
                loadingv2();
                printf("         PERPUSTAKAAN NEGARA FTI    \n");
                printf("    JL. KAMSO JEBLES NO. 619, SOMALIA\n");
                printf("=========================================\n");
                printf("              TERIMA KASIH               \n");
                printf("           ATAS KUNJUNGAN ANDA           \n");
                printf("-----------------------------------------\n");
                printf("Nama Pengunjung\t\t: %s\n", namapengunjung);
                printf("NIM\t\t\t: %s\n", nim);

                // JUMLAH BUKU = 1
                    if (jumlah_buku==1 && kode_buku[0]==111)
                    {
                        printf("Judul Buku\t\t: Hujan");
                    }
                        else if (jumlah_buku==1 && kode_buku[0]==112)
                        {
                            printf("Judul Buku\t\t: Who am I?");
                        }
                            else if (jumlah_buku==1 && kode_buku[0]==113)
                        {
                            printf("Judul Buku\t\t: Kamso jebles");
                        }
                                else if (jumlah_buku==1 && kode_buku[0]==114)
                                {
                                    printf("Judul Buku\t\t: Superman");
                                }

                // JUMLAH BUKU 2
                    if (jumlah_buku==2 && kode_buku[0]==111)
                    {
                        printf("Judul Buku 1\t\t: Hujan\n");
                    }
                        else if (jumlah_buku==2 && kode_buku[0]==112)
                        {
                            printf("Judul Buku 1\t\t: Who am I?\n");
                        }
                            else if (jumlah_buku==2 && kode_buku[0]==113)
                            {
                                printf("Judul Buku 1\t\t: Kamso jebles\n");
                            }
                                else if (jumlah_buku==2 && kode_buku[0]==114)
                                {
                                    printf("Judul Buku 1\t\t: Superman\n");
                                }
                    if (jumlah_buku==2 && kode_buku[1]==111)
                    {
                        printf("Judul Buku 2\t\t: Hujan\n");
                    }
                            else if (jumlah_buku==2 && kode_buku[1]==112)
                            {
                                printf("Judul Buku 2\t\t: Who am I?\n");
                            }
                                else if (jumlah_buku==2 && kode_buku[1]==113)
                                {
                                    printf("Judul Buku 2\t\t: Kamso jebles\n");
                                }
                                    else if (jumlah_buku==2 && kode_buku[1]==114)
                                    {
                                        printf("Judul Buku 2\t\t: Superman\n");
                                    }
                                        
                //JUMLAH BUKU 3
                    if (jumlah_buku==3 && kode_buku[0]==111)
                    {
                        printf("Judul Buku 1\t\t: Hujan\n");
                    }
                        else if (jumlah_buku==3 && kode_buku[0]==112)
                        {
                            printf("Judul Buku 1\t\t: Who am I?\n");
                        }
                            else if (jumlah_buku==3 && kode_buku[0]==113)
                            {
                                printf("Judul Buku 1\t\t: Kamso jebles\n");
                            }
                                else if (jumlah_buku==3 && kode_buku[0]==114)
                                {
                                    printf("Judul Buku 1\t\t: Superman\n");
                                }
                    if (jumlah_buku==3 && kode_buku[1]==111)
                    {
                        printf("Judul Buku 2\t\t: Hujan\n");
                    }
                            else if (jumlah_buku==3 && kode_buku[1]==112)
                            {
                                printf("Judul Buku 2\t\t: Who am I?\n");
                            }
                                else if (jumlah_buku==3 && kode_buku[1]==113)
                                {
                                    printf("Judul Buku 2\t\t: Kamso jebles\n");
                                }
                                    else if (jumlah_buku==3 && kode_buku[1]==114)
                                    {
                                        printf("Judul Buku 2\t\t: Superman\n");
                                    }
                    if (jumlah_buku==3 && kode_buku[2]==111)
                    {
                        printf("Judul Buku 3\t\t: Hujan\n");
                    }
                            else if (jumlah_buku==3 && kode_buku[2]==112)
                            {
                                printf("Judul Buku 3\t\t: Who am I?\n");
                            }
                                else if (jumlah_buku==3 && kode_buku[2]==113)
                                {
                                    printf("Judul Buku 3\t\t: Kamso jebles\n");
                                }
                                    else if (jumlah_buku==3 && kode_buku[2]==114)
                                    {
                                        printf("Judul Buku 3\t\t: Superman\n");
                                    }
                // JUMLAH BUKU 4
                    if (jumlah_buku==4 && kode_buku[0]==111)
                    {
                        printf("Judul Buku 1\t\t: Hujan\n");
                    }
                        else if (jumlah_buku==4 && kode_buku[0]==112)
                        {
                            printf("Judul Buku 1\t\t: Who am I?\n");
                        }
                            else if (jumlah_buku==4 && kode_buku[0]==113)
                            {
                                printf("Judul Buku 1\t\t: Kamso jebles\n");
                            }
                                else if (jumlah_buku==4 && kode_buku[0]==114)
                                {
                                    printf("Judul Buku 1\t\t: Superman\n");
                                }
                    if (jumlah_buku==4 && kode_buku[1]==111)
                    {
                        printf("Judul Buku 2\t\t: Hujan\n");
                    }
                            else if (jumlah_buku==4 && kode_buku[1]==112)
                            {
                                printf("Judul Buku 2\t\t: Who am I?\n");
                            }
                                else if (jumlah_buku==4 && kode_buku[1]==113)
                                {
                                    printf("Judul Buku 2\t\t: Kamso jebles\n");
                                }
                                    else if (jumlah_buku==4 && kode_buku[1]==114)
                                    {
                                        printf("Judul Buku 2\t\t: Superman\n");
                                    }
                    if (jumlah_buku==4 && kode_buku[2]==111)
                    {
                        printf("Judul Buku 3\t\t: Hujan\n");
                    }
                            else if (jumlah_buku==4 && kode_buku[2]==112)
                            {
                                printf("Judul Buku 3\t\t: Who am I?\n");
                            }
                                else if (jumlah_buku==4 && kode_buku[2]==113)
                                {
                                    printf("Judul Buku 3\t\t: Kamso jebles\n");
                                }
                                    else if (jumlah_buku==4 && kode_buku[2]==114)
                                    {
                                        printf("Judul Buku 3\t\t: Superman\n");
                                    }
                    

                    for (int i = 0; i < 41; i++)
                        {
                            printf("=");
                        }
                        printf("\n");
                        system("pause");
                        goto menu_utama;
            }

// PESAN DAN KESAN

                else if (pilihan==4)
                {
                    printf("Pesan & Kesan");
                    printf("Tekan ESC Untuk Kembali");
                        if (key==27)
                        {
                            goto menu_utama;
                        }
                        
                }
                    else if (pilihan==5)
                    {
                        system("cls");
                        system("COLOR 8F");
                        loadingv2();
                        printf("Emmanuel Manggala Nusa (672022034)\n");
                        printf("Fryan Gerardi Parantak (672022116)\n");
                        Sleep(4500);
                        system("cls");
                        printf("THANK ");
                        Sleep(500);
                        printf("YOU");
                        Sleep(500);
                        printf(":");
                        Sleep(500);
                        printf(")");
                        Sleep(2000);
                        system("cls");
                        exit(0);
                    }

}
void loading()
{
    int i;

    gotoxy(75,5);
    printf(" LOADING\n");
    gotoxy(75,6);
    for ( i = 0; i < 9; i++)
    {
        printf("%c", 36);
        Sleep(200);
    }
    system("cls");
    gotoxy(75,6);
    printf("LOADING SUCCESSFUL");
    Sleep(1000);
    system("cls");
}
void loadingv2()
{
    system("cls");
    gotoxy(75,5);
    printf("LoAdInG ");
    for (int i = 0; i < 3; i++)
    {
        printf(". ");
        Sleep(900);
    }
    system("cls");
}