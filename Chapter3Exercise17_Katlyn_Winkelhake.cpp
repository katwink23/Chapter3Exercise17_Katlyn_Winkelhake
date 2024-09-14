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
using namespace std;

int main()
{
	double firstNumber = rand();
	double secondNumber = rand();
	double product;
	
	product = firstNumber + secondNumber;


	cout << "Press enter when ready for answer." << endl;
	cout << endl;
	cout << setw(20) << firstNumber << endl;
	cout << setw(15) << " + " << secondNumber << endl;
	cout << setw(22) << "-----------" << endl;
	cin.get();
	cout << setw(20) << product << endl;


	return 0;
}
