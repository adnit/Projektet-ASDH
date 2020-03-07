#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

class Data
{
private:
  // pi boj int ma leht
  //me gjet tremujorin edhe shekullin
  int d, m, v;

public:
  Data(int d, int m, int v)
  {
    this->d = d;
    this->m = m;
    this->v = v;
  }

  int dita()
  {
    return d;
  }
  int muaji()
  {
    return m;
  }
  int viti()
  {
    return v;
  }
  int tremujori()
  {
    if (m == 3)
    {
      return 1;
    }
    else if (m == 6)
    {
      return 2;
    }
    else if (m == 9)
    {
      return 3;
    }
    else if (m == 12)
    {
      return 4;
    }
    else
    {
      return (m / 3) + 1;
    }
  }

  int shekulli()
  {
    return (v / 100) + 1;
  }
  string shtyp()
  {
    stringstream gypiS;
    gypiS << setw(2) << setfill('0') << dita() << "/";
    gypiS << setw(2) << setfill('0') << muaji() << "/";
    gypiS << viti();
    return gypiS.str();
  }
};

int main()
{
  Data *ditlindja = new Data(27, 7, 2001);
  cout << "Tremujori:  " << ditlindja->tremujori() << endl;
  cout << "Shekulli : " << ditlindja->shekulli() << endl;
  cout << "Ditlindja : " << ditlindja->shtyp() << endl;
  return 0;
}