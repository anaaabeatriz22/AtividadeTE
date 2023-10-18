
#include <iostream>

using namespace std;

int main()
{
    double raio;
    double altura;
    double pi=3.14159;
    double volume;
    cout<<"Digite o raio do cilindro: \n";
    cin>>raio;
     cout<<"Digite a altura do cilindro \n";
   cin>>altura;
   volume=(raio*raio)*altura*pi;
   cout<<"O volume do cilindro é\n:"<<volume;
    return 0;
}
