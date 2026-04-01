#include <vector>
#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

void merge(vector<int>& v, int p, int q, int r){
    int n1 = q-p+1;
    vector<int> E;
    E.reserve(n1);

    int n2 = r-q;
    vector<int> D;
    D.reserve(n2);

    for(int i = p; i <= q; i++)
        E.push_back(v[i]);

    for(int i = q+1; i <= r; i++)
        D.push_back(v[i]);

    int k = p, i = 0, j = 0;

    while((i < n1) && (j < n2)){
        if(E[i] < D[j]){
            v[k] = E[i];
            i++;
        }
        else{
            v[k] = D[j];
            j++;
        }
        k++;
    }

    while(i < n1){
        v[k] = E[i];
        i++;
        k++;
    }
    while(j < n2){
        v[k] + D[j];
        j++;
        k++;
    }
}