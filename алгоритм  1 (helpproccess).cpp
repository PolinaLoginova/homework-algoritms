#include <iostream>

using namespace std;

int main()
{
    int N = 78487894;
    unsigned int X;
    for (unsigned int Y = 1; Y < 38875; Y++)
     {
        if ((N - (2019 * Y)) % 2018 == 0)
            {
                X = (N - (2019 * Y)) / 2018;
                cout << "Y = " << Y << " X = " << X << "\n";
            }
    }
return 0;
}
