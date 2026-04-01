#include <vector>
#include <iostream>
#include <cstdlib>
#include <algorithm>

int maior_pos(const std::vector<int> & v, int ini, int fim){
    int maior = ini;
    for(int i = ini + 1; i <= fim; i++){
        if(v[i] > v[maior]){
            maior = i;
        }
    }
    return maior;
}

void selectionSort(const std::vector<int> & v){
    for(int i = v.size()-1; i > 0; i--){
        int omaior = maior_pos(v, 0, i);
        trocar()
    }
}