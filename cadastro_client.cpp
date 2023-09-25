#include <iostream>
#include "myLib_client.cpp"

using namespace std;

void cadastrarCliente(){
    cout << endl << "#========== CADASTRO DE CLIENTES ==========#" << endl;
    
    cout << endl << "Digite o codigo ";
    cin >> cliente.codigo;

    cout << endl << "Digite seu nome ";
    cliente.nome = readStr();
    //cin >> cliente.nome;

    cout << endl << "Digite seu CPF ";
    cin >> cliente.CPF;

    cout << endl << "Digite seu RG ";
    cin >> cliente.RG;

    cout << endl << "Digite seu celular ";
    cin >> cliente.celular;

    cout << endl << "Digite seu email ";
    cliente.email = readStr();
    //cin >> cliente.email;

    cout << endl << "Digite seu cep ";
    cin >> cliente.cep;

    cout << endl << "Digite sua rua ";
    cliente.rua = readStr();
    //cin >> cliente.rua;

    cout << endl << "Digite seu bairro ";
    cliente.bairro = readStr();
    //cin >> cliente.bairro;

    cout << endl << "Digite seu estado ";
    cliente.estado = readStr();
    //cin >> cliente.estado;
}

void listarCliente(){
    cout << endl << "Codigo: " << cliente.codigo << endl;
    cout << endl << "Nome Completo: " <<cliente.nome << endl;
    cout << endl << "Cadastro de pessoas fisicas(CPF): " << cliente.CPF << endl;
    cout << endl << "Registro Geral(RG): " << cliente.RG << endl;
    cout << endl << "Telefone: " << cliente.celular << endl;
    cout << endl << "Email: " << cliente.email << endl;
    cout << endl << "Codigo de endereco postal: " << cliente.cep << endl;
    cout << endl << "Endereco (rua): " << cliente.rua << endl;
    cout << endl << "Bairro: " << cliente.bairro << endl;
    cout << endl << "Estado: " << cliente.estado << endl;
}

int main(){
    int opc = 0;
    do{
        cout << endl << "1 - Cadastrar Cliente" << endl;
        cout << "2 - Listar Cliente" << endl;
        cout << "Opcao: ";
        cin >> opc;
        cout << endl;
        switch (opc){
            case 1:
                cadastrarCliente();
                cout << "Cliente cadastrado com sucesso!" << endl;
                break;

            case 2:
                cout << "Listando cliente ... " << endl;
                listarCliente();
                break;
            
            default:
                cout << "Nao existe essa opcao!" << endl;
                break;
        }
    }while(opc != 0);

}
