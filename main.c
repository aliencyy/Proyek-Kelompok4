#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int banyakArgumen, char *argumen[]) //./main username password
{   
    char login[50];
    
    if(banyakArgumen == 1)
    {
        FILE *fpw = fopen("database/login.bin", "wb");
        printf("daftar akun dengan format username@password : ");
        scanf("%s", & *login);
        fwrite(login, sizeof(char), sizeof(login)/sizeof(char), fpw);
        fclose(fpw);
        printf("Jika ingin melanjutkan proses login, ketik\n./FileAplikasiProgramUtama username password\n");
    }

    else if(banyakArgumen != 3)
    {
        printf("Input yang anda masukkan tidak sesuai format");
        exit(0);    
    }
    
    while(banyakArgumen==3)
    {
        break;
    }
    
    char usernameInput[10], passwordInput[10];
    strcpy(usernameInput, argumen[1]);
    strcpy(passwordInput, argumen[2]);

    FILE *fpr;
    
    char akun[20];
    
    fread(akun, sizeof(char), sizeof(akun)/sizeof(char), fpr);

    fclose(fpr);

    char *string[3];
    char username[20], password[20];
    int ctrl = 0;

    string[0] = strtok(akun, "@");
    
    while(string[ctrl++] != NULL)
    {
        string[ctrl] = strtok(NULL, "@");
    }
    
    while(string[ctrl++] == NULL)
    {
     printf("anda belum membuat akun\njika ingin registrasi ketik dengan format : ./fileaplikasiprogramutama");
    }
    
    strcpy(username, string[0]);
    strcpy(password, string[1]);

    if( (strcmp(usernameInput, username) == 0) && (strcmp(passwordInput, password) == 0))
    {
        printf("Selamat, Anda berhasil login !");
    }
    else 
    {
        printf("Password atau username yang anda masukkan salah");
    }
}
