#include <iostream>

using namespace std;


int fatorial(int n){

    if((n==1) || (n==0)){
        return 1;               
    }else{
      return fatorial(n-1)*n;
    }
}

void calcularFatorial(){

    int nro;
    cin>>nro;
    
    cout<< fatorial(nro) <<endl;

}

int main(){

    calcularFatorial();   
    return 0;                     
}