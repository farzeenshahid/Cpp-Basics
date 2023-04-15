#include<iostream>
using namespace std;
class fib1{
    int next,n,first=0,second=1;
    public:
    void fab(){
        cout<<"enter number of terms in fibonacci series:"<<endl;
        cin>>n;
        cout<<"the fibonacci series is:"<<endl;
        for(int i=0;i<n;i++){
            cout<<first<<endl;//0,1,1
            next=second+first;//1+0,1+1,2+1
            first=second;//1,1,2
            second=next;//1,2,3

        }
    }
};

int main()
{
    fib1 l;
    l.fab();
    return 0;
}


