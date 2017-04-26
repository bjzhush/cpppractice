#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    int sum,x;
    x = 1;
    sum = 0;
    while(true) {
        sum = sum + x;
        x++;
        if (x == 11){
            break;
        }
    }
    cout << "sum is " << sum << endl;
    return 0;
}
