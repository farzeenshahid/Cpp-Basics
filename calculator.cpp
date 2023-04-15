#include <cmath>
#include <iostream>
using namespace std;
void add();
void sub();
void multi();
void division();
void sqrt();
void fact();
void pwr();
void exp();
int main() {
    int opr;

    cout<<"Calculator program in c++\n";
    cout<<"Enter operation you want to perform\n";
    cout<<"Press 0 to exit\n";
    cout<<"1 = Addition\n";
    cout<<"2 = Subtraction\n";
    cout<<"3 = Multiplication\n";
    cout<<"4 = Division\n";
    cout<<"5 = Power\n";
    cout<<"6 = Square root\n";
    cout<<"7 = Factorial\n";
    cout<<"8 = Exponential\n";
    cin>> opr;
    switch (opr){
        case 1:
        add();
        break;
        case 2:
        sub();
        break;
        case 3:
        multi();
        case 4:
        division();
        break;
        case 5:
        pwr();
        break;
        case 6:
        sqrt();
        break;
        case 7:
        fact();
        break;
        case 8:
        exp();
        break;
        default:
        cout<<"Something is wrong";
        break;
        }


}
void add(){
    int n, sum = 0, i, number;  
    cout <<"How many numbers you want to add: ";  
    cin >> n;  
    cout << "Please enter the number one by one: \n";  
    for (i = 1; i <= n; i++)  {  
        cin >> number;  
        sum = sum + number;  
    }  
    cout << "\n Sum of the numbers = "<< sum;  
}
void sub()  
{  
int num1, num2, z;  
cout <<" \n Enter the First number = ";  
cin >> num1;  
cout << "\n Enter the Second number = ";  
cin >> num2;  
z = num1 - num2;  
cout <<"\n Subtraction of the number = " << z;  
}  
void multi()  
{  
int num1, num2, mul;  
cout <<" \n Enter the First number = ";  
cin >> num1;  
cout << "\n Enter the Second number = ";  
cin >> num2;  
mul = num1 * num2;  
cout <<"\n Multiplication of two numbers = " << mul;  
}  
void division()  
{  
int num1, num2, div = 0;  
cout <<" \n Enter the First number = ";  
cin >> num1;  
cout << "\n Enter the Second number = ";  
cin >> num2;  
while ( num2 == 0)  
     {  
     cout << "\n Divisor canot be zero"  
         "\n Please enter the divisor once again: ";  
         cin >> num2;  
         }  
div = num1 / num2;  
cout <<"\n Division of two numbers = " << div;  
} 
void sqrt()
{
float q;  
int num1;  
cout << "\n Enter the number to find the Square Root:";  
cin >> num1;  
q = sqrt(num1);  
cout <<" \n Square Root of " << num1<< " is : "<< q;  

} 
void fact()
{int n;
long double factorial = 1.0;

cout << "Enter a positive integer: ";
cin >> n;

if (n < 0)
    cout << "Error! Factorial of a negative number doesn't exist.";
else {
    for(int i = 1; i <= n; ++i) {
        factorial *= i;
    }
    cout << "Factorial of " << n << " = " << factorial;  
}
}
void exp()
{
double x = 2.19, exponent;
exponent = exp(x);
cout << "exp(x) = " << exponent << endl;
}
void pwr(){
float base, exponent, power;

    cout << "Enter base and exponent respectively:  ";
    cin >> base >> exponent;

    power = pow(base, exponent);

    cout << base << "^" << exponent << " = " << power;
    
}