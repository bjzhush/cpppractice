#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    int q = 10;
    int d = 3;
    q = q%d;
    cout << "q is " << q << endl;

    int qq = 10;
    int dd = 3;
    while(qq > dd) {
        qq = qq-dd;
    }
    cout << "qq is " << qq << endl;
    return 0;
}
