#include<iostream>

using namespace std;

void selecionaCalcular(){
    double n1, n2;
    char op;
    cin>>n1>>op>>n2;

     if(op=='+'){
            cout<<"calcularSoma(n1,n2)"<<endl;
    }else{  if(op=='-'){
                    cout<<"calcularSubt(n1,n2)"<<endl;
            }else{  if(op=='*'){
                            cout<<"calcularMult(n1,n2)"<<endl;
                    }else{  if(op=='/'){
                                cout<<"calcularDiv(n1,n2)"<<endl;
                            }else{
                                cout<<"operador invalido!"<<endl<<endl;
                            }
                    }
            }
    }
}

int main(){

    //testar funcao
    selecionaCalcular();
}