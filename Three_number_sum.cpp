#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeNumberSum(vector<int> array, int targetSum) {
  // Write your code here.
  vector<vector<int>> Answer;
  sort(array.begin(),array.end());
  for(int i =0; i< array.size()- 2; i++){
    int j = i+1;
    int k = array.size()-1;
    while(j<k){
      vector<int>temp;
      if(array[i] + array[j] + array[k] < targetSum){
        j++;
      }
      else if(array[i] + array[j] + array[k] > targetSum){
        k--;
      }
      else if(array[i] + array[j] + array[k] == targetSum){
        Answer.push_back({array[i],array[j],array[k]});
        j++;
        k--;
      }
    }
  }
  return Answer;
}
