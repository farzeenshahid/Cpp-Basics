#include <iostream>
using namespace std;

int fibonacci(int num, int *memoize);

int main()
{
    int num;

    cout << "i: ";
    cin >> num;

    // it will assume that num > 2, just to keep it short and simple
    int *memoize = new int[num + 1];
    memoize[0] = 0;
    memoize[1] = 1;

    // -1 indicates that the value is not within the array
    for (int i = 2; i <= num; i++)
        memoize[i] = -1;

    cout << num << "th fibonacci number: " << fibonacci(num, memoize) << endl;

    delete[] memoize;
    return 0;
}

int fibonacci(int num, int *memoize)
{
    // if value has not been calculated yet
    if (memoize[num] == -1)
    {
        // calculate it and store it in the array
        memoize[num] = fibonacci(num - 1, memoize) + fibonacci(num - 2, memoize);
    }

    return memoize[num];
}
//code compiled by Faiqa Batool