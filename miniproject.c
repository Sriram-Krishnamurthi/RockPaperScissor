#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void rps(int x, int y);
void rps2(int x, int y);
void main()
{
    char password[10], username[10], ch;
	int i;
 
	printf("Enter User name: ");
	gets(username);
	printf("Enter the password < any 8 characters>: ");
	for (i = 0; i < 8; i++)
	{
            ch = getchar();
            password[i] = ch;
            
	}
    password[i] = '\0';
    printf("\n Welcome ");
    puts(username);
 

    int pchoice,uchoice;
    srand(time(NULL));
    pchoice=rand()%4;
    printf("%d",pchoice);
    printf("\n\n\t\t\tEnter 1 For ROCK, 2 For PAPER, 3 for SCISSOR: ");
    scanf("%d",&uchoice);
    rps(pchoice,uchoice);
    rps2(pchoice,uchoice);

}
void rps(int x, int y)
{
    switch(x)
    {
        case 1:
        printf("\t\t\tComputer Has Chosen: ROCK\n");
        break;
        case 2:
        printf("\t\t\tComputer Has Chosen: PAPER\n");
        break;
        case 3:
        printf("\t\t\tComputer Has Chosen: SCISSOR\n");
        break;
    }

    switch(y)
    {
        case 1:
        printf("\t\t\tYou Have Chosen: ROCK\n");
        break;
        case 2:
        printf("\t\t\tYou Have Chosen: PAPER\n");
        break;
        case 3:
        printf("\t\t\tYou Have Chosen: SCISSOR\n");
        break;
        default:
        printf("\t\t\tError! Enter Right Choice....");

    }
    
}
void rps2(int x, int y)
{
    if(y>3 || y<0)
    {
        exit(1);
    }
    else if(x==y)
    {
        printf("\n\t\t\tIt's a draw!");
    }
    else
    {
        if((x==1 && y==2)||(x==3 && y==1)||(x==2 && y==3))
        {
            printf("\n\t\t\t You Win\n ");
        }
        else
        {
            printf("\n\t\t\t You lose \n");
        }
    }
}