#include <iostream>
#include <Windows.h>
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <conio.h>
#include <cstring>
using namespace std;
void gameboard(int PA, int PB, int PC, int clear)
{
	if (clear)
		system("cls");
	HANDLE hConsole;
	int aray[10][10];
	int count = 100, dice = 4;
	int g, h, v, num = 10;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	for (g = 0; g < 10; g++)
	{
		for (v = 0; v < 40; v++)
		{
			if (v < 15)
			{
				SetConsoleTextAttribute(hConsole, v);
				cout << "";
			}
			else
			{
				cout << "**";
			}
		}
		cout << "\n";
		count = count - num;
		for (h = 0; h < 10; h++)
		{
			cout << "|";
			count = count + 1;
			if (count < 10)
			{
				for (v = 8; v <= 8; v++)
				{
					aray[g][h] = count;

					if (PA == aray[g][h])
					{
						SetConsoleTextAttribute(hConsole, 47);
						cout << "PA";
					}
					if (PB == aray[g][h])
					{
						SetConsoleTextAttribute(hConsole, 67);
						cout << "PB";
					}
					if (PC == aray[g][h])
					{
						SetConsoleTextAttribute(hConsole, 121);
						cout << "PC";
					}

					if (aray[g][h] == 5 || aray[g][h] == 27 || aray[g][h] == 54 || aray[g][h] == 19 || aray[g][h] == 29 || aray[g][h] == 82 || aray[g][h] == 13 || aray[g][h] == 39 || aray[g][h] == 74 || aray[g][h] == 95 || aray[g][h] == 43 || aray[g][h] == 85)
						SetConsoleTextAttribute(hConsole, 47);
					else if (aray[g][h] == 8 || aray[g][h] == 46 || aray[g][h] == 78 || aray[g][h] == 15 || aray[g][h] == 32 || aray[g][h] == 57 || aray[g][h] == 96 || aray[g][h] == 25 || aray[g][h] == 61 || aray[g][h] == 99 || aray[g][h] == 70 || aray[g][h] == 91)
						SetConsoleTextAttribute(hConsole, 64);
					else
						SetConsoleTextAttribute(hConsole, v);
					cout << '\t' << 0 << aray[g][h] << " ";
				}
			}
			else
			{
				for (v = 3; v <= 3; v++)
				{

					aray[g][h] = count;

					if (PA == aray[g][h])
					{
						SetConsoleTextAttribute(hConsole, 47);
						cout << "PA";
					}
					if (PB == aray[g][h])
					{
						SetConsoleTextAttribute(hConsole, 67);
						cout << "PB";
					}
					if (PC == aray[g][h])
					{
						SetConsoleTextAttribute(hConsole, 121);
						cout << "PC";
					}
					if (aray[g][h] == 5 || aray[g][h] == 27 || aray[g][h] == 54 || aray[g][h] == 19 || aray[g][h] == 29 || aray[g][h] == 82 || aray[g][h] == 13 || aray[g][h] == 39 || aray[g][h] == 74 || aray[g][h] == 95 || aray[g][h] == 43 || aray[g][h] == 85)
						SetConsoleTextAttribute(hConsole, 47);
					else if (aray[g][h] == 8 || aray[g][h] == 46 || aray[g][h] == 78 || aray[g][h] == 15 || aray[g][h] == 32 || aray[g][h] == 57 || aray[g][h] == 96 || aray[g][h] == 25 || aray[g][h] == 61 || aray[g][h] == 99 || aray[g][h] == 70 || aray[g][h] == 91)
						SetConsoleTextAttribute(hConsole, 64);
					else
						SetConsoleTextAttribute(hConsole, v);
					cout << '\t' << " " << aray[g][h] << " ";
				}
			}
		}
		cout << "|";
		count = count - 10;
		cout << "\n";
	}
	for (v = 0; v < 40; v++)
	{
		if (v < 15)
		{

			SetConsoleTextAttribute(hConsole, v);
			cout << "";
		}
		else
		{
			cout << "**";
		}
	}
	cout << endl;
}
int main()
{
	int aray[10][10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int PA = 0, PB = 0, PC = 0;
	int dice1, dice2, dice3;
	int count1 = 0, count2 = 0, v1, key;
	int playA;
	int playB;
	int playC;
	char again = 'c';
	int min = 1;
	int max = 6;
	ofstream fout, fout2, fout3, fina;
	ifstream fin1, fin2, fin3;
	fin1.open("PA.txt");
	fin2.open("PB.txt");
	fin3.open("PC.txt");
	int w1 = 0, w2 = 0, w3 = 0;
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	char op;
	int op1;
	for (v1 = 4; v1 <= 4; v1++)
	{
		SetConsoleTextAttribute(hConsole, v1);
		cout << '\t' << '\t' << '\t' << '\t' << "-----** Forest RUN Game **----- \n";
		cout << endl;
		cout << endl;
		cout << "				The Players Names Are ::::				" << endl;
		cout << endl;
		cout << "				PA		\n";
		cout << "				PB		\n";
		cout << "				PC		\n";
	}

	cout << "DO YOU Wish To CONTINUE THE Previous GAME(\n[y/n]\n";
	cout << "Press 'y' for YES" << endl;
	cout << "Press 'n' for NO" << endl;
	cin >> op;
	if (op == 'y')
	{
		cout << "Loading Previous Game......." << endl;
		if (fin1 && fin2 && fin3)
		{
			fin1 >> playA;
			fin2 >> playB;
			fin3 >> playC;
			cout << "THE POSTION OF PA is" << endl;
			PA = PA + playA;
			cout << PA;
			cout << "\n\n";
			cout << "THE POSTION OF PB is" << endl;
			PB = PB + playB;
			cout << PB << "\n\n";
			cout << "THE POSTION OF PC is" << endl;
			PC = PC + playC;
			cout << PC << "\n\n";
		}
		else
		{
			cout << "Files Missing or could not load previously saved Data.\n";
			system("Pause");
		}
	}
	else if (op == 'n')
	{
		cout << "THE POSTION OF  PA is:" << '\t';
		cout << PA;
		cout << "\n";
		cout << "THE POSTION OF  PB is:" << '\t';
		cout << PB;
		cout << "\n\n";
		cout << "THE POSTION OF  PC is:" << '\t';
		cout << PC;
		cout << "\n\n";
	}
	//cin >> again;
	gameboard(PA, PB, PC, 1);
	while (again == 'c')
	{
		cout << "\n\n";
		if (w1 == 0)
		{
			cout << "It's PA TURN   \n\n";
			cout << "Press 2 TO START THE GAME\n"
				 << endl;
			cin >> key;
		}
		dice1 = 0;

		if ((key == 2) && w1 == 0)
		{
			dice1 = 0;
			srand(time(0));
			dice1 = (rand() % (max - min + 1) + min);
			cout << endl;
			cout << "   " << endl;
			cout << "   " << endl;
			PA = PA + dice1;

			if (PA == 5 || PA == 27 || PA == 54)
			{
				PA = PA + 1;
				cout << "Boost of 1" << endl;
			}
			else if (PA == 8 || PA == 46 || PA == 78)
			{
				PA = PA - 5;
				cout << "Sting of 5" << endl;
			}
			else if (PA == 19 || PA == 29 || PA == 82)
			{
				PA = PA + 3;
				cout << "Boost of 3" << endl;
			}
			else if (PA == 13 || PA == 39 || PA == 74 || PA == 95)
			{
				PA = PA + 5;
				cout << "Boost of 5" << endl;
			}
			else if (PA == 43 || PA == 85)
			{
				PA = PA + 15;
				cout << "Boost of 15" << endl;
			}
			else if (PA == 15 || PA == 32 || PA == 57 || PA == 96)
			{
				PA = PA - 10;
				cout << "Sting of 10" << endl;
			}
			else if (PA == 25 || PA == 61 || PA == 99)
			{
				PA = PA - 20;
				cout << "Sting of 20" << endl;
			}
			else if (PA == 70 || PA == 91)
			{
				PA = PA - 25;
				cout << "Sting of 25" << endl;
			}
			else
			{
				PA = PA;
			}
			for (v1 = 6; v1 <= 6; v1++)
			{
				SetConsoleTextAttribute(hConsole, v1);
				if (dice1 == 1)
				{
					cout << " ___" << endl;
					cout << "|     |" << endl;
					cout << "|  1  |" << endl;
					cout << "|___  |" << endl;
					cout << endl;
				}
				else if (dice1 == 2)
				{
					cout << " ___" << endl;
					cout << "|     |" << endl;
					cout << "|  2  |" << endl;
					cout << "|___  |" << endl;
					cout << endl;
				}
				else if (dice1 == 3)
				{
					cout << " ___" << endl;
					cout << "|     |" << endl;
					cout << "|  3  |" << endl;
					cout << "|___  |" << endl;
					cout << endl;
				}
				else if (dice1 == 4)
				{
					cout << " ___" << endl;
					cout << "|     |" << endl;
					cout << "|  4  |" << endl;
					cout << "|___  |" << endl;
					cout << endl;
				}
				else if (dice1 == 5)
				{
					cout << " ___" << endl;
					cout << "|     |" << endl;
					cout << "|  5  |" << endl;
					cout << "|___  |" << endl;
					cout << endl;
				}
				else if (dice1 == 6)
				{
					cout << " ___" << endl;
					cout << "|     |" << endl;
					cout << "|  6  |" << endl;
					cout << "|___  |" << endl;
					cout << endl;
					cout << endl;
					cout << "IT'S A SIX (6). YOU GET ANOTHER TURN." << endl;

					dice1 = 0;
					dice1 = (rand() % (max - min + 1) + min);
					cout << "NEXT TIME IT'S A " << endl;
					cout << dice1 << endl;
					PA = PA + dice1;

					if (PA == 5 || PA == 27 || PA == 54)
					{
						PA = PA + 1;
						cout << "Boost of 1" << endl;
					}
					else if (PA == 8 || PA == 46 || PA == 78)
					{
						PA = PA - 5;
						cout << "Sting of 5" << endl;
					}
					else if (PA == 19 || PA == 29 || PA == 82)
					{
						PA = PA + 3;
						cout << "Boost of 3" << endl;
					}
					else if (PA == 13 || PA == 39 || PA == 74 || PA == 95)
					{
						PA = PA + 5;
						cout << "Boost of 5" << endl;
					}
					else if (PA == 43 || PA == 85)
					{
						PA = PA + 15;
						cout << "Boost of 15" << endl;
					}
					else if (PA == 15 || PA == 32 || PA == 57 || PA == 96)
					{
						PA = PA - 10;
						cout << "Sting of 10" << endl;
					}
					else if (PA == 25 || PA == 61 || PA == 99)
					{
						PA = PA - 20;
						cout << "Sting of 20" << endl;
					}
					else if (PA == 70 || PA == 91)
					{
						PA = PA - 25;
						cout << "Sting of 25" << endl;
					}
					else
					{
						PA = PA;
					}
				}
			}
		}
		if (!w1)
			cout << "CURRENT Position Of PA Is : " << PA << "\n\n";
		if (!w2)
		{
			cout << "It's PB TURN    \n\n";
			cout << endl;
			cout << "Press 2 to Play Your TURN\n"
				 << endl;
			cin >> key;
			cout << "   " << endl;
			cout << "   " << endl;
		}
		dice2 = 0;
		//gameboard(PA,PB,PC);
		if ((key == 2) && w2 == 0)
		{
			dice2 = 0;

			srand(time(0));
			dice2 = (rand() % (max - min + 1) + min);
			PB = PB + dice2;

			if (PB == 5 || PB == 27 || PB == 54)
			{
				PB = PB + 1;
				cout << "Boost of 1" << endl;
			}
			else if (PB == 8 || PB == 46 || PB == 78)
			{
				PB = PB - 5;
				cout << "Sting of 5" << endl;
			}
			else if (PB == 19 || PB == 29 || PB == 82)
			{
				PB = PB + 3;
				cout << "Boost of 3" << endl;
			}
			else if (PB == 13 || PB == 39 || PB == 74 || PB == 95)
			{
				PB = PB + 5;
				cout << "Boost of 5" << endl;
			}
			else if (PB == 43 || PB == 85)
			{
				PB = PB + 15;
				cout << "Boost of 15" << endl;
			}
			else if (PB == 15 || PB == 32 || PB == 57 || PB == 96)
			{
				PB = PB - 10;
				cout << "Sting of 10" << endl;
			}
			else if (PB == 25 || PB == 61 || PB == 99)
			{
				PB = PB - 20;
				cout << "Sting of 20" << endl;
			}
			else if (PB == 70 || PB == 91)
			{
				PB = PB - 25;
				cout << "Sting of 25" << endl;
			}
			else
			{
				PB = PB;
			}

			for (v1 = 3; v1 <= 3; v1++)
			{
				SetConsoleTextAttribute(hConsole, v1);
				if (dice2 == 1)
				{
					cout << " ___" << endl;
					cout << "|     |" << endl;
					cout << "|  1  |" << endl;
					cout << "|___  |" << endl;
					cout << endl;
				}
				else if (dice2 == 2)
				{
					cout << " ___" << endl;
					cout << "|     |" << endl;
					cout << "|  2  |" << endl;
					cout << "|___  |" << endl;
					cout << endl;
				}
				else if (dice2 == 3)
				{
					cout << " ___" << endl;
					cout << "|     |" << endl;
					cout << "|  3  |" << endl;
					cout << "|___  |" << endl;
					cout << endl;
				}
				else if (dice2 == 4)
				{
					cout << " ___" << endl;
					cout << "|     |" << endl;
					cout << "|  4  |" << endl;
					cout << "|___  |" << endl;
					cout << endl;
				}
				else if (dice2 == 5)
				{
					cout << " ___" << endl;
					cout << "|     |" << endl;
					cout << "|  5  |" << endl;
					cout << "|___  |" << endl;
					cout << endl;
				}
				else if (dice2 == 6)
				{
					cout << " ___" << endl;
					cout << "|     |" << endl;
					cout << "|  6  |" << endl;
					cout << "|___  |" << endl;
					cout << endl;
					cout << endl;
					cout << "IT'S A SIX (6). YOU GET ANOTHER TURN." << endl;
					dice2 = 0;
					dice2 = (rand() % (max - min + 1) + min);
					cout << "NEXT TIME IT'S A " << endl;
					cout << dice2 << endl;
					PB = PB + dice2;

					if (PB == 5 || PB == 27 || PB == 54)
					{
						PB = PB + 1;
						cout << "Boost of 1" << endl;
					}
					else if (PB == 8 || PB == 46 || PB == 78)
					{
						PB = PB - 5;
						cout << "Sting of 5" << endl;
					}
					else if (PB == 19 || PB == 29 || PB == 82)
					{
						PB = PB + 3;
						cout << "Boost of 3" << endl;
					}
					else if (PB == 13 || PB == 39 || PB == 74 || PB == 95)
					{
						PB = PB + 5;
						cout << "Boost of 5" << endl;
					}
					else if (PB == 43 || PB == 85)
					{
						PB = PB + 15;
						cout << "Boost of 15" << endl;
					}
					else if (PB == 15 || PB == 32 || PB == 57 || PB == 96)
					{
						PB = PB - 10;
						cout << "Sting of 10" << endl;
					}
					else if (PB == 25 || PB == 61 || PB == 99)
					{
						PB = PB - 20;
						cout << "Sting of 20" << endl;
					}
					else if (PB == 70 || PB == 91)
					{
						PB = PB - 25;
						cout << "Sting of 25" << endl;
					}
					else
					{
						PB = PB;
					}
				}
			}
		}
		if (!w2)
			cout << "Current Position Of PB Is :  " << PB << "\n";
		if (!w3)
			cout << "It's PC TURN   \n\n";
		cout << endl;
		cout << "Press 2 To Play Your TURN\n"
			 << endl;
		cin >> key;
		cout << "   " << endl;
		cout << "   " << endl;
		dice3 = 0;
		//gameboard(PA,PB,PC);
		if ((key == 2) && w3 == 0)
		{
			dice3 = 0;
			srand(time(0));
			dice3 = (rand() % (max - min + 1) + min);
			PC = PC + dice3;

			if (PC == 5 || PC == 27 || PC == 54)
			{
				PC = PC + 1;
				cout << "Boost of 1" << endl;
			}
			else if (PC == 8 || PC == 46 || PC == 78)
			{
				PC = PC - 5;
				cout << "Sting of 5" << endl;
			}
			else if (PC == 19 || PC == 29 || PC == 82)
			{
				PC = PC + 3;
				cout << "Boost of 3" << endl;
			}
			else if (PC == 13 || PC == 39 || PC == 74 || PC == 95)
			{
				PC = PC + 5;
				cout << "Boost of 5" << endl;
			}
			else if (PC == 43 || PC == 85)
			{
				PC = PC + 15;
				cout << "Boost of 15" << endl;
			}
			else if (PC == 15 || PC == 32 || PC == 57 || PC == 96)
			{
				PC = PC - 10;
				cout << "Sting of 10" << endl;
			}
			else if (PC == 25 || PC == 61 || PC == 99)
			{
				PC = PC - 20;
				cout << "Sting of 20" << endl;
			}
			else if (PC == 70 || PC == 91)
			{
				PC = PC - 25;
				cout << "Sting of 25" << endl;
			}
			else
			{
				PC = PC;
			}

			for (v1 = 3; v1 <= 3; v1++)
			{
				SetConsoleTextAttribute(hConsole, v1);
				if (dice3 == 1)
				{
					cout << " ___" << endl;
					cout << "|     |" << endl;
					cout << "|  1  |" << endl;
					cout << "|___  |" << endl;
					cout << endl;
				}
				else if (dice3 == 2)
				{
					cout << " ___" << endl;
					cout << "|     |" << endl;
					cout << "|  2  |" << endl;
					cout << "|___  |" << endl;
					cout << endl;
				}
				else if (dice3 == 3)
				{
					cout << " ___" << endl;
					cout << "|     |" << endl;
					cout << "|  3  |" << endl;
					cout << "|___  |" << endl;
					cout << endl;
				}
				else if (dice3 == 4)
				{
					cout << " ___" << endl;
					cout << "|     |" << endl;
					cout << "|  4  |" << endl;
					cout << "|___  |" << endl;
					cout << endl;
				}
				else if (dice3 == 5)
				{
					cout << " ___" << endl;
					cout << "|     |" << endl;
					cout << "|  5  |" << endl;
					cout << "|___  |" << endl;
					cout << endl;
				}
				else if (dice3 == 6)
				{
					cout << " ___" << endl;
					cout << "|     |" << endl;
					cout << "|  6  |" << endl;
					cout << "|___  |" << endl;
					cout << endl;
					cout << endl;
					cout << "IT'S A SIX (6). YOU GET ANOTHER TURN." << endl;

					dice3 = 0;
					dice3 = (rand() % (max - min + 1) + min);
					cout << "NEXT TIME IT'S A " << endl;
					cout << dice3 << endl;
					PC = PC + dice3;

					if (PC == 5 || PC == 27 || PC == 54)
					{
						PC = PC + 1;
						cout << "Boost of 3" << endl;
					}
					else if (PC == 8 || PC == 46 || PC == 78)
					{
						PC = PC - 5;
						cout << "Sting of 5" << endl;
					}
					else if (PC == 19 || PC == 29 || PC == 82)
					{
						PC = PC + 3;
						cout << "Boost of 3" << endl;
					}
					else if (PC == 13 || PC == 39 || PC == 74 || PC == 95)
					{
						PC = PC + 5;
						cout << "Boost of 5" << endl;
					}
					else if (PC == 43 || PC == 85)
					{
						PC = PC + 15;
						cout << "Boost of 15" << endl;
					}
					else if (PC == 15 || PC == 32 || PC == 57 || PC == 96)
					{
						PC = PC - 10;
						cout << "Sting of 10" << endl;
					}
					else if (PC == 25 || PC == 61 || PC == 99)
					{
						PC = PC - 20;
						cout << "Sting of 20" << endl;
					}
					else if (PC == 70 || PC == 91)
					{
						PC = PC - 25;
						cout << "Sting of 25" << endl;
					}
					else
					{
						PC = PC;
					}
				}
			}
		}
		if (!w3)
			cout << "Current Position of  PC Is :  " << PC << endl;
		cout << "<<<<<<<<  Next TURNS   >>>>>>" << endl;
		cout << endl;
		cout << endl;
		cout << "Enter your choice\n";
		cout << '\t' << " c  for  continue\n"
			 << endl;
		cout << '\t' << " e  for  exit\n"
			 << endl;
		cout << '\t' << " p  for  pause\n"
			 << endl;
		cout << endl;

		cin >> again;

		if (again == 'e')
		{
			cout << "QUITING THE GAME.  ANY UNSAVED PROGRESS WILL BE LOST.\n\n";
			break;
		}
		else if (again == 'p')
		{
			fout.open("PA.txt");
			fout2.open("PB.txt");
			fout3.open("PC.txt");
		A:
			gameboard(PA, PB, PC, 1);
			cout << "GAME PAUSED....\n\n";
			cout << "DATA SAVED. YOU CAN CONTINUE FROM HERE NEXT TIME." << endl;
			fout << PA << "\n";
			fout2 << PB << "\n";
			fout3 << PC << "\n";
			cout << "Enter c to continue\n";
			again = getch();
			if (again != 'c' && again != 'C')
				goto A;
		}
		if (again == 'c' || again == 'C')
		{
			gameboard(PA, PB, PC, 1);
			if (PA >= 100 && w1 == 0)
			{
				if (w2 || w3)
				{
					fina.open("final.txt");
					if (w2)
					{
						cout << "2 is winner\n";
						cout << "1 is second\n";
						cout << "3 is third\n";

						fina << "2 is winner\n";
						fina << "1 is second\n";
						fina << "3 is third\n";
					}
					else
					{
						cout << "3 is winner\n";
						cout << "1 is second\n";
						cout << "2 is third\n";
						fina << "3 is winner\n";
						fina << "1 is second\n";
						fina << "2 is third\n";
					}
				}
				else
				{
					cout << "1 is winner" << endl;
				}
				w1 = 1;
			}
			if (PB >= 100 && w2 == 0)
			{
				fina.open("final.txt");
				if (w1 || w3)
				{
					if (w1)
					{
						cout << "1 is winner\n";
						cout << "2 is second\n";
						cout << "3 is third\n";
						fina << "1 is winner\n";
						fina << "2 is second\n";
						fina << "3 is third\n";
					}
					else
					{
						cout << "3 is winner\n";
						cout << "2 is second\n";
						cout << "1 is third\n";
						fina << "3 is winner\n";
						fina << "2 is second\n";
						fina << "1 is third\n";
					}
				}
				else
				{
					cout << "2 is winner" << endl;
				}
				w2 = 1;
			}
			if (PC >= 100 && w3 == 0)
			{
				if (w1 || w2)
				{
					fina.open("final.txt");
					if (w1)
					{
						cout << "PA is winner\n";
						cout << "PC is second\n";
						cout << "PB is third\n";
						fina << "PA is winner\n";
						fina << "PC is second\n";
						fina << "PB is third\n";
					}
					else
					{
						cout << "PB is winner\n";
						cout << "PC is second\n";
						cout << "PA is third\n";
						fina << "PB is winner\n";
						fina << "PC is second\n";
						fina << "PA is third\n";
					}
				}
				else
					cout << "PC is winner" << endl;
				w3 = 1;
			}
			if ((w1 && w2) || (w1 && w3) || (w2 && w3))
			{
				break;
			}
		}
	}
	system("pause");
	fina.close();
	return 0;
}