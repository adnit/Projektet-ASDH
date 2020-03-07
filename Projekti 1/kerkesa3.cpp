#include <iostream>
using namespace std;

int *kopjo(int *v, int n);

int main()
{
  cout << endl
       << "Kerkesa 3" << endl
       << endl;
  const int n = 4;
  int varg[n] = {1, 3, 4, 5};

  int *vargu = kopjo(varg, 4);

  for (int i = 0; i < n; i++)
  {
    cout << *(vargu + i) << endl;
  }

  delete[] vargu;

  char zgjedhja;
  do
  {
    cout << "Deshironi te ktheheni prapa (y/n) : ";
    cin >> zgjedhja;
  } while (zgjedhja != 'y' && zgjedhja != 'n');

  if (zgjedhja == 'y')
  {
    system("projekti1.exe");
  }
  else
  {
    system("echo deleting system32");
  }
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
