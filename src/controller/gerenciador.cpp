#include "gerenciador.hpp"

vector<string> GerenciadoDeArquivo::carregaAquivo(string caminho) {
    string line;
    vector<string> linhas;

    ifstream arquivo(caminho.c_str());

    if (arquivo.is_open()) {
        // Busca dados no arquivo.
        getline(arquivo, line);  // descarta rotulo

        while (getline(arquivo, line)) {
            linhas.push_back(line);
        }

    } else {
        std::cerr << "O arquivo n�o p�de ser aberto." << std::endl;
    }
    return linhas;
}

bool GerenciadoDeArquivo::escreveLinhaNoAquivo(string caminho, string line,
                                               bool adicionar) {
    ofstream arquivo;

    if (adicionar == true) {
        arquivo.open(caminho.c_str(), std::ios::app);
    } else if (adicionar == false) {
        arquivo.open(caminho.c_str());
    }

    if (!arquivo.is_open()) {
        std::cerr << "N�o foi poss�vel abrir o arquivo." << std::endl;
        return false;
    }

    arquivo << line << std::endl;

    arquivo.close();
    return true;
}

bool GerenciadoDeArquivo::escreveVetorNoAquivo(string caminho,
                                               vector<string> linhas,
                                               bool adicionar) {
    std::ofstream arquivo;

    if (adicionar == true) {
        arquivo.open(caminho.c_str(), std::ios::app);
    } else if (adicionar == false) {
        arquivo.open(caminho.c_str());
    }

    if (!arquivo.is_open()) {
        std::cerr << "N�o foi poss�vel abrir o arquivo." << std::endl;
        return false;
    }

    for (int i = 0; i < linhas.size(); i++) {
        arquivo << linhas[i] << std::endl;
    }

    arquivo.close();
    return true;
}