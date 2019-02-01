
#include<stdio.h>
#include<conio.h>
void check(char,char);
char a[9]={'1','2','3','4','5','6','7','8','9'};
char pa;
void gameName()
{
    printf("\n\n                        TIC TAC TOE!");
}
void inputsymbol()
{
    printf("\n  player 1 symbol:x\n");
    printf("\n  player 2 symbol:o");
}
void show()
{
printf("\n\n\n\t\t\t---|---|---\n");
printf("\t\t\t %c | %c |%c \n",a[0],a[1],a[2]);
printf("\t\t\t---|---|---\n");
printf("\t\t\t %c | %c |%c \n",a[3],a[4],a[5]);
printf("\t\t\t---|---|---\n");
printf("\t\t\t %c | %c |%c \n",a[6],a[7],a[8]);
printf("\t\t\t---|---|---\n");
}
void start()
{
    char pa;
    printf("\n player 1 will start the game  \n");


}
void play()
{
    char p,s;
    printf("\n enter position and symbol\n ");
    fflush(stdin);
    scanf("%c",&p);
    fflush(stdin);
    scanf("%c",&s);
    check(p,s);
}
void check(char p,char s)
{
  int i;
  for(i=0;i<=8;i++)
  {
      if(a[i]==p)
      {
          a[i]=s;
      }
  }
}

void main()
{

   system("cls");
    gameName();
    show();
    inputsymbol();
    start();
    play();
   system("cls");
    show();
    play();
    system("cls");
   show();
    play();
    system("cls");
    show();
    play();
       system("cls");
    show();
    play();

    if((a[0]=a[1]=a[3])||(a[4]=a[5]=a[6])||(a[7]=a[8]=a[9])||(a[1]=a[4]=a[7])||(a[2]=a[5]=a[8])||(a[3]=a[6]=a[9])||(a[1]=a[5]=a[9])||(a[3]=a[5]=a[9]))
    {
        printf("\nplayer 1 won");
    }
     system("cls");
    show();
    play();
     if((a[0]=a[1]=a[3])||(a[4]=a[5]=a[6])||(a[7]=a[8]=a[9])||(a[1]=a[4]=a[7])||(a[2]=a[5]=a[8])||(a[3]=a[6]=a[9])||(a[1]=a[5]=a[9])||(a[3]=a[5]=a[9]))
    {
        printf("\nplayer 2 won");
    }
    system("cls");
    show();
    play();
     if((a[0]=a[1]=a[3])||(a[4]=a[5]=a[6])||(a[7]=a[8]=a[9])||(a[1]=a[4]=a[7])||(a[2]=a[5]=a[8])||(a[3]=a[6]=a[9])||(a[1]=a[5]=a[9])||(a[3]=a[5]=a[9]))
    {
        printf("\nplayer 1 won");
    }
     system("cls");
    show();
    play();
     if((a[0]=a[1]=a[3])||(a[4]=a[5]=a[6])||(a[7]=a[8]=a[9])||(a[1]=a[4]=a[7])||(a[2]=a[5]=a[8])||(a[3]=a[6]=a[9])||(a[1]=a[5]=a[9])||(a[3]=a[5]=a[9]))
    {
        printf("\nplayer 2 won");
    }
    system("cls");
    show();
    play();
     if((a[0]=a[1]=a[3])||(a[4]=a[5]=a[6])||(a[7]=a[8]=a[9])||(a[1]=a[4]=a[7])||(a[2]=a[5]=a[8])||(a[3]=a[6]=a[9])||(a[1]=a[5]=a[9])||(a[3]=a[5]=a[9]))
    {
        printf("\nplayer 1 won");

    }

    getch();


}
