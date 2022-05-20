#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int banyakArgumen, char *argumen[]) //./main username password
{   
    char login[50];
    
    if(banyakArgumen == 1)
    {
        system ("mkdir database");
        FILE *fpw = fopen("database/login.bin", "wb+");
        printf("Register your account, type with format 'username@password' : ");
        scanf("%s", & *login);
        fwrite(login, sizeof(char), sizeof(login)/sizeof(char), fpw);
        fclose(fpw);
        printf("If you want to continue the login process, type\n'./FileApplicationMainProgram username password'\n");
    }

    else if(banyakArgumen != 3)
    {
        printf("The input you entered doesn't match the format");
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
        printf("You haven't created an account, if you want to register type\n'./FileApplicationMainProgram'");
    }
    
    strcpy(username, string[0]);
    strcpy(password, string[1]);

    if( (strcmp(usernameInput, username) == 0) && (strcmp(passwordInput, password) == 0))
    {
        printf("LOGIN SUCCESS!");
    }
    else 
    {
        printf("The username or password you entered does not match the account you last registered\nPlease login again with an existing account or\nRegister a new one wih type './FileApplicationMainProgram'");
    }
}
