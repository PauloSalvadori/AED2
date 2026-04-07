#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void partition(vector<int> & v, int p, int r){
    int i = p-1;
    int x = v[r];

    for(int j = p, j < r-1, j++){
        if(v[j] < x){
            i++;
            trocar(v, i, j);
        }
    }
    trocar(v, i+1, r);
}