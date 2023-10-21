#ifndef SRC_FUNCIONARIO_HPP_
#define SRC_FUNCIONARIO_HPP_

#include "../controller/gerenciador.hpp"

class Funcionario {
   private:
    int id;
    string nome;
    string pais;
    string email;

   public:
    Funcionario();
    Funcionario(string line);
    string toString();

    bool operator>(const Funcionario &outro) { return nome > outro.nome; }
    bool operator<(const Funcionario &outro) { return nome < outro.nome; }
    bool operator==(const Funcionario &outro) { return nome == outro.nome; }
    bool operator!=(const Funcionario &outro) { return nome != outro.nome; }
};

#endif /* SRC_FUNCIONARIO_HPP_ */
