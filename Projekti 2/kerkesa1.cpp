#include <iostream>
using namespace std;

class Drejtkendshi
{
private:
  double gjeresia, lartesia;

public:
  Drejtkendshi(double gjeresia, double lartesia)
  {
    this->gjeresia = gjeresia;
    this->lartesia = lartesia;
  }

  double getGjeresia()
  {
    return gjeresia;
  }
  double getLartesia()
  {
    return lartesia;
  }
  void shtyp()
  {
    cout << "D = " << getGjeresia() << endl;
    cout << "L = " << getLartesia() << endl;
  }
  void setGjeresia(double gjeresia)
  {
    this->gjeresia = gjeresia;
  }

  void setLartesia(double lartesia)
  {
    this->lartesia = lartesia;
  }
};

int main()
{

  // statik

  Drejtkendshi d1statik = Drejtkendshi(69.69, 4.20);
  d1statik.shtyp();
  // ndryshimi
  d1statik.setGjeresia(20);
  d1statik.setLartesia(10);
  d1statik.shtyp();

  cout << "Dinamik" << endl;
  // dinamik

  Drejtkendshi *d1heap = new Drejtkendshi(66.66, 33.3);
  d1heap->shtyp();
  // ndryshimi
  d1heap->setGjeresia(22);
  d1heap->setLartesia(15);
  d1heap->shtyp();
  delete d1heap;

  return 0;
}