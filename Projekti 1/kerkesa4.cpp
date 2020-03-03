#include <iostream>
using namespace std;

struct Personi
{
  string emri;
  int mosha;
  char gjinia;
};

void shtyp(Personi *p)
{
  cout << "Emri: " << p->emri << endl;
  cout << "Mosha: " << p->mosha << endl;
  cout << "Gjinia: " << p->gjinia << endl;
}

int main()
{

  Personi p1 = {"Adnit", 18, 'M'};
  shtyp(&p1);

  Personi *p2s = new Personi{"Edon", 69, 'M'};
  shtyp(p2s);
  delete p2s;

  return 0;

  /* Personi p1 = {"Adnit", 18, 'M'};
  Personi *p1ptr = &p1;

  shtyp(p1ptr);

  Personi *p2s = new Personi;
  *p2s = {"Edon", 69, 'M'};

  shtyp(p2s);
  delete p2s; 

  return 0; */
}