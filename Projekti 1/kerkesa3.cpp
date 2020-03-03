#include <iostream>
using namespace std;

int *kopjo(int *v, int n);

int main()
{
  const int n = 4;
  int varg[n] = {1, 3, 4, 5};

  int *vargu = kopjo(varg, 4);

  for (int i = 0; i < n; i++)
  {
    cout << *(vargu + i) << endl;
  }

  delete[] vargu;
  return 0;
}

int *kopjo(int *v, int n)
{
  int *vargu = new int[n];

  for (int i = 0; i < n; i++)
  {
    *(vargu + i) = *(v + i);
  }

  return vargu;
}
