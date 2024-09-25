#include <iostream>
#include <vector>
using namespace std;

class Carro{
    
    int id;
    string mar, placa;
    double peso;
    bool sell;
    
    cons(){
        id=0;
        sell=false;
        placa="";
        peso=0;
        
    }
    
    cons(int n, string mar, string placa, int peso){
        this->id=id;
        this->sell=sell;
        this->placa=placa;
        this->peso=peso;
    }
    
    void buy(int id)
    {
        if(this->sell==false)
        {
            sell=true;
            cout<<"\nCarro vendido!";
        }else
        {
            cout<<"\nCarro já vendido!";
        }
    }
};

int main() {
    
    Cons

    return 0;
}
