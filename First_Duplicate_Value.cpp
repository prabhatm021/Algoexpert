#include <bits/stdc++.h>
using namespace std;

int firstDuplicateValue(vector<int> array){ 
    int n = array.size();
    unordered_map<int, int>counting;
    for(int i =0 ; i<n; i++){
        counting[array[i]]++;
        if(counting[array[i]] >1){
            return array[i];
        }
    }
    return -1; 
}
