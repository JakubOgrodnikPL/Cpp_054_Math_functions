#include <iostream>
#include <cmath>
using namespace std;
int x=31, R, D, dist1, dist2;
int main()
{
    cout << "(1947-2014) How many times LA Lakers took part in NBA finals?" << endl;
    cout << "Rick :";
    cin >> R;
    cout << "Daryl: ";
    cin >> D;

    dist1=abs(x-R);
    dist2=abs(x-D);

    if (dist1<dist2)
    {
        cout << "Rick won!";
    }
    else if (dist2<dist1)
    {
        cout << "Daryl won!";
    }
    else
    {
        cout << "It's a tie";
    }

    return 0;
}
