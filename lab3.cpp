#include <iostream>
#include <string>
using namespace std;
class tablou
{
public:
    string denumire;
    string curent;
    string autor;
    tablou(string x, string y, string z);
};
tablou::tablou(string x, string y, string z)
{
    denumire = x;
    curent = y;
    autor = z;
}
int main()
{
    tablou tablouObj1("Al 9-lea Val", "Romantism", "Ivan Aivazovsky");
    cout << tablouObj1.denumire << " " << tablouObj1.curent << " " << tablouObj1.autor << " " << endl;
    tablou tablouObj2("Edecarii de pe Volga", "Realism", "Ilya Repin");
    cout << tablouObj2.denumire << " " << tablouObj2.curent << " " << tablouObj2.autor << " " << endl;
    tablou tablouObj3("Fata cu piersici", "Ipresionism", "Valentin Serov");
    cout << tablouObj3.denumire << " " << tablouObj3.curent << " " << tablouObj3.autor << " " << endl;
    return 0;
}
