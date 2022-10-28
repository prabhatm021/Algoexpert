#include <bits/stdc++.h>
using namespace std;

vector<char> minimumCharactersForWords(vector<string> words) {
  // Write your code here.
  int n = 256;
  vector<char> letters;
  vector<int> temp(n,0);
  vector<int> perm(n,0);
  for(int i=0; i< words.size(); i++){
    string temp_string = words[i];
    cout<< temp_string << endl;
    for(int j = 0; j < temp_string.size(); j++){
        temp[int(temp_string[j])] = temp[int(temp_string[j])] + 1;
    }
    for(int k = 0; k < n ; k++){
      if(temp[k] >= perm[k]){
        perm[k] = temp[k];
      }
      temp[k] = 0;
    }
  }
  for(int i = 0; i< n ; i++){
    if(perm[i] != 0){
      for(int j = 0; j < perm[i];j++){
        letters.push_back(char(i));
      }
    }
  }
  
  return letters;
}