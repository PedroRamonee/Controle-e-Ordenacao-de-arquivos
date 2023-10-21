#ifndef ALUNO_HPP
#define ALUNO_HPP

#include "../controller/gerenciador.hpp"

class Aluno {
   private:
    int matricula;
    string nome;
    string grupo;

   public:
    Aluno();
    Aluno(string arquivo, char demiliter);
    string toString();

    bool operator>(const Aluno &outroAluno) { return nome > outroAluno.nome; }
    bool operator<(const Aluno &outroAluno) { return nome < outroAluno.nome; }
    bool operator==(const Aluno &outroAluno) { return nome == outroAluno.nome; }
    bool operator!=(const Aluno &outroAluno) { return nome != outroAluno.nome; }
};

#endif