#include "funcionario.hpp"

Funcionario::Funcionario() {
    this->id = 0;
    this->nome = "";
    this->pais = "";
    this->email = "";
}

Funcionario::Funcionario(string line) {
    string dado;
    stringstream ss(line);  // stringstream => 	<sstream>

    getline(ss, dado, ';');
    this->id = atoi(dado.c_str());

    getline(ss, dado, ';');

    this->nome = (dado);

    getline(ss, dado, ';');
    this->pais = (dado);

    getline(ss, dado, ';');
    this->email = (dado);
}

string Funcionario::toString() {
    stringstream ss;
    ss << "ID: " << id << ",Nome: " << nome << " ,Pais: " << pais
       << ",Email: " << email;
    return ss.str();
}
