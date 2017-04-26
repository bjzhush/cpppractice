#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    int x;
    cout << "plz inut x" <<  endl;
    cin >> x;

    int y;
    cout << "plz inut y" <<  endl;
    cin >> y;

    int i = 1;
    int power = 1;
    power *=x;
    i++;
    if (i <= y) {
        cout << "x is <= y" <<  endl;
    } else{
        cout << "x is > y" <<  endl;
    }

    cout << "power is " << power  <<  endl;

    return 0;
}
