#include <iostream>
#include <sstream>
#include <iomanip>
#include <time.h>
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
    gypiS << viti() << endl;
    return gypiS.str();
  }
};

Data currentDT()
{

  time_t timer;
  time(&timer);

  int year, month, day, dDuration, mDuration, yDuration;

  // gjatsia e dites n sekonda
  dDuration = 60 * 60 * 24;
  // gjatsia e muajit n sekonda
  mDuration = dDuration * 30;
  // gjatsia e vitit n sekonda
  yDuration = dDuration * 365.24;

  year = 1970 + (timer / yDuration);
  month = ((timer % yDuration) / mDuration) + 1;
  day = (((timer % yDuration) % mDuration) / dDuration) + 1;

  Data current = Data(day, month, year);

  return current;
}

int main()
{

  Data *ditlindja = new Data(27, 7, 2001);
  Data Tani = currentDT();
  cout << Tani.shtyp();
  cout << "Tremujori:  " << ditlindja->tremujori() << endl;
  cout << "Shekulli : " << ditlindja->shekulli() << endl;
  cout << "Ditlindja : " << ditlindja->shtyp() << endl;
  return 0;
}