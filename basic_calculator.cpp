#include <cmath>

#include <iostream>
using namespace std;
void add;
void sub;
void multi;
void division;
void sqrt;
void fact;
void pow;
void exp;
 int main(){
     int num;
     cout<<"Press 0 to exit\n";
     cout<<"Press 1 for addition\n";
     cout<<"Press 2 for subtraction\n";
     cout<<"Press 3 for multiplication\n";
     cout<<"Press 4 for division\n";
     cout<<"Press 5 for square root\n";
     cout<<"Press 6 for factorial\n";
     cout<<"Press 7 for power\n";
     cout<<"Press 8 for exponential\n";
     cout<<"Enter your choice number\n";
     
     cin>> num;
     double num1, num2;
     cout<<"Enter first number";
     cin>>num1;
     cout<<"Enter second number";
     cin>>num2;
     switch (num)
     {
     case '1':
         cout<<num1+num2;
         break;
     case '2':
        cout<<num1-num2;
        break;
     case '3':
        cout<<num1*num2;
        break;
     case '4':
        cout<<num1/num2;
        break;
     case '5':
        cout<<sqrt(num1);
        cout<<sqrt(num2);
        break;
     
     }

     return 0;

 }