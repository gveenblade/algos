#include <iostream>
using namespace std;
int main()
{
  int n;
  int a[1111];
  cin >> n;
  for (int i = 0; i < n + 1; i++)
    a[i] = i;
  for (int j = 2; j < n + 1; j++)
  {
    if (a[j] != 0)
    {
      cout << a[j] << endl;
      for (int l = j*j; l < n + 1; l += j)
        a[l] = 0;
    }
  }
 
}
