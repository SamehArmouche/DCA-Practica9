#include <iostream>
#include <string>

using namespace std;

double n1=0,n2=0;

bool isNumber(const string& str)
{
  for (char const &c : str) {
    if (std::isdigit(c) == 0) return false;
  }
  return true;
}
bool askNumbers(){
  string cad1,cad2;
  cout <<"Introduce el primer numero:"<<endl;
  cin >>cad1;
  cout <<"Introduce el segundo numero:"<<endl;
  cin >>cad2;
  if((isNumber(cad1)) && (isNumber(cad1))){
    n1=stod(cad1); n2=stod(cad2);
    return true;
  }
  return false;
}

int main (){
  cout <<"CALCULADORA DCA"<<endl;
  char op;
  while(op!='0'){
    cout <<"-----------------------"<<endl;
    cout <<"1. SUMA"<<endl;
    cout <<"2. RESTA"<<endl;
    cout <<"3. MULTIPLICACÓN"<<endl;
    cout <<"4. DIVISIÓN"<<endl;
    cout <<"0. SALIR"<<endl;
    cin>>op;
    switch (op) {
      case '1': { askNumbers() ? cout<<"Resultado de operación : "<<n1+n2<<endl : cout<<"Error en la entrada de los numeros"<<endl; break; }
      case '2': { askNumbers() ? cout<<"Resultado de operación : "<<n1-n2<<endl : cout<<"Error en la entrada de los numeros"<<endl; break; }
      case '3': { askNumbers() ? cout<<"Resultado de operación : "<<n1*n2<<endl : cout<<"Error en la entrada de los numeros"<<endl; break; }
      case '4': { askNumbers() ? cout<<"Resultado de operación : "<<n1/n2<<endl : cout<<"Error en la entrada de los numeros"<<endl; break; }
      case '0': { cout<<"Hasta la próxima"<<endl;  break; }
      default: { cout<<"Error: Elige una opción válida."<<endl; break; }
    }
  }
  return 0;
}