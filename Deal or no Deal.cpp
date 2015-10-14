#include <iostream>
#include <string>
using namespace std;

int main()
{
	do
	{
		cout << "Welcome to Deal or No Deal! This is a game show to test your ability to put money on the line to gain even more cash!" << endl;
		
		double values[] = { 0.01, 1, 5, 10, 25, 50, 75, 100, 200, 300, 400, 500, 750, 1000, 5000, 10000, 25000, 50000, 75000, 100000, 200000, 300000, 400000, 500000, 750000, 1000000 };
		double cases[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
		bool caseOpened[] = { false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false };
		double openedValues[26];
		int openedIndex = 0;
		int caseOwned;
		int caseCount = 0;

		while (caseCount < 26)
		{
			int choice = rand() % 26 + 1;
			if (cases[choice] == 0 && values[choice] != 0)
			{
				cases[choice] = values[choice];
				values[choice] = 0;
				caseCount++;
			}
		}

		int round_number = 1;
		int casesOpened = 0;
		int caseChoice;
			
		double final_round;
		double first_unopened_case;
		double second_unopened_case;
		double offer;
		double final_decision;
		string deal;
		system("color 9A");
		cout << "There are 20 cases availiable, ranging from the value of $0.01 all the way to a million dollars!" << endl;
		cout << "Please choose a case for you to keep. Type in any number from 1 to 20 and press enter." << endl;
		cin >> caseOwned;
		cout << "Ok, so you have chosen case " << caseOwned << ". You will keep this case as long as you stay in the game.";
		cout << " But for now, let's begin the fun part!" << endl;
		system("pause");
		system("cls");

		do
		{
			if(round_number==1)
			{
				cout<<"Please choose 6 cases to be opened. Afterward, the banker will make an offer." <<endl;

				casesOpened = 0;
				while (casesOpened < 6)
				{
					cin >> caseChoice;
					if (caseChoice < 1 || caseChoice > 26)
					{
						cout << "Please choose a valid case between 1 and 26" << endl;
					}
					else if (caseChoice == caseOwned)
					{
						cout << "You cannot choose your own case! Please choose another case." << endl;
					}
					else if (caseOpened[caseChoice])
					{
						cout << "You have already chosen this case! Please choose another." << endl;
					}
					else
					{
						cout << "Case number " << caseChoice << " contains $" << cases[caseChoice] << "." << endl;
						casesOpened++;
						openedValues[openedIndex] = cases[caseChoice];
						openedIndex++;
						caseOpened[caseChoice] = true;
						if (casesOpened < 6)
						{
							cout << "Please choose another case to be opened." << endl;
						}
					}
				}
			}
			else if (round_number == 2)
			{
				cout << "Please choose 5 cases to be opened. Afterward, the banker will make an offer." << endl;

				casesOpened = 0;
				while (casesOpened < 5)
				{
					cin >> caseChoice;
					if (caseChoice < 1 || caseChoice > 26)
					{
						cout << "Please choose a valid case between 1 and 26" << endl;
					}
					else if (caseChoice == caseOwned)
					{
						cout << "You cannot choose your own case! Please choose another case." << endl;
					}
					else if (caseOpened[caseChoice])
					{
						cout << "You have already chosen this case! Please choose another." << endl;
					}
					else
					{
						cout << "Case number " << caseChoice << " contains $" << cases[caseChoice] << "." << endl;
						casesOpened++;
						openedValues[openedIndex] = cases[caseChoice];
						openedIndex++;
						caseOpened[caseChoice] = true;
						if (casesOpened < 5)
						{
							cout << "Please choose another case to be opened." << endl;
						}
					}
				}
			}
			else if (round_number == 3)
			{
				cout << "Please choose 4 cases to be opened. Afterward, the banker will make an offer." << endl;

				casesOpened = 0;
				while (casesOpened < 4)
				{
					cin >> caseChoice;
					if (caseChoice < 1 || caseChoice > 26)
					{
						cout << "Please choose a valid case between 1 and 26" << endl;
					}
					else if (caseChoice == caseOwned)
					{
						cout << "You cannot choose your own case! Please choose another case." << endl;
					}
					else if (caseOpened[caseChoice])
					{
						cout << "You have already chosen this case! Please choose another." << endl;
					}
					else
					{
						cout << "Case number " << caseChoice << " contains $" << cases[caseChoice] << "." << endl;
						casesOpened++;
						openedValues[openedIndex] = cases[caseChoice];
						openedIndex++;
						caseOpened[caseChoice] = true;
						if (casesOpened < 4)
						{
							cout << "Please choose another case to be opened." << endl;
						}
					}
				}
			}
			else if (round_number == 4)
			{
				cout << "Please choose 3 cases to be opened. Afterward, the banker will make an offer." << endl;

				casesOpened = 0;
				while (casesOpened < 3)
				{
					cin >> caseChoice;
					if (caseChoice < 1 || caseChoice > 26)
					{
						cout << "Please choose a valid case between 1 and 26" << endl;
					}
					else if (caseChoice == caseOwned)
					{
						cout << "You cannot choose your own case! Please choose another case." << endl;
					}
					else if (caseOpened[caseChoice])
					{
						cout << "You have already chosen this case! Please choose another." << endl;
					}
					else
					{
						cout << "Case number " << caseChoice << " contains $" << cases[caseChoice] << "." << endl;
						casesOpened++;
						openedValues[openedIndex] = cases[caseChoice];
						openedIndex++;
						caseOpened[caseChoice] = true;
						if (casesOpened < 3)
						{
							cout << "Please choose another case to be opened." << endl;
						}
					}
				}
			}
			else if (round_number == 5)
			{
				cout << "Please choose 2 cases to be opened. Afterward, the banker will make an offer." << endl;

				casesOpened = 0;
				while (casesOpened < 2)
				{
					cin >> caseChoice;
					if (caseChoice < 1 || caseChoice > 26)
					{
						cout << "Please choose a valid case between 1 and 26" << endl;
					}
					else if (caseChoice == caseOwned)
					{
						cout << "You cannot choose your own case! Please choose another case." << endl;
					}
					else if (caseOpened[caseChoice])
					{
						cout << "You have already chosen this case! Please choose another." << endl;
					}
					else
					{
						cout << "Case number " << caseChoice << " contains $" << cases[caseChoice] << "." << endl;
						casesOpened++;
						openedValues[openedIndex] = cases[caseChoice];
						openedIndex++;
						caseOpened[caseChoice] = true;
						if (casesOpened < 2)
						{
							cout << "Please choose another case to be opened." << endl;
						}
					}
				}
			}
			else if (round_number == 6)
			{
				cout << "From now on, you will only need to open 1 case each round until two cases remain. Open one case." << endl;

				casesOpened = 0;
				while (casesOpened < 1)
				{
					cin >> caseChoice;
					if (caseChoice < 1 || caseChoice > 26)
					{
						cout << "Please choose a valid case between 1 and 26" << endl;
					}
					else if (caseChoice == caseOwned)
					{
						cout << "You cannot choose your own case! Please choose another case." << endl;
					}
					else if (caseOpened[caseChoice])
					{
						cout << "You have already chosen this case! Please choose another." << endl;
					}
					else
					{
						cout << "Case number " << caseChoice << " contains $" << cases[caseChoice] << "." << endl;
						casesOpened++;
						openedValues[openedIndex] = cases[caseChoice];
						openedIndex++;
						caseOpened[caseChoice] = true;
					}
				}
			}
			else if (round_number < 10)
			{
				cout << "Open one case, and the banker will make an offer." << endl;

				casesOpened = 0;
				while (casesOpened < 1)
				{
					cin >> caseChoice;
					if (caseChoice < 1 || caseChoice > 26)
					{
						cout << "Please choose a valid case between 1 and 26" << endl;
					}
					else if (caseChoice == caseOwned)
					{
						cout << "You cannot choose your own case! Please choose another case." << endl;
					}
					else if (caseOpened[caseChoice])
					{
						cout << "You have already chosen this case! Please choose another." << endl;
					}
					else
					{
						cout << "Case number " << caseChoice << " contains $" << cases[caseChoice] << "." << endl;
						casesOpened++;
						openedValues[openedIndex] = cases[caseChoice];
						openedIndex++;
						caseOpened[caseChoice] = true;
					}
				}
			}
			else
			{
				cout<<"You have managed to go all the way. You are now down to the last two cases in the game." << endl;

				double first_unopened_value = 0;
				double second_unopened_value = 0;

				for (int x = 0; x < 26; x++)
				{
					if(!caseOpened[x])
				}

				cout<<"One case contains $" << first_unopened_value << "while the other contains $" << second_unopened_value << "." <<endl;
				cout<<"Press 1 if you want to keep your case, or press 2 to swap your case for the other unopened case." <<endl;
				cin>>final_decision;
			}
		cout<<"The banker is calling to make his offer. You can either take it if you feel you won't win more money.";
		cout<<" Or you can decide to turn down the offer and continue the game." <<endl;
			if(round_number==1)
		cout<<" The banker is willing to offer you $" <<offer<< " for you to leave the game now. So the question is, deal or no deal?" <<endl;
		deal;
		round_number=round_number+1;
		}while(1);
	}while(1);
	system("pause");
	return 0;
}