#include <iostream>

using namespace std;

int main()
{
// Declare variables	
	float no1, no2; 
	float sum1, sum2, sum3, sum4;
	char in='y';

//The statement will loop as long as in == y
	while (in == 'y' || in == 'Y')
	{
		cout << "please enter two numbers" << endl;

//get user input 
		cin >> no1;
		cin >> no2;

		cout << "what sign will you use for these two numbers?" << endl;
			
		cin >> in;
//when in equals plus sum1 is displayed
		if (in == '+')
		{
			sum1 = no1 + no2;
			cout << "Your answer is " << sum1 << endl;
		}

		//when in equals minus sum2 is displayed
		else if (in == '-')
		{
			sum2 = no1 - no2;
			cout << "Your answer is " << sum2 << endl;
		}

		//when in equals times sum3 is displayed
		else if (in == '*')
		{
			sum3 = no1 * no2;
			cout << "Your answer is " << sum3 << endl;
		}

		//when in equals divide sum4 is displayed as long as the second number isn't zero
		//If the second number is zero an error message is display
		else if (in == '/')
		{
			if (no2 == 0)
			{
				cout << "You divided by zero, Try again" << endl;
			}
			else {
				sum4 = no1 / no2;
				cout << "Your answer is " << sum4 << endl;
			}
		}
			
		//Typing in Y continues the loop and typing in N stops the loop 
		cout << "Do you want to want to enter another calculation?(Y for yes/N for No)" << endl;
		cin >> in;
	}
		
	//Display message when loop is stopped
	cout << "Closing calculation..." << endl;

	system("pause");
	return 0;
}