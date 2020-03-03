#include <iostream>
using namespace std;

void llogarit_ref(int *v, int n, int &min, int &max, double &mes);
void llogarit_ptr(int *v, int n, int *min, int *max, double *mes);

int main()
{
  cout << endl
       << "Kerkesa 2" << endl
       << endl;
  const int n = 5;
  int vargu[n] = {2, 8, 3, 9, 5};
  int min;
  int max;
  double mes;

  llogarit_ptr(vargu, n, &min, &max, &mes);

  cout << "Minimumi i array: " << min << endl;
  cout << "Maksimumi i array: " << max << endl;
  cout << "Mesatarja e array: " << mes << endl;

  llogarit_ref(vargu, n, min, max, mes);

  cout << "Minimumi i array: " << min << endl;
  cout << "Maksimumi i array: " << max << endl;
  cout << "Mesatarja e array: " << mes << endl;

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

void llogarit_ref(int *v, int n, int &min, int &max, double &mes)
{
  max = v[0];
  min = v[0];
  double shV = 0;

  for (int i = 1; i < n; i++)
  {
    if (*(v + i) > max)
    {
      max = *(v + i);
    }
    if (*(v + i) < min)
    {
      min = *(v + i);
    }
    shV += *(v + i);
  }
  mes = shV / n;
};

void llogarit_ptr(int *v, int n, int *min, int *max, double *mes)
{
  *max = v[0];
  *min = v[0];
  double shV = 0;

  for (int i = 1; i < n; i++)
  {
    if (*(v + i) > *max)
    {
      *max = *(v + i);
    }
    if (*(v + i) < *min)
    {
      *min = *(v + i);
    }
    shV += *(v + i);
  }
  *mes = shV / n;
};