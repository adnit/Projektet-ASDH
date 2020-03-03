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
  Personi *p1s;

  p1s->emri = "Adnit";
  p1s->mosha = 18;
  p1s->gjinia = 'M';

  shtyp(p1s);

  Personi *p2s = new Personi;
  p2s->emri = "Edon";
  p2s->mosha = 69;
  p2s->gjinia = 'M';

  shtyp(p2s);

  return 0;
}