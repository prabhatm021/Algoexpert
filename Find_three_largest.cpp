#include<bits/stdc++.h>
using namespace std;

vector<int> findThreeLargestNumbers(vector<int> array) {
  // Write your code here.
  vector<int> answer = {INT_MIN,INT_MIN,INT_MIN};
  for(int i =0; i < array.size() ; i++){
    if(array[i] > answer[2]){
      answer[0] = answer[1];
      answer[1] = answer[2];
      answer[2] = array[i];
    }
    else if(array[i] > answer[1]){
      answer[0] = answer[1];
      answer[1] = array[i];
    }

    else if(array[i] > answer[0]){
      answer[0] = array[i];
    }
    
  }

  return answer;
}
