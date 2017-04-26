#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    int x = 10;
    int total = 100;
    cout << "x is " << x << endl;
    cout << "total is " << total << endl;
    x--;
    total -= x;

    cout << "x is " << x << endl;
    cout << "total is " << total << endl;
    return 0;
}
