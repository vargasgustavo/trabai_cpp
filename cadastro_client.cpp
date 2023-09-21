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
    cout << "Codigo: " << cliente.codigo << endl;
    cout << "Nome Completo" <<cliente.nome << endl;
    cout << "Cadastro de pessoas fisicas(CPF)" << cliente.CPF << endl;
    cout << "Registro Geral(RG)" << cliente.RG << endl;
    cout << "Telefone" << cliente.celular << endl;
    cout << "Email" << cliente.email << endl;
    cout << "Codigo de endereco postal" << cliente.cep << endl;
    cout << "Endereço (rua)" << cliente.rua << endl;
    cout << "Bairro" << cliente.bairro << endl;
    cout << "Estado" << cliente.estado << endl;
}

void apagarCliente(){
    int codigoCliente;
    bool clienteEncontrado = false;

    cout << "Digite o código do cliente que deseja apagar: ";
    cin >> codigoCliente;

    // Percorra a lista de clientes (ou o local onde você armazena os dados dos clientes)
    // e verifique se o cliente com o código fornecido existe.
    // Se encontrado, remova-o da lista.

    // Exemplo hipotético:
    if (!clienteEncontrado) {
        cout << "Cliente não encontrado." << endl;
    }
}

int main(){
    int opc = 1;
        cout << endl << "1 - Cadastrar Cliente" << endl;
        cout << "2 - Listar Cliente" << endl;
        cout << "3 - Deletar Cliente" << endl;
    while(opc != 0){
        switch (opc){
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

}
