#include<bits/stdc++.h>
using namespace std;

int firstNonRepeatingCharacter(string string) {
  // Write your code here.
  unordered_map<char, int> values;
  for(auto character: string){
    if(values.find(character) == values.end()){
      values[character] = 0;
    }
    values[character]++;
  }
  for(int i =0; i< string.size() ; i++){
    if(values[string[i]] == 1){
      return i;
    }
  }
  return -1;
}
