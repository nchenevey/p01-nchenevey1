#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

 int main()
 {
 int diff;
 int guess;


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
 if( diff == 1 )
 {
 cout << "You have selected Easy. Pick a number between 1 and 2" << endl;
 cin >> guess;
 if( guess == randomNumber )
 {
 cout << "Congratulations! You guessed correctly!" << endl;
 }
 else if( guess > 2 )
 {
 int high;
 high = guess - 2;
 cout << "No no no, that number is " << high;
 cout << " too high. Pick a number between 1 and 2!" << endl;
 }
 else if ( guess < 1 )
 {
 int low;
 int Y;
 Y = 1 - guess;
 low = abs(Y);
 cout << "No no no, that number is " << low;
 cout << " too low. Pick a number beween 1 and 2!" << endl;
 }
 else
 {
 cout << "You were off by one! Sorry, you lose." << endl;
 }
 }

 else if( diff == 2 )
 {
 int X;
 int difference;
 cout << "You have selected Medium. Pick a number between 1 and 10" << endl;
 cin >> guess;
 X = randomNumber1 - guess;
 difference = abs(X);
 if ( guess == randomNumber1 )
 {
 cout << "Congratulations! You guessed correctly!" << endl;
 }
 else if( guess > 10 )
 {
 int high;
 high = guess - 10;
 cout << "No no no, that number is " << high;
 cout << " too high. Pick a number between 1 and 10!" << endl;
 }
 else if( guess < 1 )
 {
 int low;
 int Y;
 Y = 1 - guess;
 low = abs(Y);
 cout << "No no no, that number is " << low;
 cout << " too low. Pick a number between 1 and 10!" << endl;
 }
 else
 {
 cout << "You were off by ";
 cout << difference;
 cout << "! The number was "; 
 cout << randomNumber1;
 cout << ". Sorry, you lose." << endl;
 }
 }

 else if( diff = 3 )
 {
 int X;
 int difference;
 cout << "You have selected Hard. Pick a number between 1 and 100" << endl;
 cin >> guess;
 X = randomNumber2 - guess;
 difference = abs(X);
 if ( guess == randomNumber2 )
 {
 cout << "Congratulations! You guessed correctly on Hard!" << endl;
 }
 else
 {
 cout << "You were off by " << difference;
 cout << "! The number was " << randomNumber2;
 cout << ". Sorry, you lose." << endl;
 }
 }
 
 }




 


