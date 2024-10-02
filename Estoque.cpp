#include <iostream>
#include <vector>
using namespace std;

class Carro
{

    public:
    int id;
    string mod;
    double preco;
    bool sell;
    
    Carro()
    {
        id=-1;
        mod="";       
        preco=0;        
        sell=false;
        
    }
    
    Carro(int id, string mod, double preco)
    {
        this->id=id; 
        this->mod=mod;   
        this->preco=preco;
        this->sell=false;
    }
    
    void buy()
    {           
        char SN;
        if(!sell)cout<<"\nCarro Disponível!"; else cout<<"\nCarro já vendido!";
        if(!sell)
        {
            cout<<"\n O carro será comprado agora?(S ou N): "; cin>>SN;
            sell = (SN=='S' || SN=='s')?true:false;
        }
        cout<<"\nOperação processada. ";        
    }

};

vector<Carro> est;

int main() 
{
    setlocale(LC_ALL, "portuguese");
    int n;
    cout<<"Armazenamento simples para carros, insira os dados dos carros antes de começar.";
    cout<<"\nHá quantos carros no estoque?: "; cin>> n;

    for(int i=0; i<n; i++)
    {

        string m;
        double price;
        cout<<"\nInsira o modelo do carro "<<i+1<<": "; cin >> m;
        cout<<"Insira o preço do carro "<<i+1<<": "; cin>>price;

        est.push_back(Carro(i+1, m ,price));
    }
    cout<<"\nDados preenchidos.";
    while(true)
    {
        int id;
        cout<<"\nInsira o id do carro a ser comprado (id: 1-N): "; cin>>id;
        est[id-1].buy();
        int fV=0;

        
        for(Carro i: est) if(i.sell==0)fV++;
        if(fV==0)break;
        cout<< "Faltam vender "<<fV<<" carros.";
    }
    cout <<"\nNão há mais carros no estoque! Finalizando programa...";
    return 0;
}
