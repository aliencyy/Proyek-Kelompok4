#include <stdio.h>
#include <conio.h>
int main()
{
  char q;
  char r;
  int m = 100;

  printf("Welcome to\n\n\t ** Who wants to be the Millionare **\n");
  printf("\n\nlets play the game !!\n");
  printf("\nyour first Question for $%d is\n\n", m * 1);
  printf("1.Who was the founder of Apple Company?\n\n");
  printf("A. Bill Gates\tB. Mark Zergberg\nC.Steve Jobs\tD. Adam weishaupt\n");
  printf("Answer:");
  r = getchar();

  switch (r)

  {

  case 'a':

    printf("%c is the wrong answer sorry YOU LOSE", r);
    goto label;
    break;

  case 'b':

    printf("%c is the wrong answer sorry YOU LOSE", r);
    goto label;
    break;

  case 'c':

    printf("%c is the right answer\n", r);
    printf("\tCongradualtion YOU WON $%d", m);
    printf("\ndo you want to play more or go home with this money?");
    printf("\n\t\t to play more press : M \n if you want to quit press : Q\n==> ");
    scanf("\n%c", &q);
    if (q == 'm' || q == 'M')
      printf("Your next question for $%d is", m * 2);
    else if (q == 'q' || q == 'Q')
      printf("Thanks for playing ");
    break;

  case 'd':

    printf("%c is the wrong answer sorry YOU LOSE", r);
    goto label;
    break;
  default:
    printf("invalid button pressed = %c\n", r);
    goto label;
    break;
  case 'e':
    printf("You used 50/50 lifeline\n\nA. Bill Gates\nC. Steve jobs\n");
    printf("\nAnswer:");
    scanf("%c", &r);
  }

  printf("\n2.When did steve jobs died?\n");
  printf("A. 1999\tB. 2003\nC. 2009\tD. 2011\n");
  printf("Answer:");
  scanf("\n%c", &r);
  switch (r)
  {
  case 'd':
    printf("%c is the right answer\n", r);
    printf("\tCongradualtion YOU WON $%d", m * 2);
    printf("\ndo you want to play more or go home with this money?");
    printf("\n\t\t to play more press : M \n if you want to quit press : Q\n==> ");
    scanf("\n%c", &q);
    if (q == 'm' || q == 'M')
      printf("Your next question for $%d is", m * 3);
    else if (q == 'q' || q == 'Q')
      printf("Thanks for playing ");
    break;

  default:
    printf("%c is the wrong answer sorry YOU LOSE", r);
    goto label;
    break;
  }

  printf("\n3.Which one is the biggest ocean of the world?\n");
  printf("A. Atlantic ocean\tB. Pacific ocean\nC. Indonesian ocean\tD. none of them");
  printf("\nAnswer:");
  scanf("\n%c", &r);
  switch (r)
  {
  case 'b':
    printf("%c is the right answer\n", r);
    printf("\tCongradualtion YOU WON $%d", m * 3);
    printf("\ndo you want to play more or go home with this money?");
    printf("\n\t\t to play more press : M \n if you want to quit press : Q\n==> ");
    scanf("\n%c", &q);
    if (q == 'm' || q == 'M')
      printf("Your next question for $%d is", m * 4);
    else if (q == 'q' || q == 'Q')
      printf("Thanks for playing ");
    break;

  default:
    printf("%c is the wrong answer sorry YOU LOSE", r);
    goto label;
    break;
  }

  printf("\n4.What is the name of Batman character in movie?\n");
  printf("A. Harvey dent\tB. Louis Fox\nC. Bruce Wayne\tD. Max Roger");
  printf("\nAnswer:");
  scanf("\n%c", &r);
  switch (r)
  {
  case 'c':
    printf("%c is the right answer\n", r);
    printf("\tCongradualtion YOU WON $%d", m * 4);
    printf("\ndo you want to play more or go home with this money?");
    printf("\n\t\t to play more press : M \n if you want to quit press : Q\n==> ");
    scanf("\n%c", &q);
    if (q == 'm' || q == 'M')
      printf("Your next question for $%d is", m * 5);
    else if (q == 'q' || q == 'Q')
      printf("Thanks for playing ");
    break;

  default:
    printf("%c is the wrong answer sorry YOU LOSE", r);
    goto label;
    break;
  }
  printf("\n5.Which one is the Capital of Afghanistan?\n");
  printf("A. Kabul\tB. Istanbul\nC. Syria\tD. Bhurma");
  printf("\nAnswer:");
  scanf("\n%c", &r);
  switch (r)
  {
  case 'a':
    printf("%c is the right answer\n", r);
    printf("\tCongradualtion YOU WON $%d", m * 5);
    printf("\ndo you want to play more or go home with this money?");
    printf("\n\t\t to play more press : M \n if you want to quit press : Q\n==> ");
    scanf("\n%c", &q);
    if (q == 'm' || q == 'M')
      printf("Your next question for $%d is", m * 6);
    else if (q == 'q' || q == 'Q')
      printf("Thanks for playing ");
    break;

  default:
    printf("%c is the wrong answer sorry YOU LOSE", r);
    goto label;
    break;
  }

  printf("\n6.Which is the biggest mammal in the world?\n");
  printf("A. Elephant\tB. Blue Whale\nC. Rhinosorous \tD. none of them");
  printf("\nAnswer:");
  scanf("\n%c", &r);
  switch (r)
  {
  case 'b':
    printf("%c is the right answer\n", r);
    printf("\tCongradualtion YOU WON $%d", m * 6);
    printf("\ndo you want to play more or go home with this money?");
    printf("\n\t\t to play more press : M \n if you want to quit press : Q\n==> ");
    scanf("\n%c", &q);
    if (q == 'm' || q == 'M')
      printf("Your next question for $%d is", m * 10);
    else if (q == 'q' || q == 'Q')
      printf("Thanks for playing ");
    break;

  default:
    printf("%c is the wrong answer sorry YOU LOSE", r);
    goto label;
    break;
  }
  printf("\n7.Who is the second richest person in the world?\n");
  printf("A. Charlos Slim\tB. Bill gates\nC. Steve jobs\tD. Mark zerg berg");
  printf("\nAnswer:");
  scanf("\n%c", &r);
  switch (r)
  {
  case 'b':
    printf("%c is the right answer\n", r);
    printf("\t\t\t** Congradualtion YOU WON $1000 **");
    printf("\n\t\tThanks for Playing\n\t\t\tWho wants to be a millionaire");
    break;

  default:
    printf("%c is the wrong answer sorry YOU LOSE", r);
    goto label;
    break;
  }
label:
  getch();
}
