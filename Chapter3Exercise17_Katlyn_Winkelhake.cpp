/* 
File Name: Chapter3Exercize17_Katlyn_Winkelhake.cpp
Programmer: Katlyn Winkelhake
Date: 9/14/2024
Requirements:
Write a program that can be used to tutor a math student and pauses while the student works on the question. In a second branch, 
make it so the student can enter a number and see if it is correct or incorrect
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int num_1;
	int num_2;
	int num_3; // answer
	int num_4; // inputted answer

	unsigned seed = time(0);
	srand(seed);


	num_1 = rand();
	num_2 = rand();
	num_3 = num_1 + num_2;


	cout << "Press type the answer." << endl;
	cout << endl;
	cout << setw(20) << num_1 << endl;
	cout << setw(15) << " + " << num_2 << endl;
	cout << setw(22) << "-----------" << endl;
	cin >> num_4;
	cin.get();
	
	if (num_4 != num_3)
	{
		cout << setw(20) << "You are incorrect. The answer is " << num_3;
	}

	else
	{
		cout << setw(20) << "You are correct!";
	}
	return 0;
}
