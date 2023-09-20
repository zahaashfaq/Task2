#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	srand(time(0));
	int num = rand() % 100;
	int choice;
	bool guessStatus = true;
	while (guessStatus)
	{
		cout << "\nEnter your guess: ";
		cin >> choice;
		if (choice == num)
		{
			cout << "Congratulations! Your guess is right\n";
			guessStatus = false;
		}
		else if (choice < num)
		{
			cout << "Your guess number is small\n";
		}
		else
		{
			cout << "Your guess number is large\n";
		}
	}
}