#ifndef _MYLIB_CPP_

#define _MYLIB_CPP_

#include <iostream>
#include <string>

using namespace std;

string readStr(){
    string text;
    getline(cin, text);
    if (text[0] == '\0')
        getline(cin, text);
    return text;
}

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

#endif
