#include <vector>
#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

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

pair<int, int> menor_diferenca(vector<int> &v){

    vector<int> v2(v);
    pair<int, int> p;
    int tam = size(v2);
    if (tam < 2){
        p = {-1, -1};
        return p;
    }
    int dif;

    sort(v2.begin(), v2.end());

    for (int i = 0; i < tam - 1; i++){
        if ((v2[i+1] - v2[i]) < dif){
            dif = v2[i] - v2[i+1];
            p = {v2[i], v2[i + 1]};
        }
    }

    return p;
}

int main(int argc, char** argv){
    int n = std::atoi(argv[1]);
    int max = std::atoi(argv[2]);
    std::vector<int> v = gerar_vetor_aleatorio(n, 99, max);
    std::vector<int> s = remover_duplicatas(v);

    pair<int, int> res = menor_diferenca(s);

    cout << res.first << " " << res.second << "\n";

    return EXIT_SUCCESS;
}