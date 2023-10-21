#ifndef SRC_CARRO_HPP_
#define SRC_CARRO_HPP_

#include "../controller/gerenciador.hpp"

class Carro {
   private:
    string id;
    string montadora;
    int cilindradas;

   public:
    Carro();

    Carro(string line);

    string toString();

    bool operator>(const Carro &outroCarro) {
        return montadora > outroCarro.montadora;
    }
    bool operator<(const Carro &outroCarro) {
        return montadora < outroCarro.montadora;
    }
    bool operator==(const Carro &outroCarro) {
        return montadora == outroCarro.montadora;
    }
    bool operator!=(const Carro &outroCarro) {
        return montadora != outroCarro.montadora;
    }
};

#endif /* SRC_CARRO_HPP_ */
