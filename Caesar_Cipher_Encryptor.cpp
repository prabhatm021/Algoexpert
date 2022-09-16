#include<bits/stdc++.h>
using namespace std;

string caesarCypherEncryptor(string str, int key) {
  // Write your code here.
  vector<char> Answer;
  int len = str.size();
  key = key % 26;
  int temp;
  for(int i =0 ; i< len; i++){
    temp = int(str[i]) + key;
    if(temp > 122){
      temp = temp -26;
    }
    Answer.push_back(char(temp));
  }


  return string(Answer.begin(), Answer.end());
}