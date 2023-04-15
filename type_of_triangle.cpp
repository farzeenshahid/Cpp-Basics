#include <iostream>
using namespace std;
int main() {
    float x, y, z;
    cout<<"Enter 1st side: "<< endl;
    cin>>x;
    cout<<"Enter 2nd side: "<< endl;
    cin>>y;
    cout<<"Enter 3rd side: "<< endl;
    cin>>z;
    
    if(x == y && y == z){
        cout<< "The triangle is equilateral.";
    }else if (x == y && y !=z){
        cout<< "The triangle is isoceles.";
    }else if(x!=y && y==z){
        cout<<"The triangle is isoceles.";

    }else{
        cout<<"The triangle is scalene.";
    }
    return 0;
}
