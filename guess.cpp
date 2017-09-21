#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

 int main()
 {
 int diff;
 int guess;
 char playagain;
 
 do
 {
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
      cout << "You have selected Easy. You have one guess. Pick a number between 1 and 2" << endl;
      cin >> guess;

      if( guess == randomNumber )
      {
        cout << "Congratulations! You guessed correctly! Press any button to continue or press N to quit." << endl;
      }
    

      else
      {
         cout << "You were off by one! Sorry, you lose. Press any button to continue or press N to exit." << endl;
      }
   }


   else if( diff == 2 )
   {
         int X;
         int difference;
         cout << "You have selected Medium. You have two guesses. Pick a number between 1 and 10" << endl;
         cin >> guess;
         X = randomNumber1 - guess;
         difference = abs(X);
      if ( guess == randomNumber1 )
      {
         cout << "Congratulations! You guessed correctly! Press any button to continue or press N to exit." << endl;
      }

      else if( guess > 10 )
      {
         int high;
         high = guess - 10;
         cout << "No no no, that number is " << high;
         cout << " too high. Pick a number between 1 and 10 next time. Press any button to continue or press N to exit." << endl;
      }

      else if( guess < 1 )
      {
        int low;
        int Y;
        Y = 1 - guess;
        low = abs(Y);
        cout << "No no no, that number is " << low;
        cout << " too low. Pick a number between 1 and 10 next time. Press any button to continue or press N to exit." << endl;
      }

      else
      {
        cout << "Incorrect! You were too ";
          if ( guess > randomNumber1 ) 
          {
              cout << "high!" << endl;
          }
          if ( guess < randomNumber1 )
          {
              cout << "low!" << endl;
          }
        int guess2;
        int z;
        int difference2;
        cin >> guess2;
        z = randomNumber1 - guess2;
        difference2 = abs(z);
        if ( guess2 == randomNumber1 )
        {
            cout << "Congratulations! You guessed correctly! Press any button to continue or press N to exit." << endl;
        }
        else
        {
            cout << "You were off by ";
            cout << difference2;
            cout << "! The number was "; 
            cout << randomNumber1;
            cout << ". Sorry, you lose. Press any button to continue or press N to exit." << endl;
        }
      }
   }


   else if( diff = 3 )
   {
       int X;
       int difference;
       cout << "You have selected Hard. You have 3 guesses. Pick a number between 1 and 100" << endl;
       cin >> guess;
      if ( guess == randomNumber2 )
      {
         cout << "Congratulations! You guessed correctly on Hard! Press any button to continue or press N to exit." << endl;
      }

      else
      {
        cout << "Incorrect! Your guess was too ";
        if ( guess > randomNumber2 ) 
        {
        cout << "high!" << endl;
        }
        if ( guess < randomNumber2 )
        {
        cout << "low!" << endl;
        }
        int guess2;
        cin >> guess2;
        if ( guess2 == randomNumber2 )
        {
        cout << "Congratulations! You guessed correctly on Hard! Press any button to continue or N to exit." << endl;
        }
        else
        {
            cout << "Incorrect! Your guess was too ";
            if ( guess2 > randomNumber2 )
            {
               cout << "high!" << endl;
            }
            if ( guess2 < randomNumber2 ) 
            {
                cout << "low!" << endl;
            }
            int guess3;
            cin >> guess3;
            if ( guess3 == randomNumber2 )
            {
                cout << "Congratulations! You guessed correctly on Hard! Press any button to continue or press N to exit." << endl;
            }
            else
            {
                X = randomNumber2 - guess3;
                difference = abs(X);
                cout << "Incorrect! You were off by ";
                cout << difference;
                cout << "! The number was ";
                cout << randomNumber2;
                cout << ". Would you like to play again? Press any button to continue or press N to exit." << endl;
            }
        }
      }

   }
 cin >> playagain;
 }while( playagain != 'N' && playagain != 'n' );
 
 }




 


