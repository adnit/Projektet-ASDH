#include <iostream>
#include <vector>
using namespace std;

void shtyp(vector<int> v1)
{
     cout << "[ ";
     for(int i = 0; i < v1.size(); i++)
    {
        cout << v1.at(i) << " ";
    }
    cout << "]" << endl;
}

int main(){

    vector<int> vargu1;

    vargu1.push_back(7);
    vargu1.push_back(5);
    vargu1.push_back(6);
    vargu1.push_back(3);

    shtyp(vargu1);

// Të shtohet numri 2 në fillim të vargut.

    vargu1.insert(vargu1.begin(),2);
    shtyp(vargu1);
    
// Të largohet elementi i parafundit nga vargu.

    vargu1.erase(vargu1.end() - 2);
    shtyp(vargu1);

// Të shtohet numri -3 në indeksin 2
    
    vargu1.insert(vargu1.begin() + 2,-3);
    shtyp(vargu1);
// Të largohet elementi i parë nga vargu.

    vargu1.erase(vargu1.begin());
    shtyp(vargu1);

// Të dyfishohet elementi në indeksin 1.

    vargu1.at(1) = 2 * vargu1.at(1);
    shtyp(vargu1);
//Të tregohet në ekran sa elemente janë pozitive në këtë varg.



    int pozitiv = 0;
    for (int i = 0; i < vargu1.size(); i++)
    {
        if(vargu1.at(i)>0)
        {
            pozitiv++;
        }
    }
    
    cout << "Vargu ka " << pozitiv << " elemente." << endl;





    return 0;
}