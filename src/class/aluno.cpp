#include "aluno.hpp"

Aluno::Aluno() {
    this->matricula = 0;
    this->grupo = "";
    this->nome = "";
}

Aluno::Aluno(string arquivo, char demiliter = ';') {
    string dado;
    stringstream ss(arquivo);  // stringstream => 	<sstream>

    getline(ss, dado, demiliter);
    matricula = atoi(dado.c_str());

    getline(ss, dado, demiliter);
    nome = (dado);

    getline(ss, dado, demiliter);
    grupo = (dado);
}

string Aluno::toString() {
    stringstream ss;
    ss << "Matricula: " << matricula << ", Nome: " << nome
       << ", Grupo: " << grupo;
    return ss.str();
}
