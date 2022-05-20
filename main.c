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
        
         char q;
      char r;
      int m = 100;

    printf("\n\n");
    printf("\t\t=============================================\n");
    printf("\t\t|               WELCOME TO                  |\n");
    printf("\t\t|       Who Wants To Be The Millionare      |\n");
    printf("\t\t=============================================");
    printf("\n\nLet's play the game !!\n");
    printf("\nYour first Question for $%d is\n", m * 1);
    printf("-----------------------------------------\n");
    printf("|1.Who was the founder of Apple Company?|\n");
    printf("-----------------------------------------\n");
    printf("A. Bill Gates\tB. Mark Zergberg\nC. Steve Jobs\tD. Adam weishaupt\n");
    printf("\nAnswer:");
    r = getchar();

      switch (r)
      {
      case 'A':

      printf("%c is the wrong answer sorry YOU LOSE", r);
      goto label;
      break;

      case 'B':

      printf("%c is the wrong answer sorry YOU LOSE", r);
      goto label;
      break;

      case 'C':

      printf("%c is the right answer\n\n", r);
      printf("-------------------------------------\n");
      printf("|     CONGRATULATION YOU WON $%d    |\n", m);
      printf("-------------------------------------\n");
      printf("do you want to play more or go home with this money?\n");
      printf("to play more press : M \n");
      printf("if you want to quit press : Q\n==> ");
      scanf("\n%c", &q);
      if (q == 'm' || q == 'M')
      {
        printf("\nYour next question for $%d is\n", m * 2);
      }
      else if (q == 'q' || q == 'Q')
      {
        printf("\nThanks for playing\n\n");
        exit(0);
      }
      break;

      case 'D':

      printf("%c is the wrong answer sorry YOU LOSE", r);
      goto label;
      break;

      default:
      printf("invalid button pressed = %c\n", r);
      goto label;
      break;
      }

    printf("-----------------------------\n");
    printf("|2.When did steve jobs died?|\n");
    printf("-----------------------------\n");
    printf("A. 1999\tB. 2003\nC. 2009\tD. 2011\n");
    printf("\nAnswer:");
    scanf("\n%c", &r);

      switch (r)
      {
      case 'D':

      printf("%c is the right answer\n\n", r);
      printf("-------------------------------------\n");
      printf("|     CONGRATULATION YOU WON $%d    |\n", m * 2);
      printf("-------------------------------------\n");
      printf("do you want to play more or go home with this money?\n");
      printf("to play more press : M \n");
      printf("if you want to quit press : Q\n==> ");
      scanf("\n%c", &q);
      if (q == 'm' || q == 'M')
      {
        printf("\nYour next question for $%d is\n", m * 3);
      }
      else if (q == 'q' || q == 'Q')
      {
        printf("\nThanks for playing\n\n");
        exit(0);
      }
      break;

      default:
      printf("%c is the wrong answer sorry YOU LOSE", r);
      goto label;
      break;
      }

    printf("------------------------------------------------\n");
    printf("|3.Which one is the biggest ocean of the world?|\n");
    printf("------------------------------------------------\n");
    printf("A. Atlantic ocean\tB. Pacific ocean\nC. Indonesian ocean\tD. none of them");
    printf("\n\nAnswer:");
    scanf("\n%c", &r);

      switch (r)
      {
      case 'B':
      printf("%c is the right answer\n\n", r);
      printf("-------------------------------------\n");
      printf("|     CONGRATULATION YOU WON $%d    |\n", m * 3);
      printf("-------------------------------------\n");
      printf("do you want to play more or go home with this money?\n");
      printf("to play more press : M \n");
      printf("if you want to quit press : Q\n==> ");
      scanf("\n%c", &q);
      if (q == 'm' || q == 'M')
      {
        printf("\nYour next question for $%d is\n", m * 4);
      }
      else if (q == 'q' || q == 'Q')
      {
        printf("\nThanks for playing\n\n");
        exit(0);
      }
      break;

      default:
      printf("%c is the wrong answer sorry YOU LOSE", r);
      goto label;
      break;
      }

    printf("--------------------------------------------------\n");
    printf("|4.What is the name of Batman character in movie?|\n");
    printf("--------------------------------------------------\n");
    printf("A. Harvey dent\tB. Louis Fox\nC. Bruce Wayne\tD. Max Roger");
    printf("\n\nAnswer:");
    scanf("\n%c", &r);

      switch (r)
      {
      case 'C':
      printf("%c is the right answer\n\n", r);
      printf("-------------------------------------\n");
      printf("|     CONGRATULATION YOU WON $%d    |\n", m * 4);
      printf("-------------------------------------\n");
      printf("do you want to play more or go home with this money?\n");
      printf("to play more press : M \n");
      printf("if you want to quit press : Q\n==> ");
      scanf("\n%c", &q);
      if (q == 'm' || q == 'M')
      {
        printf("\nYour next question for $%d is\n", m * 5);
      }
      else if (q == 'q' || q == 'Q')
      {
        printf("\nThanks for playing\n\n");
        exit(0);
      }
      break;

      default:
      printf("%c is the wrong answer sorry YOU LOSE", r);
      goto label;
      break;
      }

    printf("--------------------------------------------\n");
    printf("|5.Which one is the Capital of Afghanistan?|\n");
    printf("--------------------------------------------\n");
    printf("A. Kabul\tB. Istanbul\nC. Syria\tD. Bhurma");
    printf("\n\nAnswer:");
    scanf("\n%c", &r);

      switch (r)
      {
      case 'A':
      printf("%c is the right answer\n\n", r);
      printf("-------------------------------------\n");
      printf("|     CONGRATULATION YOU WON $%d    |\n", m * 5);
      printf("-------------------------------------\n");
      printf("do you want to play more or go home with this money?\n");
      printf("to play more press : M \n");
      printf("if you want to quit press : Q\n==> ");
      scanf("\n%c", &q);
      if (q == 'm' || q == 'M')
      {
        printf("\nYour next question for $%d is\n", m * 6);
      }
      else if (q == 'q' || q == 'Q')
      {
        printf("\nThanks for playing\n\n");
        exit(0);
      }
      break;

      default:
      printf("%c is the wrong answer sorry YOU LOSE", r);
      goto label;
      break;
      }

    printf("--------------------------------------------\n");
    printf("|6.Which is the biggest mammal in the world?|\n");
    printf("--------------------------------------------\n");
    printf("A. Elephant\tB. Blue Whale\nC. Rhinosorous \tD. none of them");
    printf("\n\nAnswer:");
    scanf("\n%c", &r);

      switch (r)
      {
      case 'B':

      printf("%c is the right answer\n\n", r);
      printf("-------------------------------------\n");
      printf("|     CONGRATULATION YOU WON $%d    |\n", m * 6);
      printf("-------------------------------------\n");
      printf("do you want to play more or go home with this money?\n");
      printf("to play more press : M \n");
      printf("if you want to quit press : Q\n==> ");
      scanf("\n%c", &q);
      if (q == 'm' || q == 'M')
      {
        printf("\nYour next question for $%d is\n", m * 10);
      }
      else if (q == 'q' || q == 'Q')
      {
        printf("\nThanks for playing\n\n");
        exit(0);
      }
      break;

      default:
      printf("%c is the wrong answer sorry YOU LOSE", r);
      goto label;
      break;
      }

    printf("--------------------------------------------\n");
    printf("|7.Who is the second richest person in the world?|\n");
    printf("--------------------------------------------\n");
    printf("A. Charlos Slim\tB. Bill gates\nC. Steve jobs\tD. Mark zerg berg");
    printf("\n\nAnswer:");
    scanf("\n%c", &r);

      switch (r)
      {
      case 'B':

      printf("%c is the right answer\n\n", r);
      printf("-------------------------------------\n");
      printf("|    CONGRATULATION YOU WON $1000    |\n");
      printf("-------------------------------------\n");
      printf("\n\t\tThanks for Playing\n\t  Who wants to be a millionaire");
      break;

      default:

      printf("%c IS THE WRONG ANSWER SORRY YOU LOSE", r);
      goto label;
      break;
      }
      label:
      getch();           
    }
    else 
    {
        printf("The username or password you entered does not match the account you last registered\nPlease login again with an existing account or\nRegister a new one wih type './FileApplicationMainProgram'");
    }
}
