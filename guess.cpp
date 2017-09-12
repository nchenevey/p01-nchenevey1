#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
string diff;
string guess;


srand ( time(NULL) );
int randomNumber;
int randomNumber1;
int randomNumber2;

randomNumber = rand() % 2 + 1;
randomNumber1 = rand() % 10 + 1;
randomNumber2 = rand() % 100 + 1;

cout << "Select a difficulty:" << endl;
cout << "(1) Easy: 1 guess, random number between 1 and 2" << endl;
cout << "(2) Medium: 2 guesses, random number between 1 and 10" << endl;
cout << "(3) Hard: 3 guesses, random number between 1 and 100" << endl;

cin >> diff;
if( diff == 1)
{
cout << "You have selected Easy. Pick a number between 1 and 2" << endl;
cin >> guess;
if( guess == randomNumber )
{
cout << "Congratulations! You guessed correctly!" << endl;
}



