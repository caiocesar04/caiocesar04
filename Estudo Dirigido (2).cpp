#include<iostream>
#include<iomanip>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
cout<<fixed<<setprecision(2);
vector<int> lista;
double media,soma;
string resposta;
int opcao,num,aa; //esse "aa" foi a variavel usada para controlar as repeticoes do while

    //Parte de injecao de numeros na lista

    while(resposta!="s")
    {
    cout<<"Digite o numero"<<endl;
    cin>>num;
    lista.push_back (num);
    cout<<"Quer parar?('s' ou 'n')"<<endl;
    cin>>resposta;
    }
    cout<<endl<<endl;

    //Fim da parte de injecao de numeros na lista

    //Repeticao das escolhas das funcoes

cout<<"Digite a fun�ao"<<endl;
cout<<"0: Sair da aplica��o"<<endl;
cout<<"1: Somar os numeros;"<<endl;
cout<<"2: Calcular a m�dia;"<<endl;
cout<<"3: Calcular m�dia e soma"<<endl;
cout<<"4: Substituir por zero os valores negativos e imprimir a m�dia"<<endl;
cout<<"5: Substituir por zero os valores repetidos e imprimir a m�dia e soma"<<endl;
cout<<"6: mostrar os numeros ordenado"<<endl;
cin>>opcao;

//a partir daqui e um loop infinito de funcoes ate que o usuario digite 0 e acabe o programa

while(opcao!=0)
{

    //Opcao 1

    if(opcao==1||opcao==3)
    {
        aa=0;
        soma=lista[aa];
            while(aa< (lista.size()-1))
            {
            aa=aa+1;
            soma = soma + lista[aa];
            }
    }


    //Opcao 2

    if(opcao==2||opcao==3)
    {
        aa=0;
        media = lista[aa];
            while(aa< (lista.size()-1))
            {
            aa=aa+1;
            media = media + lista[aa];
            }
    media = media / lista.size();
    }

    //A opcao 3 esta fundida com a 2 e a 1 porque e so as 2 juntas.

    //Opcao 4

    if(opcao==4)
        {
    aa=0;
    while (aa<=lista.size())
    {
if(lista[aa]<=0)
{
lista[aa] = 0;
}
    aa=aa+1;
    }
    aa=0;
    cout<<"Lista =";
        while(aa<=lista.size()-1)
        {
        cout<<" ";
        cout<<lista[aa];
        aa=aa+1;
        }
    cout<<endl<<endl;
    aa=0;
    media = lista[aa];
        while(aa< (lista.size()-1))
        {
        aa=aa+1;
        media = media + lista[aa];
        }
    media = media / lista.size();
    cout<<"Media = "<<media<<endl<<endl;
        }

        //opcao 5

    if(opcao==5)
    {
    aa=0;
    sort(lista.begin(),lista.end());
        for(aa=0;aa<=lista.size();aa++)
        {
            if(lista[aa]==lista[aa+1])
            {
            lista[aa]=0;
            }
        }
            aa=0;
        soma=lista[aa];
        while(aa< (lista.size()-1))
        {
        aa=aa+1;
        soma = soma + lista[aa];
        }
        media = soma / lista.size();
    }

    //opcao 6

    if(opcao==6)
    {
         sort(lista.begin(),lista.end());
        aa=0;
    cout<<"Lista =";
    while(aa<=lista.size()-1)
    {
    cout<<" ";
    cout<<lista[aa];
    aa=aa+1;
    }
    cout<<endl<<endl;
    aa=0;
        soma=lista[aa];
        while(aa< (lista.size()-1))
        {
        aa=aa+1;
        soma = soma + lista[aa];
        }
    }

    //aqui comeca a parte de algumas exibicao das lista conforme as modificacoes dos usuarios, somas e medias etc.

if(opcao==1)
{
    aa=0;
    cout<<"Lista =";
    while(aa<=lista.size()-1)
    {
    cout<<" ";
    cout<<lista[aa];
    aa=aa+1;
    }
    cout<<endl<<endl;
cout<<"Soma = "<<soma<<endl<<endl;
}
if(opcao==2)
{
    aa=0;
    cout<<"Lista =";
    while(aa<=lista.size()-1)
    {
    cout<<" ";
    cout<<lista[aa];
    aa=aa+1;
    }
    cout<<endl<<endl;
cout<<"Media = "<<media<<endl<<endl;
}
if(opcao==3)
{
    aa=0;
    cout<<"Lista =";
    while(aa<=lista.size()-1)
    {
    cout<<" ";
    cout<<lista[aa];
    aa=aa+1;
    }
    cout<<endl<<endl;
cout<<"Soma = "<<soma<<endl<<"Media = "<<media<<endl<<"Soma + Media = "<<soma+media<<endl<<endl;
}
if(opcao==5)
{
    aa=0;
    cout<<"Lista =";
        while(aa<=lista.size()-1)
        {
        cout<<" ";
        cout<<lista[aa];
        aa=aa+1;
        }
        cout<<endl;
        cout<<"Soma = "<<soma<<endl;
        cout<<"Media = "<<media<<endl;
        cout<<endl<<endl;


}
cout<<"Digite a fun�ao"<<endl;
cout<<"0: Sair da aplica��o"<<endl;
cout<<"1: Somar os numeros;"<<endl;
cout<<"2: Calcular a m�dia;"<<endl;
cout<<"3: Calcular m�dia e soma"<<endl;
cout<<"4: Substituir por zero os valores negativos e imprimir a m�dia"<<endl;
cout<<"5: Substituir por zero os valores repetidos e imprimir a m�dia e soma"<<endl;
cout<<"6: mostrar os numeros ordenado"<<endl;
cin>>opcao;
}
return 0;
}
