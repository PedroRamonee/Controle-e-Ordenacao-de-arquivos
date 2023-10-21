#ifndef SRC_GERENCIADOR_HPP_
#define SRC_GERENCIADOR_HPP_

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using std::stringstream;
using namespace std;

class GerenciadoDeArquivo {
   public:
    static vector<string> carregaAquivo(string caminho);

    static bool escreveLinhaNoAquivo(string caminho, string line,
                                     bool adicionar);

    static bool escreveVetorNoAquivo(string caminho, vector<string> linhas,
                                     bool adicionar);
};

#endif /* SRC_GERENCIADOR_HPP_ */
