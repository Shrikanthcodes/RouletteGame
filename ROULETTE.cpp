#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<process.h>
#include<windows.h>
#include<mmsystem.h>
using namespace std;
void opening();
void scare()			
{
	for (int j = 0; j < 10; j++)

	{
			Sleep(250);
			cout << "_______________________________________________________________________________\n";
cout << " ______    _______                     _____ _________ _________  _____\n";
cout << "||    ||  ||     || ||     || ||      ||        ||        ||     || \n";
cout << "||    ||  ||     || ||     || ||      ||        ||        ||     || \n";
cout << "||    ||  ||     || ||     || ||      ||        ||        ||     || \n";
cout << "||____||  ||     || ||     || ||      ||___     ||        ||     ||___\n";
cout << "||  \\\\  ||     || ||     || ||      ||        ||        ||     || \n";
cout << "||   \\\\ ||     || ||     || ||      ||        ||        ||     || \n";
cout << "||    \\\\||     || ||     || ||      ||        ||        ||     || \n";
cout << "||     \\\\||_____||||_____|| ||_____ ||____    ||        ||     ||____\n";
cout << "________________________________________________________________________\n";
Sleep(250);
system("cls");
			
	}
}
void start(int);
int dawg(int, int, int, int);
int one(int, int, int, int);
int three(int, int, int, int);
int racist(int, int, int, int);
void main()
{
	scare();
	opening();
	int cred = 5000,cnt=0;
	char play;
	do
	{
		start(cred);
		int bn, bc, h, j;

		h = rand() % 10 + 1;
		do
		{
			j = rand() % 10 + 1;
		} while (j == h);

		bn = rand() % 10 + 1;
		bc = rand() % 2;																	//ball no.

		int choice, w;						
		/


 /cout << "\nEnter ur choice\n1:Ultimate (1000)\n2:TheOne (1500)\n3:ThePowerOfThree (2000)\n4:Racist-_- (2500)\n\nChoice:";
cout << "1:Ultimate [\\m/]\n\t\tBet on one single number and its color.\n\t\tThe toughest one here.\n\t\tProbability : 1/20=0.05\n\t\tWin 5000 credits!\n\n";
cout << "2:TheOne [1]\n\t\tBet on a number.\n\t\tProbability : 2/20=0.1\n\t\tWin 2500 credits!\n\n";
cout << "3:ThePowerOfThree [3!!!] \n\t\tBet on three different numbers.\n\t\tProbability : 6/20=0.3\n\t\tWin 1000 credits!\n\n";
cout << "4:Racist [-_-]\n\t\tBet on a colour.\n\t\tProbability : 10/20=0.5\n\t\tWin 250 credits!\n\n";
cout << "Choice : ";
cin >> choice;

for (int i = 5; i > 0; i--)
		{
			cout << ".";
			Sleep(500);
		}

		switch (choice)							//portal to fns
		{
		case 1:{
			cred -= 1000;
			w = dawg(h, j, bn, bc);
			break; }

		case 2:{
			cred -= 1500;
			w = one(h, j, bn, bc);
			break; }

		case 3:{
			cred -= 2000;
			w = three(h, j, bn, bc);
			break; }

		case 4:{
			cred -= 2500;
			w = racist(h, j, bn, bc);
			break; }

		default: {
			cout << "\nCan't you read?????";
			break; }
		}

		PlaySound(TEXT("roulette_wheel.wav"),NULL,SND_ALIAS);     //sound!!!!!	
		cout << "\n\nPress any key to see what happened...";
		_getch();

		for (int i = 5; i > 0; i--)
		{
			cout << ".";
			Sleep(500);
		}

		cout << "\n\nThe ball landed on the ";

		if (bc == 0)
			cout << "red";
		else
			cout << "black";

		cout << " " << bn << "...\n\n";
		Sleep(1500);

		if (w == 3)					//hole
		{
			cout << "There was a hole there... The ball fell in...\n";
			Sleep(500);
			cout << "Guess your luck ditched you :P\n\n";
		}


		else if (w == 1)					//normal win
		{

			cout << "YOU WIN!";
			if (choice = 1)
				cred += 5000;
			else if (choice = 2)
				cred += 2500;
			else if (choice = 3)
				cred += 1000;
			else if (choice = 4)
				cred += 250;
			else
				cout << "\nYou don't deserve anything...\n";
		}

		else if (w == 2)					//jackpot
		{

			cout << "YOU WIN!\nAND GUESS WHAT? YOU WON THE JACKPOT AS WELL :D!!!!\n+3000 CREDITS!!! ";
			cred += 3000;
			if (choice = 1)
				cred += 5000;
			else if (choice = 2)
				cred += 2500;
			else if (choice = 3)
				cred += 1000;
			else if (choice = 4)
				cred += 250;
			else
				cout << "\nYou don't deserve anything...\n";
		}
		else
			cout << "You lost this round....";
	


		cout << "\nWanna play again ? (Y / N): ";
		cin >> play;
		cnt++;
	} while (((play == 'y') || (play == 'Y'))&&(cred>0));

	if (cred <= 0)							//loser
		cout << "\n\nGuess you lost all your money :P\nBetter luck next time :)\n\n";
	
	Sleep(1500);							//hiscore
	cout << "\n\nYou lasted " << cnt << " ROUND";
	if (cnt > 1)
		cout << "S";
	cout<<"!!! :D\n";
	cout << "\nAnd your pocket has " << cred << " credits!! Don't forget to redeem them on the way outside :P";
	Sleep(1000);
	cout << "\n\nPress any key to clear screen and proceed to exit door...";
	_getch();
	system("cls");
											//credits screen
	{
		//cout << "\a";				beep!
		cout << "\nThank you for playing this game :D\nDeveloped by Jazeel, Shivam and Shrikanth.\nSee ya later :D\n" ;
		Sleep(5000);
		cout << "\nPress any key to exit...";
		_getch();
		exit(0);
	}
}


void opening()
{
	cout << "\tRoulette\n\t-on C++\n\n->Jazeel,Shivam,Shrikanth";
	cout << "\n\n\nPress any key to continue...";
	_getch();
	system("cls");
	for (int i = 0 ; i<10 ; i++)
	{
		cout << "\ ";
		system("cls");
		cout << "| ";
		system("cls");
		cout << "/ ";
		system("cls");
		cout << "-";
		system("cls");
	}

}

void start(int cred)
{
	cout << "____________________________________________________________________________";
	cout << "\n\nWelcome... You have " << cred << " credits...\nSpend them wisely.\n";
	cout << "____________________________________________________________________________\n\n";
}

int dawg(int h, int j, int bn, int bc)
{
	int un, uc, w;
	cout << "\n\nYou think u hv the luck to win this?\nWhat's ur take on the no.?:";
	cin >> un;
	cout << "\nColor(red:0 / black:1) ?:";
	cin >> uc;

	if (un == h)
		w = 3;
	else if ((un == bn) && (uc == bc) && (un == h))
		w = 2;
	else if ((un == bn) && (uc == bc))
		w = 1;
	else
		w = 0;
	return w;
}

int one(int h, int j, int bn, int bc)
{
	int un, w;
	cout << "\n\nEnter a no. of ur choice:";
	cin >> un;
	if (un == h)
		w = 3;
	else if ((un == bn) && (un == h))
		w = 2;
	else if (un == bn)
		w = 1;
	else
		w = 0;
	return w;
}

int three(int h, int j, int bn, int bc)
{
	int un1, un2, un3, w;
	cout << "\n\nEnter three nos. consecutively:";
	cin >> un1 >> un2 >> un3;
	if ((un1 == h) || (un2 == h) || (un3 == h))
		w = 3;
	else if (((un1 == bn) || (un2 == bn) || (un3 == bn)) && ((un1==h)||(un2==h)||(un3==h)))
		w = 2;
	else if ((un1 == bn) || (un2 == bn) || (un3 == bn))
		w = 1;
	else
		w = 0;
	return w;
}

int racist(int h, int j, int bn, int bc)
{
	int uc, w;
	cout << "\n\nEnter color choice( red:0 / black:1 ):";
	cin >> uc;
	if (uc == bc)
		w = 1;
	else
		w = 0;
	return w;

}