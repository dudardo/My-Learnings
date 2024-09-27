#include <iostream>
#include <vector>
using namespace std;

//Classe Carro
//Terminar metodo main usando os construtores e metodo de venda.
class Carro{

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
    
    void buy(int id)
    {
        char SN;
        cout<<(!sell)?"\nCarro Disponível!":"\nCarro já vendido!";
        cout<<"\n O carro já foi vendido?"; cin>>SN;
        sell=(SN=='S'||SN=='s') ? true : false;
        
    }
};

vector<Carro> est;

int main() 
{
    setlocale(LC_ALL, "portuguese");
    int n;
    cout<<"Armazenamento simples para carros, insira os dados dos carros antes de começar.";
    cout<<"\nHá quantos carros no estoque?(id: 1-N) "; cin>> n;

    for(int i=0; i<n; i++)
    {

        string m;
        double price;
        cout<<"\nInsira o modelo do carro "<<i+1<<": "; cin >> m;
        cout<<"Insira o preço do carro "<<i+1<<": "; cin>>price;

        est.push_back(Carro(i+1, m ,price));
    }
    cout<<"Dados preenchidos.";
    while(bool v=1)
    {
        est.buy(4);//ERRO CRITICO, termina outro dia
    }

    return 0;
}
