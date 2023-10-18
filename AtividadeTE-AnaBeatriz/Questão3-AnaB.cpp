#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
  char nome[256], sobrenome[256];
    
    cout<<"Digite seu nome:";
 cin.getline (nome,256);
     cout<<"Digite seu sobrenome:";
   cin.getline (sobrenome,256);
   strcat(nome, sobrenome);
     
cout<<"O seu nome completo é:"<< nome; 
    return 0;
}
