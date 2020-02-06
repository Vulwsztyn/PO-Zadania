#include <iostream>
using namespace std;

struct person {
    string name;
    string number;
};

person szukaj(person tablica[], int size, string szukany){
    for (int i=0;i<size;i++){
if (tablica[i].number==szukany) return tablica[i];
    }
}

int main() 
{
    person tab[3] = {
        {"Artur","508149336"},
        {"Norbert","798833510"},
        {"Marysia","697222542"},
    };
    cout<<szukaj(tab,3,"798833510").name<<endl;
    return 0;
}