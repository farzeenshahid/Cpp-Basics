#include <iostream>
using namespace std;

class fib5 {    
private:

    int last;
    int next;

public:

    fib5(): last(0) , next(1) {};
    void fib_series(int n);

};

void fib5::fib_series(int n) {

    int i;
    int new_value;

    cout << last << endl << next << endl;

    for (i = 0; i <= n - 3 ; i++)
    {
        new_value = last + next;
        cout << new_value << endl;
        last = next;
        next = new_value;
    }
}

int main() {

    fib5 fib;
    int value;
    cout << "FIBONACCI SERIES" << endl;
    cout << "How many numbers? ";
    cin >> value;
    fib.fib_series(value);

}