
#include <iostream>

using namespace std;

int main()
{
    double ht;
    double vh;
    double pd;
    double sb;
    double td;
    double sl;
    cout<<"Digite as suas horas trabalhadas:\n";
    cin >> ht ;
    cout<<"Digite o valor da hora trabalhada: \n";
    cin >> vh ;
    cout<<"Digite o percentual de desconto:\n";
    cin >> pd ;
    sb=ht*vh;
    td=(pd/100)*sb;
    sl=sb-td;
    cout<<"Horas trabalhadas: \n"<<ht;
    cout<<"Salário bruto: \n"<<sb;
    cout<<"Desconto: \n"<<td;
    cout<<"Salário liquido: \n"<<sl;
    return 0;
}
