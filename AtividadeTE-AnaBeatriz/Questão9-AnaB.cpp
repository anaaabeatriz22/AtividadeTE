
#include <iostream>

using namespace std;

int main()
{
    int A;
    int B;
    int aux=0;
    cout<<"Digite o valor de A:\n";
    cin>>A;
    cout<<"Digite o valor de B: \n";
    cin>>B;
     aux= A;
     A=B;
     B=aux;
     
cout<<"O valor de A é: "<< A << "\n";
cout<<"O valor de B é: "<< B;

    return 0;
}
