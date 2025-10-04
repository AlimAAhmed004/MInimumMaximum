
//Write a program that asks the user to enter two numbers.
//The program should use the conditional operator to determine which number is the smaller and which is the larger.


#include <iostream>
using namespace std;

int main()
{
    // input variables
    int firstNum, secondNum;
       cout << "Please enter first number: ";
       cin >> firstNum;
       cout << "Please enter the second number: ";
       cin >> secondNum;

       //all possible outputs
       // if both variables are the same
       if (firstNum == secondNum)
           cout << firstNum << " equals " << secondNum << endl;
       // if one variables is greater than the other
       else if (firstNum > secondNum)
           cout << firstNum << " is greater than " << secondNum << endl;
       else cout << secondNum << " is greater than " << firstNum << endl;

       return 0;
}


