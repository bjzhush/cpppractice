#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    srand(time(NULL));
    int x = rand() % 20 + 1;
    cout << "x is " << x << endl;
    if (x > 10) {
        cout << "x is bigger than 10";
    } else {
        cout << "x is not bigger than 10";
    }
    return 0;
}
