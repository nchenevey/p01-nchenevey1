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
  int randomNumber3;

  randomNumber = rand() % 2 + 1;
  randomNumber1 = rand() % 10 + 1;
  randomNumber2 = rand() % 100 + 1;
  randomNumber3 = rand() % 1000 + 1;

  cout << "Select a difficulty:" << endl;
  cout << "(1) Easy: 1 guess, random number between 1 and 2" << endl;
  cout << "(2) Medium: 2 guesses, random number between 1 and 10" << endl;
  cout << "(3) Hard: 3 guesses, random number between 1 and 100" << endl;
  cout << "(4) Extreme: 10 guesses, random number between 1 and 1000" << endl;

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


   else if( diff == 3 )
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


   else if( diff == 4 )
   {
      
      int guesstreme;
      
      cout << "You have selected Extreme. You have 15 guesses. Pick a number between 1 and 1000" << endl;
      for ( int gcount = 0; gcount <= 15; gcount++ )
      {
        cin >> guesstreme;
        int range;
        int A;
        A = randomNumber3 - guesstreme;
        range = abs(A);
        if( guesstreme == randomNumber3 )
        {
        cout << "Congratulations! You have defeated Extreme mode. Press any button to continue or N to exit." << endl;
        break;
        }
        else
        {
            if( range > 750 )
            {
            cout << "Your guess was more than 750 off! You have " << ( 14 - gcount)<<" attempts remaining.\n";
            }
            else if( range <= 750 && range > 500 )
            {
            cout << "Your guess was more than 500 off! You have " << ( 14 - gcount)<<" attempts remaining.\n";
            }
            else if( range <= 500 && range > 250 ) 
            {
            cout << "Your guess was more than 250 off! You have " << ( 14 - gcount)<<" attempts remaining.\n";
            }
            else if( range <= 250 && range > 100 )
            {
            cout << "Your guess was more than 100 off! You have " << ( 14 - gcount)<<" attempts remaining.\n";
            }
            else if( range <= 100 && range > 50 )
            {
            cout << "Your guess was more than 50 off! You have " << ( 14 - gcount)<<" attempts remaining.\n";
            }
            else if( range <= 50 && range > 20 )
            {
            cout << "Your guess was more than 20 off! You have " << ( 14 - gcount)<<" attempts remaining.\n";
            }
            else if( range <= 20 && range > 10 )
            {
            cout << "Your guess was more than 10 off! You have " << ( 14 - gcount)<<" attempts remaining.\n";
            }
            else if( range <= 10 && range > 5 )
            {
            cout << "Your guess was more than 5 off! You have " << ( 14 - gcount)<<" attempts remaining.\n";
            }
            else if( range <=5 && range > 0 )
            {
            cout << "Your guess was less than 5 off! You have " << ( 14 - gcount)<<" attempts remaining.\n";
            }
            else if( gcount == 15 )
            {
            cout << "Sorry, you have used all of your attempts. You lose! Press any button to continue or press N to exit." << endl;
            break;
            }
        }
      }
   }

 cin >> playagain;
 }while( playagain != 'N' && playagain != 'n' );
 
 
 }




 


