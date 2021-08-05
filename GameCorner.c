#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//----------------------------------------------------------------------For Tic Tac Toe--------------------------------------------------------------------------------------------------//
square[10] = {'o','1','2','3','4','5','6','7','8','9'};
int checkWin();
void drawBoard();
int checkWin(){
	if(square[1] == square[2] && square[2] == square[3])
		return 1;
	else if (square[4] == square[5] && square[5] == square[6])
		return 1;
	else if(square[7] == square[8] && square[8] == square[9])
		return 1;
	else if(square[1] == square[4] && square[4] == square[7])
		return 1;
	else if(square[2] == square[5] && square[5] == square[8])
		return 1;
	else if(square[3] == square[6] && square[6] == square[9])
		return 1;
	else if(square[1] == square[5] && square[5] == square[9])
		return 1;
	else if(square[3] == square[5] && square[5] == square[7])
		return 1;
	else if(square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] !='4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
		return 0;
	else 
		return -1;	
}

void drawBoard()
{
	system("cls");
	printf("\n\n\t Tic Tac Toe \n\n");
	printf("Player1 (X) - Player2 (O) \n\n\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",square[1],square[2],square[3]);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",square[4],square[5],square[6]);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",square[7],square[8],square[9]);
	printf("     |     |     \n");	

}

//----------------------------------------------------------------------For Tic Tac Toe--------------------------------------------------------------------------------------------------//

//----------------------------------------------------------------------For Stone Paper Scissor--------------------------------------------------------------------------------------------------//
int usrScore = 0,compScore = 0;
int userChoice,compChoice;
void checkOptions(int usr,int comp){
	// 1 = scissor 2= paper 3=rock
	if(usr == comp){
		printf(" --------------------\n");
		printf("|    Its a tie       |\n");
		printf(" --------------------\n");
	}
	else if(usr == 1){
		if(comp == 2){
			printf(" --------------------\n");
			printf("|      You Won :)    |\n");
			printf("| You : Scissor      |\n");
			printf("| Computer : Paper   |\n");
			printf(" --------------------\n");
			usrScore++;
			
		}
		else {
			printf(" --------------------\n");
			printf("|     You Lose :(    |\n");
			printf("| You : Scissor      |\n");
			printf("| Computer : Rock    |\n");
			printf(" --------------------\n");
			
			compScore++;
		}
	}
	else if(usr == 2){
		if(comp == 1){
			printf(" --------------------\n");
			printf("|      You Lose :(   |\n");
			printf("| You : Paper        |\n");
			printf("| Computer : Scissor |\n");
			printf(" --------------------\n");
		    compScore++;
		}
		else {
			printf(" --------------------\n");
			printf("|     You Won :)     |\n");
			printf("| You : Paper        |\n");
			printf("| Computer : Rock    |\n");
			printf(" --------------------\n");
			
			usrScore++;
		}
	}
	else if(usr == 3){
		if(comp == 1){
			printf(" --------------------\n");
			printf("|      You Won :)    |\n");
			printf("| You : Rock        |\n");
			printf("| Computer : Scissor |\n");
			printf(" --------------------\n");
			usrScore++;
		}
		else {
			printf(" --------------------\n");
			printf("|     You Lose :(    |\n");
			printf("| You : Rock         |\n");
			printf("| Computer : Paper    |\n");
			printf(" --------------------\n");
			
			compScore++;
		}
	}
	else if(usr == 4){
		printf(" --------------------\n");
		if(usrScore > compScore)
		printf("|      You Won :)    |\n");
		else if (usrScore < compScore)
		printf("|     You Lose :(    |\n");
		else 
		printf("|      Its a tie     |\n");
		printf("|     Final Score    |\n");
		printf("| You : %d            |\n",usrScore);
		printf("| Computer: %d        |\n",compScore);
		printf(" --------------------\n");
		printf("\a");
	}
	else {
		
		printf("\n Invalid Option");
	}

}
//----------------------------------------------------------------------For Stone Paper Scissor--------------------------------------------------------------------------------------------------//



//----------------------------------------------------------------------Game Starts Here--------------------------------------------------------------------------------------------------//

void main()
{
    MainMenu:
    system("cls");
    int choice;
    printf("\n\t\t\t\t\t\t\t==========*Welcome to E-Game Corner*==========");
    printf("\n\n\t\t\t\t\t\t\t==========*Main Menu*==========");
    printf("\n\t\t\t\t\t\t\tPlease select the option: ");
    printf("\n\t\t\t\t\t\t\t1.Tic-Tac-Toe");
    printf("\n\t\t\t\t\t\t\t2.Rock-Paper-Scissor");
    printf("\n\t\t\t\t\t\t\t3.Quit\n");
    printf("\n\t\t\t\t\t\t\t Please Enter Choice=");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
        system("cls");
	    int player = 1, i ,choice;
	    char mark; // X,O
	    do 
        {
		    drawBoard();
		    player = (player % 2) ? 1 : 2;
		    printf("Player %d, enter the choice : ",player);
		    scanf("%d",&choice);
		    mark = (player == 1) ? 'X' : 'O';
		    if(choice == 1 && square[1] == '1')
			    square[1] = mark;
		    else if(choice == 2 && square[2] == '2')
			    square[2] = mark;
			else if(choice == 3 && square[3] == '3')
			    square[3] = mark;
			else if(choice == 4 && square[4] == '4')
			    square[4] = mark;
			else if(choice == 5 && square[5] == '5')
			    square[5] = mark;
			else if(choice == 6 && square[6] == '6')
			    square[6] = mark;
			else if(choice == 7 && square[7] == '7')
			    square[7] = mark;
			else if(choice == 8 && square[8] == '8')
			    square[8] = mark;
			else if(choice == 9 && square[9] == '9')
			    square[9] = mark;
			
			else 
            {
				printf("Invalid option !");
				player--;
				getch();
			}
			i = checkWin();
			player++;	
        }while(i == -1);
	
	    drawBoard();
	    if(i==1)
        {
		    printf("==>Player %d won",--player);
		
	    }
	    else 
        {
		    printf("==>Game draw");
	    }
		
        break;
    
       case 2: 
               system("cls");
               printf("\t\t\t\t==========*Welcome to Rock, Paper & Scissor Game*==========");
               while(userChoice != 4)
               {
               printf("\nPlease select the option: ");
               printf("\n1.Scissor");
               printf("\n2.Paper");
               printf("\n3.Rock");
               printf("\n4.Go to Main Menu\n");
               scanf("%d",&userChoice);
               if(userChoice==4)
                  goto MainMenu;
               compChoice = (rand() % 3) + 1;
               checkOptions(userChoice,compChoice);
               }
        break;
       
       case 3: exit(0);
    
       default: printf("\t\t\t\t\\n Invalid Option"); 
}
    getch();
}


