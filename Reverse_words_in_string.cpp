#include<bits/stdc++.h>
using namespace std;

string reverseWordsInString(string str) {
  // Write your code here.
  string answer;
  vector<string> words;
  string temp = "";
  if(str.size() == 1 || str.size() ==0){
    return str;
  }
  for(int i =0; i< str.size() +1; i++){
    if(str[i] == ' ' || i == str.size()){
      words.push_back(" ");
      words.push_back(temp);
      temp = "";
    }
    else{
      temp = temp + str[i];
    }
  }
  for(int i = words.size()- 1 ; i > 0 ; i--){
    answer = answer + words[i];
  }
  return answer;
}