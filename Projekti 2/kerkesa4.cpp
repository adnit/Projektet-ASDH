#include <iostream>
#include <sstream>
using namespace std;

class Shfrytzuesi
{
private:
  string emri, mbiemri, email, pw;

public:
  Shfrytzuesi(string emri, string mbiemri, string email, string pw)
  {
    this->emri = emri;
    this->mbiemri = mbiemri;
    this->email = email;
    this->pw = pw;
  }
  string emriPlote()
  {
    stringstream gypiS;
    gypiS << emri << " " << mbiemri;
    return gypiS.str();
  }
  bool testLogin(string email, string pw)
  {
    return (email == this->email && pw == this->pw);
  }
};

int main()
{
  Shfrytzuesi *perdorusi1 = new Shfrytzuesi{"Adnit", "Kamberi", "root", "toor"};
  Shfrytzuesi *perdorusi2 = new Shfrytzuesi{"Edon", "Gashi", "edongashi", "fiek2018"};
  Shfrytzuesi *perdorusi3 = new Shfrytzuesi{"Filan", "Fisteku", "admin", "password"};
  Shfrytzuesi *perdorusi4 = new Shfrytzuesi{"Useri", "Mbiemri", "admin", "admin"};
  Shfrytzuesi *perdorusi5 = new Shfrytzuesi{"Elon", "Musk", "tesla", "spacex"};

  Shfrytzuesi *perdorustRegjistrum = new Shfrytzuesi[5]{*perdorusi1, *perdorusi2, *perdorusi3, *perdorusi4, *perdorusi5};

  for (int i = 0; i < 5; i++)
  {
    cout << perdorustRegjistrum[i].emriPlote() << endl;
  }
  cout << endl;
  bool loginFailed = true;
  while (loginFailed)
  {
    string email, pw;
    cout << "Email: ";
    cin >> email;
    cout << "Password: ";
    cin >> pw;

    for (int i = 0; i < 5; i++)
    {
      if (perdorustRegjistrum[i].testLogin(email, pw))
      {
        cout << "Miresevini " << perdorustRegjistrum[i].emriPlote();
        loginFailed = false;
        return 0;
      }
    }
    loginFailed = true;
    cout << "Email ose password invalid jepni perseri!" << endl;
  }
}