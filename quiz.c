#include <stdio.h>
#include <conio.h>

int main()
{
  char q;
  char r;
  int m = 100;

  printf("\n");
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
    printf("|     Congradualtion YOU WON $%d    |\n", m);
    printf("-------------------------------------\n");
    printf("do you want to play more or go home with this money?\n");
    printf("to play more press : M \n");
    printf("if you want to quit press : Q\n==> ");
    scanf("\n%c", &q);
    if (q == 'm' || q == 'M'){
      printf("\nYour next question for $%d is\n", m * 2);}
    else if (q == 'q' || q == 'Q'){
      printf("\nThanks for playing\n\n");}
    break;

  case 'D':

    printf("%c is the wrong answer sorry YOU LOSE", r);
    goto label;
    break;
  default:
    printf("invalid button pressed = %c\n", r);
    goto label;
    break;
  case 'E':
    printf("You used 50/50 lifeline\n\nA. Bill Gates\nC. Steve jobs\n");
    printf("\nAnswer:");
    scanf("%c", &r);
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
    printf("|     Congradualtion YOU WON $%d    |\n", m * 2);
    printf("-------------------------------------\n");
    printf("do you want to play more or go home with this money?\n");
    printf("to play more press : M \n");
    printf("if you want to quit press : Q\n==> ");
    scanf("\n%c", &q);
    if (q == 'm' || q == 'M')
      printf("\nYour next question for $%d is\n", m * 3);
    else if (q == 'q' || q == 'Q'){
      printf("\nThanks for playing\n\n");}
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
    printf("|     Congradualtion YOU WON $%d    |\n", m * 3);
    printf("-------------------------------------\n");
    printf("do you want to play more or go home with this money?\n");
    printf("to play more press : M \n");
    printf("if you want to quit press : Q\n==> ");
    scanf("\n%c", &q);
    if (q == 'm' || q == 'M')
      printf("\nYour next question for $%d is\n", m * 4);
    else if (q == 'q' || q == 'Q'){
      printf("\nThanks for playing\n\n");}
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
    printf("|     Congradualtion YOU WON $%d    |\n", m * 4);
    printf("-------------------------------------\n");
    printf("do you want to play more or go home with this money?\n");
    printf("to play more press : M \n");
    printf("if you want to quit press : Q\n==> ");
    scanf("\n%c", &q);
    if (q == 'm' || q == 'M')
      printf("\nYour next question for $%d is\n", m * 5);
    else if (q == 'q' || q == 'Q'){
      printf("\nThanks for playing\n\n");}
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
    printf("|     Congradualtion YOU WON $%d    |\n", m * 5);
    printf("-------------------------------------\n");
    printf("do you want to play more or go home with this money?\n");
    printf("to play more press : M \n");
    printf("if you want to quit press : Q\n==> ");
    scanf("\n%c", &q);
    if (q == 'm' || q == 'M')
      printf("\nYour next question for $%d is\n", m * 6);
    else if (q == 'q' || q == 'Q'){
      printf("\nThanks for playing\n\n");}
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
    printf("|     Congradualtion YOU WON $%d    |\n", m * 6);
    printf("-------------------------------------\n");
    printf("do you want to play more or go home with this money?\n");
    printf("to play more press : M \n");
    printf("if you want to quit press : Q\n==> ");
    scanf("\n%c", &q);
    if (q == 'm' || q == 'M')
      printf("\nYour next question for $%d is\n", m * 10);
    else if (q == 'q' || q == 'Q'){
      printf("\nThanks for playing\n\n");}
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
    printf("|    Congradualtion YOU WON $1000    |\n");
    printf("-------------------------------------\n");
    printf("\n\t\tThanks for Playing\n\t  Who wants to be a millionaire");
    break;

  default:
    printf("%c is the wrong answer sorry YOU LOSE", r);
    goto label;
    break;
  }
label:
  getch();
}
