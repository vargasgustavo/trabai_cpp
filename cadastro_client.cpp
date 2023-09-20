#include <iostream>
#include "myLib_client.cpp"

using namespace std;

typedef struct{
    int codigo,
    celular,
    cep,
    CPF,
    RG;
    string bairro,
    rua,
    nome,
    email,
    estado;

} cadastro;

cadastro cliente;

void cadastrarCliente(){

    cout << endl << "#========== CADASTRO DE CLIENTES ==========#" << endl;
    
    cout << endl << "Digite o codigo ";
    cin >> cliente.codigo;

    cout << endl << "Digite seu nome ";
    cliente.nome = readStr();
    cin >> cliente.nome;

    cout << endl << "Digite seu CPF ";
    cin >> cliente.CPF;

    cout << endl << "Digite seu RG ";
    cin >> cliente.RG;

    cout << endl << "Digite seu celular ";
    cin >> cliente.celular;

    cout << endl << "Digite seu email ";
    cin >> cliente.email;

    cout << endl << "Digite seu cep ";
    cin >> cliente.cep;

    cout << endl << "Digite sua rua ";
    cin >> cliente.rua;

    cout << endl << "Digite seu bairro ";
    cin >> cliente.bairro;

    cout << endl << "Digite seu estado ";
    cin >> cliente.estado;

}

void listarCliente(){

}

void apagarCliente(){

}

int main(){
    
}