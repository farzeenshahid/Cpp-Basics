#include <iostream>
using namespace std;

class fib2
{
    public:
    static int Fib2(int n)
    {
        if (n < 2)
        {
            return n;
        }
        return Fib2(n - 1) + Fib2(n - 2);
    }
    
    
};


int main() {
    
    fib2 qs1;
    fib2 qs2;

    cout << qs1.Fib2(5) << endl;
   
    cout << qs2.Fib2(10) << endl;

    return 0;
}
