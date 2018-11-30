/*Напишите функцию вычисляющую праймориал числа. Программа должна работать не более чем за O(n*log log n) шагов.*/
#include <iostream>
using namespace std;
int prime(bool *a, int b)
{
  int sum = 1;
  bool *rosa = new bool[b + 1];
  rosa[0] = rosa[1] = 0;
  for (int i = 2; i <= b; i++)
    {
  rosa[i] = 1;
  for (int i = 2; i <= b; i++)
        {
          if (rosa[i])
            {
              for (int j = i + i; j <= b; j += i)
                  rosa[j] = 0;
              }
         }
}
if (rosa[i] == 1)
  {
    sum *= i;
  }
}

return sum;
}
int main()
{
int n;
cin >> n;
bool *array = new bool[n + 1];
cout << prime(array, n);
return 0;
}
