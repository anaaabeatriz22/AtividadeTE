 
#include <iostream>

using namespace std;

int main()
{
    double tempogasto;
    double vm;
    double distancia;
    double litros_usados;
    cout<<"Digite o tempo gasto na viagem:\n";
    cin>>tempogasto;
    cout<<"Digite a velocidade média gasta na viagem: \n";
    cin>>vm;
    distancia=tempogasto*vm;
    litros_usados=(distancia/12);
    cout<<"Velocidade média: "<<vm<<"\n";
    cout<<"Tempo gosto na viagem: "<<tempogasto<<"\n";
    cout<<"Distância percorrida: "<<distancia<<"\n";
    cout<<"Quantidade de litros usados na viagem"<<litros_usados;

    return 0;
}
