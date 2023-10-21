#include "functions.hpp"

void lista1() {
    vector<string> arquivo;
    vector<Carro> carros;
    arquivo = GerenciadoDeArquivo::carregaAquivo("arc/lista1.csv");

    for (int i = 0; i < arquivo.size(); i++) {
        Carro novo(arquivo[i]);
        carros.push_back(novo);
    }

    cout << "\n\nLista1.CSV: \n\n" << endl;

    cout << "Antes de ordenar: \n" << endl;

    for (vector<Carro>::iterator pointer = carros.begin();
         pointer != carros.end(); pointer++) {
        cout << pointer->toString() << endl;
    }

    clock_t inicio = clock();

    shellsort<Carro>(carros);

    clock_t fim = clock();

    double duracao = static_cast<double>(fim - inicio) / CLOCKS_PER_SEC;

    cout << "Tempo de execucao: " << duracao << " segundos" << endl;

    cout << "\n\nDepois de ordenar: \n" << endl;

    for (vector<Carro>::iterator pointer = carros.begin();
         pointer != carros.end(); pointer++) {
        cout << pointer->toString() << endl;
    }
}

void lista2() {
    vector<string> arquivo;
    vector<Carro> carros;
    arquivo = GerenciadoDeArquivo::carregaAquivo("arc/lista2.csv");

    for (int i = 0; i < arquivo.size(); i++) {
        Carro novo(arquivo[i]);
        carros.push_back(novo);
    }

    cout << "\n\nLista2.CSV: \n\n" << endl;

    cout << "Antes de ordenar: \n" << endl;

    for (vector<Carro>::iterator pointer = carros.begin();
         pointer != carros.end(); pointer++) {
        cout << pointer->toString() << endl;
    }

    clock_t inicio = clock();

    shellsort<Carro>(carros);

    clock_t fim = clock();

    double duracao = static_cast<double>(fim - inicio) / CLOCKS_PER_SEC;

    cout << "Tempo de execucao: " << duracao << " segundos" << endl;

    cout << "\n\nDepois de ordenar: \n" << endl;

    for (vector<Carro>::iterator pointer = carros.begin();
         pointer != carros.end(); pointer++) {
        cout << pointer->toString() << endl;
    }
}

void lista3() {
    vector<string> arquivo;
    vector<Aluno> alunos;
    arquivo = GerenciadoDeArquivo::carregaAquivo("arc/lista3.csv");

    for (int i = 0; i < arquivo.size(); i++) {
        Aluno novo(arquivo[i], ';');
        alunos.push_back(novo);
    }

    cout << "\n\nLISTA3.CSV: \n\n" << endl;

    cout << "Antes de ordenar: \n" << endl;

    for (vector<Aluno>::iterator pointer = alunos.begin();
         pointer != alunos.end(); pointer++) {
        cout << pointer->toString() << endl;
    }

    clock_t inicio = clock();

    shellsort<Aluno>(alunos);

    clock_t fim = clock();

    double duracao = static_cast<double>(fim - inicio) / CLOCKS_PER_SEC;

    cout << "Tempo de execucao: " << duracao << " segundos" << endl;

    cout << "\n\nDepois de ordenar: \n" << endl;

    for (vector<Aluno>::iterator pointer = alunos.begin();
         pointer != alunos.end(); pointer++) {
        cout << pointer->toString() << endl;
    }
}

void lista1000() {
    vector<string> arquivo;
    vector<Aluno> alunos;
    arquivo = GerenciadoDeArquivo::carregaAquivo("arc/lista1000nomes.csv");

    for (int i = 0; i < arquivo.size(); i++) {
        Aluno novo(arquivo[i], ';');
        alunos.push_back(novo);
    }

    cout << "LISTA1000NOMES.CSV : " << endl;

    cout << "Antes de ordenar: " << endl;

    for (vector<Aluno>::iterator pointer = alunos.begin();
         pointer != alunos.end(); pointer++) {
        cout << pointer->toString() << endl;
    }

    clock_t inicio = clock();

    shellsort<Aluno>(alunos);

    clock_t fim = clock();

    double duracao = static_cast<double>(fim - inicio) / CLOCKS_PER_SEC;

    cout << "Tempo de execucao: " << duracao << " segundos" << endl;

    cout << "\n\nDepois de ordenar: " << endl;

    for (vector<Aluno>::iterator pointer = alunos.begin();
         pointer != alunos.end(); pointer++) {
        cout << pointer->toString() << endl;
    }
}

void dadoscsv() {
    vector<string> arquivo;
    vector<Funcionario> funcionarios;
    arquivo = GerenciadoDeArquivo::carregaAquivo("arc/dados.csv");

    for (int i = 0; i < arquivo.size(); i++) {
        Funcionario novo(arquivo[i]);
        funcionarios.push_back(novo);
    }

    cout << "\n\nDADOS.CSV: \n\n" << endl;

    cout << "Antes de ordenar: \n" << endl;

    for (vector<Funcionario>::iterator pointer = funcionarios.begin();
         pointer != funcionarios.end(); pointer++) {
        cout << pointer->toString() << endl;
    }

    clock_t inicio = clock();

    shellsort<Funcionario>(funcionarios);

    clock_t fim = clock();

    double duracao = static_cast<double>(fim - inicio) / CLOCKS_PER_SEC;

    cout << "Tempo de execucao: " << duracao << " segundos" << endl;

    cout << "\n\nDepois de ordenar: \n" << endl;

    for (vector<Funcionario>::iterator pointer = funcionarios.begin();
         pointer != funcionarios.end(); pointer++) {
        cout << pointer->toString() << endl;
    }
}
