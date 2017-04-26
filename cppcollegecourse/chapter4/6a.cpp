#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    int product,x;
    x = 5;
    product = 5;
    product *= x++;
    cout << "product is " << product << endl;
    return 0;
}
