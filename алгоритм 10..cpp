#include <iostream>
#include <cmath>

using namespace std;

int primorial(int n, int sum=1)
{
  // cin >> n;

   bool *rosa = new bool[n];

   for (int i=2; i<=n; i++)
    {
        if(rosa[i]==1);
    }


       for (int i = 2; i <= n; i++)
        {
                if (rosa[i] && i <= (int)sqrt(n))
                        for (int j = i+i; j <= n; j += i)
                                rosa[j] = 0;
                if (rosa[i])
			          sum *= i;
        }

        return sum;

}
int main ()
{
    int n;
    int sum=1;
    cin >> n;
    cout << primorial;
    return 0;
}
