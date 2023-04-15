// Fibonacci Series using iterative approach
#include <iostream>
using namespace std;
class Fib4{
    public:
    int last = 0, next = 1;
    int fib4(int n)
    {
        for (int i = 0; i<n; i++)
        {
            int oldlast = last;
            last = next;
            next = oldlast + next;

        }
        return last;
    }
};
//driver code
int main(){
    Fib4 fib1;
    cout<<fib1.fib4(20)<<endl;
    cout<<fib1.fib4(40);
    return 0;
}
// code comiled by Farzeen Shahid