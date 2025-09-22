/*File name:Chapter 3 Exercise 17.cpp
  Programmer:Arriana Maldonado
  Date:9/21/2025
  Purpose: Write a programe that produces two random nukmbers and then pause while the
  user works through the question of adding the two numbers. When the user presses enter, the answer
  is displayed.
*/ 
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{srand(time(0));

    int num1, num2, sum;
    num1 = rand() % 1000;
    num2 = rand() % 1000;
    cout << setw(6) << num1 << endl;
    cout << " + " << setw(3) << num2 << endl;
	cout << " _____ Press enter to reveal answer.";

    cin.get();
    sum = num1 + num2;
    cout  << setw(6) << sum << ".\n";
}
