#include <iostream>
#include <vector>
using namespace std;

void shtyp(vector<int> vargu)
{

    cout << "Gjatesia e vargut: " << vargu.size() << endl
         << "[ ";

    for (int i = 0; i < vargu.size(); i++)
    {
        cout << vargu.at(i) << " ";
    }

    cout << "]" << endl;
}

int shumaVektorit(vector<int> vargu)
{
    int shuma = 0;

    for (int i = 0; i < vargu.size(); i++)
    {
        shuma += vargu.at(i);
    }

    return shuma;
}

int main()
{
    /*
Të shkruhet programi i cili ndjek këta hapa:

E lexon një numër të plotë n nga tastiera.
Të lexohen n numrat e radhës nga tastiera dhe të vendosen në një vector<int>.

Të tregohet cili varg e ka shumën më të madhe.
*/

    int n;
    cout << "Shtyp n: ";
    cin >> n;

    vector<int> vargu1;

    for (int i = 0; i < n; i++)
    {
        cout << "Shtype elementin " << i + 1 << " : ";
        int numri;
        cin >> numri;

        vargu1.push_back(numri);
    }

    // Nga ky varg, të ruhen elementet çift në një array listë të veçantë numrat_cift dhe elementet tek në një array listë numrat_tek.

    vector<int> numrat_cift;
    vector<int> numrat_tek;

    for (int i = 0; i < vargu1.size(); i++)
    {
        if (vargu1.at(i) % 2 == 0)
        {
            numrat_cift.push_back(vargu1.at(i));
        }
        else
            numrat_tek.push_back(vargu1.at(i));
    }

    // Të shtypen elementet dhe gjatësitë e array listave numrat_cift dhe numrat_tek.

    shtyp(numrat_cift);
    shtyp(numrat_tek);

    //    Të tregohet cili varg e ka shumën më të madhe.

    if (shumaVektorit(numrat_cift) == shumaVektorit(numrat_tek))
    {
        cout << "Kane shuma te barabarta";
    }
    else if (shumaVektorit(numrat_cift) > shumaVektorit(numrat_tek))
    {
        cout << "Numrat qift kane shume me ta madhe";
    }
    else
        cout << "Numrat tek kane shume me ta madhe";

    return 0;
}