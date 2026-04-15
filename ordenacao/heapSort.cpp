#include <vector>
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include "utils.h"

using namespace std;

void max_heapify(vector& v, int i, int limite){
    int e = esq(i);
    int d = dir(i);
    int maior;
    if((e < limite) && (v[e] > v[i])){
        maior = e;
    }
    else{
        maior = i;
    }
    if ((d < limite) && (v[d] > v[maior])){
        maior = d;
    }
    if (maior != i){
        trocar(v[i], v[maior]);
        max_heapify(v, maior, limite);
    }
}

void build_max_healp(vector& v){
    const int n = v.size();
    for(int i=n/2; i>=0; i--){
        max_heapify(v, i, n);
    }
}

void heapSort(vector& v){
    build_max_healp(v);

    for(int i=v.size()-1; i > 0; i--){
        trocar(v[0], v[i]);
        max_heapify(v, 0, i);
    }
}