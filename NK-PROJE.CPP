/*		      ~~>Gaming software<~~
			    ~~>named POSER GAMES<~~

			Password: stigma

			Roll No.: 23 ,
			Made by : Neeraj kumar
			Class/Section: XII-A                                 */

//INCLUDED HEADER FILES/*
#include <iostream.h>
#include <conio.h>
#include <dos.h>
#include <stdio.h>
#include <string.h>
#include <process.h>
#include <stdlib.h>

//Function's used ==> Their uses
void gameplay();      //Animations With main menu
void start();         //Start screen
void memorygame();   //GAME MEMORY GAME
int tictactoe();    //GAME TIC TAC TOE
void board();       //TO DISPLAY BOARD OF TICTACTOE
void hangman();      //GAME HANGMAN
void middleman();   //GAME MIDDLEMAN
void anim();       //FOR ANIMATIONS IN GAME MIDDLEMAN

char sq[10] = {'0','1','2','3','4','5','6','7','8','9'};   //THESE TWO ARE FOR
int checkwin();//THIS IS TO CHECK THE VICTORY OF PLAYERS  +>INITIALISTIONS FOR TIC TAC BOARD


/*  Wherever flag type variable is used then it is to continue next level
	OF THE GAME FROM ANY POINT OF THE GAME  ESPICIALY IN THE GAME
	HANGMAN  */

class casino
{

char stringplayerName;
char choice;
char name[520];
unsigned int amount;
int bettingAmount,guess;
int dice; // hold computer generated
public:
	casino()
	{
	 amount=0;
	}
	void cas();
	void rules();
}one;
void casino :: cas()
{
clrscr();
randomize();

for(int e=0;e<80;e++)
	cout<<(char)247;
cout<<"\n\n\n\t\tCASINO GAME\n\t\tBY Poser Games\n\n\n\n";
for(e=0;e<80;e++)
	cout<<(char)247;

cout<<"\n\nEnter Your Name : ";
gets(name);
cout << "\n\nWelcome my friend "<<name<<" you come have to a right";
cout << "\nplace to multiply your money by hunderd";

cout<<"\n\nMY friend please Deposit an amount to play[upto 60,000] : $";
cin>>amount;

do
	{
	clrscr();
	rules();
	cout << "\n\nYour current balance is $ " << amount << "\n";

	do
		{
		cout<<name<<", enter money to bet : $";
		cin>>bettingAmount;
		if(bettingAmount > amount)
			cout<<"Your betting amount is more"
			    <<"than your current balance\n"
			    <<"\nRe-enter data\n ";
		}while(bettingAmount > amount);


	do
	{
		cout<<"Guess your number to bet between 1 to 10 :";
		cin>>guess;
		if(guess <= 0 || guess > 10)
		cout<<"Please check the number!!"
		    <<"should be between 1 to 10\n"
		    <<"\nRe-enter data\n ";
	}while(guess<=0 || guess>10);

	dice = rand()%10+1; // Will hold the randomly generated integer between 1 and 10

	if(dice == guess)
		{
		cout << "\n\nGood Luck!! You won Rs."<<bettingAmount*10;
		amount = amount+bettingAmount*10;
		}
	else
		{
		cout << "Bad Luck this time !! You lost $ "<< bettingAmount <<"\n";
		amount = amount - bettingAmount;
		}

	cout << "\nThe winning number was : "<<dice<<"\n";
	cout << "\n"<<name<<", You have $ "<<amount<<"\n";
	if(amount<=0)
		{
		cout << "You have no money to play Please deposit money"
		    <<"next time and play ";
		delay(1200);
		break;
		}
	cout << "\n\n-->Do you want to play again (y/n)? ";
	cin >> choice;
	}while(choice =='Y'|| choice=='y');
clrscr();
cout<<"\n\n\n\tYour current balance is $"<<amount;
cout<<"\n\n\n\n\t"<<name<<" Have a nice day";
delay(120);
clrscr();
getch();
}

void casino :: rules()
{
    cout << "\n\n";
    for(int e=0;e<80;e++)
	cout<<(char)247;
    cout << "\t\tRULES OF THE GAME\n";
    for(e=0;e<80;e++)
	cout<<(char)247;
    cout << "\t1. Choose any number between 1 to 10\n";
    cout << "\t2. If you win you will get 10 times of money you bet\n";
    cout << "\t3. If you bet on wrong number you will lose your betting amount\n\n";
    for(e=0;e<80;e++)
	cout<<(char)247;
}


class memorygame
{

int a,b,c; //a,b INITIALISATIONS FOR TWO NUMBERS OF FIBONACCI SERIES
char name[5000];
public:
	memorygame()
	{
	a=0,b=1;
	}
	void mg();
}two;
void memorygame :: mg()
{
cout<<"\n\n";
for(int e=0;e<80;e++)
	cout<<(char)232;
cout<<"\n\n\t MEMORY GAME\n\t\t BY Poser games";
cout<<"\n\n";
for(e=0;e<80;e++)
	cout<<(char)232;
cout<<"\n\tEnter your name +>  ";
cin>>name;
cout<<"\n\n\tWElcome "<<name<<" to memory game in which you memory will be tested";
cout<<"\n\n\tGet ready for it";
delay(1500);
clrscr();

cout<<"\n\n\nQ1:What is the next term of the given series?\n\n\n\t\t";

cout<<"\t"<<a<<"\t"<<b<<"\t";      //fibonacci seriess
for(int i=2 ;i<10;i++)
	{
	c=a+b;
	cout<<c<<"\t";
	a=b;
	b=c;
	}
cout<<"?\n\n\n\n\tEnter you answer[only 1 try] ";
int ans1;  //initialistaion of variable answer 1
cin>>ans1;
if(ans1==55)

	cout<<"\n\n\tCorrect answer";

else
	cout<<"\n\n\tWrong answer well tried my friend";
delay(2500);
clrscr();
cout<<"\n\n\nQ2:What is the sum of the given series?\n\n\n\t\t";
cout<<"\n\n\n\t(x-1)/x+(x-2)/x+........+1/x";

cout<<"?\n\n\n\n\tEnter you answer[only 1 try] ";
int ans2;  //initialistaion of variable answer 2
cin>>ans2;
if(ans2==7)
	cout<<"\n\n\tCorrect answer";
else
	cout<<"\n\n\tWrong answer but well tried my friend";
delay(1500);
clrscr();
cout<<"\n\n\n\n\n\t\tPreparing your last question please wait";
delay(5000);
clrscr();

cout<<"\n\n\nQ3:What is the missing term the given box?\n\n\n\t\t";
cout<<"\n\t 65  |107 |42  ";
cout<<"\n\t ____|____|____";
cout<<"\n\t 36  | ?  |63  ";
cout<<"\n\t ____|____|____";
cout<<"\n\t 51  |82  |31  ";
cout<<"\n\t     |    |    ";
cout<<"\n\n\n\n\tEnter you answer[only 1 try] ";
int ans3;  //initialistaion of variable answer 2
cin>>ans3;
if(ans3==99)
	cout<<"\n\n\tCorrect answer";
else
	cout<<"\n\n\tWrong answer correct well tried my friend";
delay(1800);
clrscr();
cout<<"\n\n\n\n\t"<<name<<" Have a nice day";
delay(800);
clrscr();
getch();
}



char a[7]={'p','a','v','l','o','v','a'} ;
	 char sa[7]={'*','*','*','*','*','*','*'};
char b[9]={'c','a','r','e','e','r','i','s','m'};
char sb[9]={'*','*','*','*','*','*','*','*','*'};
char c[6]={'z','o','n','k','e','d'};
char sc[6]={'*','*','*','*','*','*'};
char d[4]={'x','o','h','a'};
char sd[4]={'*','*','*','*'};
char e[11]={'s','u','b','j','u','n','c','t','i','v','e'};
char se[11]={'*','*','*','*','*','*','*','*','*','*','*',};

class hangman
{
char name[500],try;
int k,maxtries;
 public:
	hangman()
	{
	 maxtries=10;

	}
 void hm();
}four;
void hangman :: hm()
{
for(int l=0;l<80;l++)
	cout<<(char)177;
cout<<"\n\n\t HANGMAN GAME\n\t\t BY Poser Games\n\n\n";
for(l=0;l<80;l++)
	cout<<(char)177;
cout<<"\n\n\t Enter your name : ";
cin>>name;
cout << "\n\nWelcome to HANGMAN "<<name<<", It is a game ";
cout << "\n\nof guessing letters of the given word.";
cout << "\n\nlike **** (word jinx) and some hint is given";
cout << "\n\nand don't try to type in caps otherwise the word will be ignored";
cout << "\n\nYou have to type only one letter in one try";
cout << "\n\nYou have " <<maxtries<< " tries to try and guess the word in one round.";
cout << "\nIF you are not able to pass any round then game will be reseted";
delay(10500);
clrscr();
gotoxy(24,8);
cout<<"Get";
delay(150);
gotoxy(24,9);
cout<<"ready";
delay(150);
gotoxy(24,10);
cout<<"to";
delay(150);
gotoxy(24,11);
cout<<"play";
delay(1800);
int count,flag=0;
	do
	{
	clrscr();
	count=0;
	gotoxy(65,3);
	cout<<"Tries left : "<<maxtries;
	cout<<"\n\n\n\t=>Round 1<=\n\n\t";
	for(int k=0;k<7;k++)
		cout<<sa[k]; // word pavlova
	cout<<"\n\n\n\t Try to decode it.|| clue : the word is of a sweet";
	cout<<"\n\n\n\tdessert made of nuts and ice cream with three vowels";

	cout<<"\n\n\n\t~~>Enter one word of the letter \t";
	cin>>try;
	for(int t=0;t<=7;t++)
		{
		if(a[t]==try)
			{
			sa[t]=try;
			cout<<"\nCongrats you found a word "<<a[t];
			}
		}
		delay(500);
	for(int i=0; i<7; i++)
		{
		if(a[i]==sa[i])
			count++;

		else
			break;

		}
		if(count==7)
			{
			flag++;
			goto r1exit;  //sending control to after 6 lines
			}

	cout<<"\nNow you have "<<--maxtries<<" tries";
	delay(700);
	}while(maxtries>0);
r1exit : if(count==7)
	cout<<"\n\nCongratulations you found the word pavlova and passed Round 1";
else
	cout<<"\n\nYou are not able to find the word therefore you are hanged";

if(flag==1)
	{
	maxtries=10;
       do{
	clrscr();
	count=0;
	gotoxy(65,3);
	cout<<"Tries left : "<<maxtries;
	cout<<"\n\n\n\t=>Round 2<=\n\n\t";
	for(int k=0;k<9;k++)
		cout<<sb[k]; // word careerism
	cout<<"\n\n\n\t Try to decode it.|| clue : the word is related to our future";
	cout<<"\n\n\n\tand is speaken by you hundred times";

	cout<<"\n\n\n\t~~>Enter one word of the letter \t";
	cin>>try;
	for(int t=0;t<=9;t++)
		{
		if(b[t]==try)
			{
			sb[t]=try;
			cout<<"\nCongrats you found a word "<<sb[t];
			}
		}
		delay(500);
	for(int i=0; i<9; i++)
		{
		if(b[i]==sb[i])
			count++;

		else
			break;

		}
		if(count==9)
			{
			flag++;
			goto r2exit;
			}

	cout<<"\nNow you have "<<maxtries--<<" tries";
	delay(700);
	} while(maxtries>0);
	}
r2exit : if(count==9)
	cout<<"\n\nCongratulations you found the word careerism and passed Round 2";
else
	cout<<"\n\nYou are not able to find the word therefore you are hanged";
if(flag==2)
	{
	maxtries=10;
       do{
	clrscr();
	count=0;
	gotoxy(65,3);
	cout<<"Tries left : "<<maxtries;
	cout<<"\n\n\n\t=>Round 3<=\n\n\t";
	for(int k=0;k<6;k++)
		cout<<sc[k]; // word zonked
	cout<<"\n\n\n\t Try to decode it.|| clue : the word is same as sozzled ";


	cout<<"\n\n\n\t~~>Enter one word of the letter \t";
	cin>>try;
	for(int t=0;t<=6;t++)
		{
		if(c[t]==try)
			{
			sc[t]=try;
			cout<<"\nCongrats you found a word "<<sc[t];
			}
		}
		delay(500);
	for(int i=0; i<6; i++)
		{
		if(c[i]==sc[i])
			count++;

		else
			break;

		}
		if(count==6)
			{
			flag++;
			goto r3exit;
			}

	cout<<"\nNow you have "<<maxtries--<<" tries";
	delay(700);
	} while(maxtries>0);
	}
r3exit : if(count==6)
	cout<<"\n\nCongratulations you found the word zonked and passed Round 3";
else
	cout<<"\n\nYou are not able to find the word therefore you are hanged";

if(flag==3)
	{
	maxtries=10;
       do{
	clrscr();
	count=0;
	gotoxy(65,3);
	cout<<"Tries left : "<<maxtries;
	cout<<"\n\n\n\t=>Round 4<=\n\n\t";
	for(int k=0;k<4;k++)
		cout<<sd[k]; // word xoha
	cout<<"\n\n\n\t Try to decode it.|| clue : it is a language spoken";
	cout<<"\n\n\n\tin South Africa";

	cout<<"\n\n\n\t~~>Enter one word of the letter \t";
	cin>>try;
	for(int t=0;t<=4;t++)
		{
		if(d[t]==try)
			{
			sd[t]=try;
			cout<<"\nCongrats you found a word "<<sd[t];
			}
		}
		delay(500);
	for(int i=0; i<4; i++)
		{
		if(d[i]==sd[i])
			count++;

		else
			break;

		}
		if(count==4)
			{
			flag++;
			goto r4exit;
			}

	cout<<"\nNow you have "<<maxtries--<<" tries";
	delay(700);
	} while(maxtries>0);
	}
r4exit : if(count==9)
	cout<<"\n\nCongratulations you found the word xoha and passed Round 4";
else
	cout<<"\n\nYou are not able to find the word therefore you are hanged";
if(flag==5)
	{
	maxtries=15;
       do{
	clrscr();
	count=0;
	gotoxy(65,3);
	cout<<"Tries left : "<<maxtries;
	cout<<"\n\n\n\t=>Round 5<=\n\n\t";
	for(int k=0;k<11;k++)
		cout<<se[k]; // word CAREERISM
	cout<<"\n\n\n\t Try to decode it.|| clue : the word is related to our future";
	cout<<"\n\n\n\tand is speaken by you hundred times";

	cout<<"\n\n\n\t~~>Enter one word of the letter \t";
	cin>>try;
	for(int t=0;t<=11;t++)
		{
		if(e[t]==try)
			{
			se[t]=try;
			cout<<"\nCongrats you found a word "<<se[t];
			}
		}
		delay(500);
	for(int i=0; i<11; i++)
		{
		if(e[i]==se[i])
			count++;

		else
			break;

		}
		if(count==11)
			{
			flag++;
			goto r5exit;
			}

	cout<<"\nNow you have "<<maxtries--<<" tries";
	delay(700);
	} while(maxtries>0);
	}
r5exit : if(count==11)
	cout<<"\n\nCongratulations you found the word careerism and passed Round 1";
else

	cout<<"\n\nYou are not able to find the word therefore you are hanged";

clrscr();
if(flag==5)
	cout<<"\n\n\n\n\t Congratulation you win the game And prize money"
	<<"is transferred to you account";
getch();
}

class middleman
{
 char name[500];
 char chance;
  int triesleft;
  char dice1,dice2,dice3;

  int flag1;
 public:
 middleman()
 {
  triesleft=7;
  primary();
  dice1=rand()%26+65;
  flag1=1;
 }
 void mm();
 void primary()
 { randomize();
 }

 }five;


 void  middleman :: mm()
 {
 clrscr();
 for(int i=1;i<80;i++)
	{
	 gotoxy(i,6);
	 cout<<(char)175;
	 gotoxy(80-i,19);
	 cout<<(char)174;
	 delay(35);
	}
 gotoxy(16,10);
 cout<<"Middle_Man";
 gotoxy(18,11);
 cout<<"By Poser Games";
 gotoxy(24,14);
 cout<<"Enter your name : ";
 gets(name);
 delay(1000);
 clrscr();
 cout<<"\n\n\n\n\n\n";
 cout<<"\t\t\t"<<name<<" Welcome to the game Middle_Man";
 cout<<"\n\n\t\t\tRules of the game ";

 cout<<"\n\n\t\t\tThe computer wil generate caharcater From A-Z";
 cout<<"\n\n\t\t\tand you have to guess the character";
 cout<<"\n\n\t\t\tYou will get 7 chance to guess character in each level";
 cout<<"\n\n\t\tIf you are successful in guessing the character[middleman] then";
 cout<<"\n\n\t\t\tafter passing '3' LEVELS of game";
 cout<<"\n\n\t\t\tyou will get one dollar.";
 cout<<"\n\n\t\t\tAnd each character is known as man";
 delay(3500);
 cout<<"\n\n\t\t\tGet Ready to play "<<name;
 getch();
 clrscr();




  do
  {
    clrscr();
    anim();
    gotoxy(24,8);
    cout<<"!!> Round-1 <!!";
    gotoxy(44,8);
    cout<<"Triesleft : "<<triesleft;
    gotoxy(19,12);
    cout<<"Enter your guess between A-Z [only in caps]\t";
    chance=getch();
    if(chance==dice1)
	{
	  gotoxy(22,16);
	  cout<<"Congratulations you found the middleman "<<chance;
	  flag1++;
	  delay(800);
	  goto next1;
	}
     if(chance>dice1)
	{
	  gotoxy(22,16);
	  cout<<"Think a lower man rather than "<<chance;
	  delay(800);
	}
     if(chance<dice1)
	{
	  gotoxy(22,16);
	  cout<<"Think a higher man rather than "<<chance;
	  delay(800);
	}
    triesleft--;

  }while(triesleft>0 && chance!=dice2);

next1:
if(chance==dice1)
 {
     flag1++;
     randomize();
     dice2=rand()%26+65;
     triesleft=7;
  do
  {
    clrscr();
    anim();
    gotoxy(24,8);
    cout<<"!!> Round-2 <!!";
    gotoxy(44,8);
    cout<<"Triesleft : "<<triesleft;
    gotoxy(19,12);
    cout<<"Enter your guess between A-Z [only in caps]\t";
    chance=getch();
    if(chance==dice2)
	{
	  gotoxy(22,16);
	  cout<<"Congratulations you found the middleman "<<chance;
	  flag1++;
	  delay(800);
	  goto next2;
	}
     if(chance>dice2)
	{
	  gotoxy(22,16);
	  cout<<"Think a lower man rather than "<<chance;
	  delay(800);
	}
     if(chance<dice2)

	{
	  gotoxy(22,16);
	  cout<<"Think a higher man rather than "<<chance;
	  delay(800);
	}
      triesleft--;

   }while(triesleft>0 && chance!=dice2);
 }

else
   {
     clrscr();
     gotoxy(22,8);
     cout<<"Sorry you lost the game well played";
     delay(1500);
   }

next2:
if(chance==dice2)
 {
     randomize();
     flag1++;
     dice3=rand()%26+65;
     triesleft=7;
  do
  {
    clrscr();
    anim();
    gotoxy(24,8);
    cout<<"!!> Round-3 <!!";
    gotoxy(44,8);
    cout<<"Triesleft : "<<triesleft;
    gotoxy(19,12);
    cout<<"Enter your guess between A-Z [only in caps]\t";
    chance=getch();
    if(chance==dice3)
	{
	  gotoxy(22,16);
	  cout<<"Congratulations you found the middleman "<<chance;
	  flag1++;
	  delay(800);
	  goto next3;
	}
     if(chance>dice3)
	{
	  gotoxy(22,16);
	  cout<<"Think a lower man rather than "<<chance;
	  delay(800);
	}
     if(chance<dice3)

	{
	  gotoxy(22,16);
	  cout<<"Think a higher man rather than "<<chance;
	  delay(800);
	}
      triesleft--;

   }while(triesleft>0 && chance!=dice3);
 }

else
   {
     clrscr();
     gotoxy(22,8);
     cout<<"Sorry you lost the game well played";
     delay(1500);
   }
next3:
if(flag1==3)
      {
	cout<<"You have got a dollar transferred to your account";
	cout<<"FoR passing all levels successful";
      }

}

void anim()
{

 for(int i=1;i<80;i++)
    {
	 gotoxy(i,1);
	 cout<<(char)250;
	 gotoxy(i,2);
	 cout<<(char)250;
	 gotoxy(i,3);
	 cout<<(char)250;
	 gotoxy(i,4);
	 cout<<(char)250;
	 gotoxy(i,5);
	 cout<<(char)250;
	 gotoxy(80-i,22);
	 cout<<(char)250;
	 gotoxy(80-i,23);
	 cout<<(char)250;
	 gotoxy(80-i,24);
	 cout<<(char)250;
	 gotoxy(80-i,25);
	 cout<<(char)250;
	 delay(35);
     }
}



class tictactoe
{
int player,i,choice;
char mark;
public:
tictactoe()
{player=1;
}
int ttt();
int checkwin();
void board();
}three;


int tictactoe :: ttt()
{
clrscr();
	do
	{
	board();
	player=(player%2)?1:2;
	cout << "Player " << player << ", enter a number:  ";
	cin >> choice;
	mark=(player == 1) ? '0' : 'x';
		if (choice == 1 && sq[1] == '1')
			sq[1] = mark;

		else if (choice == 2 && sq[2] == '2')
			sq[2] = mark;

		else if (choice == 3 && sq[3] == '3')
			sq[3] = mark;

		else if (choice == 4 && sq[4] == '4')
			sq[4] = mark;

		else if (choice == 5 && sq[5] == '5')
			sq[5] = mark;

		else if (choice == 6 && sq[6] == '6')
			sq[6] = mark;

		else if (choice == 7 && sq[7] == '7')
			sq[7] = mark;

		else if (choice == 8 && sq[8] == '8')
			sq[8] = mark;

		else if (choice == 9 && sq[9] == '9')
			sq[9] = mark;
		else
			{
			cout<<"Invalid move ";
			player--;
			getch();
			}
		i=checkwin();
		player++;
	}while(i==-1);
board();
if(i==1)
	cout<<"==>\aPlayer "<<--player<<" win ";
else
	cout<<"==>\aGame draw";
getch();
return 0;
}
/*
	FUNCTION TO RETURN GAME STATUS
	1 FOR GAME IS OVER WITH RESULT
	-1 FOR GAME IS IN PROGRESS
	O GAME IS OVER AND NO RESULT
*/

int tictactoe :: checkwin()
{
	if (sq[1] == sq[2] && sq[2] == sq[3])
		return 1;

	else if (sq[4] == sq[5] && sq[5] == sq[6])
		return 1;

	else if (sq[7] == sq[8] && sq[8] == sq[9])
		return 1;

	else if (sq[1] == sq[4] && sq[4] == sq[7])
		return 1;

	else if (sq[2]== sq[5] && sq[5] == sq[8])
		return 1;

	else if (sq[3] == sq[6] && sq[6] == sq[9])
		return 1;

	else if (sq[1] == sq[5] && sq[5] == sq[9])
		return 1;

	else if (sq[3] == sq[5] && sq[5] == sq[7])
		return 1;

	else if (sq[1] != '1' && sq[2] != '2' && sq[3] != '3' && sq[4] != '4' && sq[5] != '5' && sq[6] != '6' && sq[7] != '7' && sq[8] != '8' && sq[9] != '9')
		return 0;

	else
		return -1;
}



void tictactoe :: board()       // function to draw board
{
clrscr();
cout << "\n\n\tTic Tac Toe\n\n";
cout << "Player 1 (0)  -  Player 2 (x)" << endl << endl;
cout << endl;
cout << "\t\t     |     |     " << endl;
cout << "\t\t  " << sq[1] << "  |  " << sq[2] << "  |  " << sq[3] << endl;
cout << "\t\t_____|_____|_____" << endl;
cout << "\t\t     |     |     " << endl;
cout << "\t\t  " << sq[4] << "  |  " << sq[5] << "  |  " << sq[6] << endl;
cout << "\t\t_____|_____|_____" << endl;
cout << "\t\t     |     |     " << endl;
cout << "\t\t  " << sq[7] << "  |  " << sq[8] << "  |  " << sq[9] << endl;
cout << "\t\t     |     |     " << endl << endl;
}


/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
++++++++++++++++++++++++++++++++++++++++++++++++++++++
+++++++++++++++++++++++++++++++++++++++++++++++++
+++++++++++++++++++++++++++++++++++++++
+++++++++++++++++++++++++++++++*/
void main()      //Starting of the code
{
clrscr();
start();   // function only to generate fabulous animations
start:
clrscr();
int k=0,choice;
char passwordtemp,password[500];
cout<<"\n\n\n\n\n\tEnter PASSWORD to proceed [only in one go] : ";
for(;;)                //fragment to display password in stars
	{
	passwordtemp = getch();
	if(passwordtemp == 13) //if ENTER button is pressed
		break;
	else
		{
		password[k] = passwordtemp;
		k++;
		cout<<(char)15;
		}
	}
password[k]='\0';  //Password last end text by
		   //a null statement to identify length
if((strcmp(password,"stigma"))==0)
	{
	cout<<"\n\n\t\t\t Please wait . . . . ";
	delay(1000);
	gameplay();
	gotoxy(30,19) ;
	cout<<"Enter your choice(1-5)" ;
choice: choice = getch();
	switch(choice)
		{
		case '1':one.cas();      //SWITCH TO GAME CASINO
			 start();
			 goto start;


		case '2':two.mg();  //SWITCH TO GAME MEMORY GAME
			 start();
			 goto start;


		case '3':three.ttt();   //SWITCH TO GAME TIC TAC TOE
			 start();
			 goto start;


		case '4':four.hm();     //SWITCH TO GAME HANGMAN
			 start();
			 goto start;

		case '5':five.mm();     //SWITCH TO GAME MIDDLEMAN
			 start();
			 goto start;


		case '6':exit(0);

		default :goto choice;
		}
	}
else
	{
	cout<<"\n \n\tWell Tried You wrong person"
	    <<"\n\n\tBut Better next time"
	    <<"\n\n\tCome soon"
	    <<"\n\n\tANd HAve a nice day";
	delay(2000);
	start();
	goto start;
	}
}


void start()
{
clrscr();
//Next lines to build up frame for the Program
for(int i=1;i<22;i++)
	{
	 gotoxy(i,7);
	 cout<<(char)175;
	 gotoxy(i,8);
	 cout<<(char)175;
	 gotoxy(80-i,18);
	 cout<<(char)174;
	 gotoxy(80-i,17);
	 cout<<(char)174;
	 delay(35);
	}

//Display Gameing software name in between the frame
gotoxy(29,10);
cout<< "~~>POSER GAMES<~~";
gotoxy(31,12);
cout<<"~~>all about addiction<~~";
gotoxy(28,22);
cout<<"Press any key continue";

getch();
clrscr();
}

void gameplay()
{
clrscr();
//To  display blurr screen
for(int a=0;a<=2239;a++)
	cout<<(char)250;
	delay(5);
for(a=0;a<=150;a++)
	{
	cout<<"\t\t\t"<<(char)127;
	delay(12);
	}
//To display main menu
gotoxy(30,11) ;
cout<<"1::Play Casino" ;
gotoxy(30,12) ;
cout<<"2::Play Memory game" ;
gotoxy(30,13) ;
cout<<"3::Play Tic Tac Toe" ;
gotoxy(30,14) ;
cout<<"4::Play Hangman" ;
gotoxy(30,15) ;
cout<<"5::Play Middleman" ;
gotoxy(30,16) ;
cout<<"6::QUIT" ;
gotoxy(27,8) ;
cout<<"POSER GAMES by NEERAJ KUMAR" ;
}









