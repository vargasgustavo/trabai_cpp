#include <iostream>
#include "myLib_client.cpp"

using namespace std;

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
    cliente.email = readStr();
    cin >> cliente.email;

    cout << endl << "Digite seu cep ";
    cin >> cliente.cep;

    cout << endl << "Digite sua rua ";
    cliente.rua = readStr();
    cin >> cliente.rua;

    cout << endl << "Digite seu bairro ";
    cliente.bairro = readStr();
    cin >> cliente.bairro;

    cout << endl << "Digite seu estado ";
    cliente.estado = readStr();
    cin >> cliente.estado;
}

void listarCliente(){

}

void apagarCliente(){

}

int main(){
    int opc = 0;

    switch (opc)
    {
    case 1:
        cadastrarCliente();
        cout << "Cliente cadastrado com sucesso!" << endl;
        break;

    case 2:
        cout << "Listando cliente ... " << endl;
        listarCliente();
        break;

    case 3:
        apagarCliente();
        cout << "Cliente deletado com sucesso!" << endl;
        break;
    
    default:
        cout << "Nao existe essa opcao!" << endl;
        cout << "Digite novamente ..." << endl;
        break;
    }

}
