#include <bits/stdc++.h>
using namespace std;

string Add_Answer(char Alphabet, int count){
  string should_return= "";
  vector<int> intervals;
  if(count <= 9){
    intervals.push_back(count);
  }
  else{
    while(count > 9){
      intervals.push_back(9);
      count = count -9;
    }
    if(count > 0){
      intervals.push_back(count);
    }
  }
  for(int i = 0; i< intervals.size(); i++){
    should_return = should_return + to_string(intervals[i]);
    should_return = should_return + Alphabet;
  }
  return should_return;
}

string runLengthEncoding(string str) {
  // Write your code here.
  int n = 256;
  vector<int> arr(n,0);
  string Answer = "";
  int len = str.size();


  for(int i =0; i<len; i++){
    arr[int(str[i])] += 1;
    if(str[i] != str[i+1]){  
      string exam = Add_Answer(str[i],arr[int(str[i])]);
      Answer = Answer + exam;
      arr[int(str[i])] =0 ;
    }
  }
  
  return Answer;
}
