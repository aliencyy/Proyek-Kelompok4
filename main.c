#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int banyakArgumen, char *argumen[]) //./main username password
{   
    FILE *fpw = fopen("database/login.bin", "wb");
    char login[20] = "Sayfull@Code";

    fwrite(login, sizeof(char), sizeof(login)/sizeof(char), fpw);
    fclose(fpw);

    if(banyakArgumen != 3){
        printf("Gagal login!");
        printf("\nCara Penggunaan : ./FileAplikasiProgramUtama username password");
    }

    char usernameInput[10], passwordInput[10];
    strcpy(usernameInput, argumen[1]);
    strcpy(passwordInput, argumen[2]);

    FILE *fpr;

    if((fpr = fopen("database/login.bin", "rb")) == NULL){
        printf("Gagal membuka file!");
         return EXIT_FAILURE;
    }

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

strcpy(username, string[0]);
strcpy(password, string[1]);

if( (strcmp(usernameInput, username) == 0) && (strcmp(passwordInput, password) == 0))
{
    printf("Selamat, Anda berhasil login !");
}
else {
    printf("Anda gagal login!");
}

}
