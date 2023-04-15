#include <iostream>
using namespace std;
int main(){
    string myOperator;
    cout<<"Enter your operator: ";
    cin>> myOperator;
    int x;
    int y;
    cout<<"Enter first number: ";
    cin>> x;
    cout<<"Enter second number: ";
    cin>>y;
    if (myOperator== "+") {
        cout<< x+y;
    } else if (myOperator == "-"){
        cout<< x-y;

    }else if (myOperator == "*") {
        cout<< x*y;
    } else {
        cout<< x/y;
        return 0;
    }
        
}