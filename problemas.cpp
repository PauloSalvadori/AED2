#include <vector>
#include <iostream>
#include <cstdlib>
#include <algorithm>

std::vector<int> gerar_vetor_aleatorio(int n, int seed, int max){
    std::vector<int> v;
    v.reserve(n);
    srand(seed);
    for(int i = 0; i < n; i++){
        v.push_back(rand() % max);
    }
    return v;
}

std::vector<int> remover_duplicatas(std::vector<int> & v){
    std::vector<int> s;

    if (v.size() == 0) return s;

    std::sort(v.begin(), v.end());

    int ult = v[0];
    s.push_back(ult);

    for (int i = 1; i < v.size(); i++){
        if (v[i] != ult){
            s.push_back(v[i]);
            ult = v[i];
        }
    }
    return s;
}

void imprimir_vetor(std::vector<int> & v){
    for (int x : v){
        std::cout << x << ", ";
    }
    std::cout << "\n\n";
}

int main(int argc, char** argv){
    int n = std::atoi(argv[1]);
    int max = std::atoi(argv[2]);
    std::vector<int> v = gerar_vetor_aleatorio(n, 99, max);
    std::vector<int> s = remover_duplicatas(v);
    imprimir_vetor(v);
    imprimir_vetor(s);
    //std::cout << v.size() << " " << s.size() << "\n";

    //std::vector<int> v = {5, 2, 1, 2, 4, 5, 0, 1};
    //std::vector<int> s = remover_duplicatas(v);
    //imprimir_vetor(v);
    //imprimir_vetor(s);
}