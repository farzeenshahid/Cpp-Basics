#include <iostream>
using namespace std;
int main(){
    string myName;
    cout<<"Enter your name: ";
    cin>> myName;
    cout<< "My name is "<<myName<<"."<<endl;
    //User input using getline//
    string myCountry;
    cout<<"Enter your country name: ";

    getline(cin, myName, myCountry);
    cout<< myCountry;
    return 0;

}