#include <iostream>
using namespace std;

enum PjesaProvimit
{
  PjesaShkrim,
  PjesaTeorike
};

class Rezultati
{
private:
  int piketShkrim, piketTeori;

public:
  Rezultati(int piketShkrim, int piketTeori)
  {
    this->piketShkrim = piketShkrim;
    this->piketTeori = piketTeori;
  }

  double piketMesatare()
  {
    return (piketShkrim + piketTeori) / 2;
  }
  bool kaKaluar()
  {
    return piketMesatare() >= 50;
  }
  PjesaProvimit pjesaMaksimale()
  {
    // ktu nese jon barabarta e kthen pjesaTeorike detaj estetik
    return piketShkrim > piketTeori ? PjesaShkrim : PjesaTeorike;
  }
};

int main()
{
  Rezultati *qarqeElektrike = new Rezultati(100, 50);
  cout << qarqeElektrike->piketMesatare() << endl;
  qarqeElektrike->kaKaluar() ? cout << "Ka kaluar" : cout << "Ska kaluar";
  cout << endl;

  switch (qarqeElektrike->pjesaMaksimale())
  {
  case 0:
    cout << "PjesaShkrim";
    break;

  case 1:
    cout << "PjesaTeorike";
    break;

  default:
    break;
  }

  delete qarqeElektrike;
  return 0;
}