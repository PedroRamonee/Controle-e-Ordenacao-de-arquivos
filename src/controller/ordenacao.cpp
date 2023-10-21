#include "gerenciador.hpp"

template <typename T>
void quicksort(std::vector<T> &X, int IniVet, int FimVet) {
    int i, j;
    T aux, pivo;

    if (IniVet < FimVet) {
        pivo = X[(IniVet + FimVet) / 2];
        i = IniVet;
        j = FimVet;

        while (i <= j) {
            while (X[i] < pivo) {
                i++;
            }
            while (X[j] > pivo) {
                j--;
            }
            if (i <= j) {
                aux = X[i];
                X[i] = X[j];
                X[j] = aux;
                i++;
                j--;
            }
        }

        quicksort<T>(X, IniVet, j);
        quicksort<T>(X, i, FimVet);
    }
}

template <typename T>
void quicksort(std::vector<T> &v) {
    quicksort<T>(v, 0, v.size() - 1);
}

template <typename T>
void shellsort(std::vector<T> &v) {
    int h = 1;
    int i, j;
    int rep = 0;

    while (h < v.size()) {
        h = h * 3 + 1;
    }

    while (h > 1) {
        h /= 3;

        for (i = h; i < v.size(); i++) {
            T aux = v[i];
            j = i;

            while (j >= h && aux < v[j - h]) {
                v[j] = v[j - h];
                j -= h;
                rep++;
            }

            v[j] = aux;
        }
    }
}