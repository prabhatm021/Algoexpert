#include<bits/stdc++.h>
using namespace std;

vector<int> sortedSquaredArray(vector<int> array) {
  // Write your code here.
  vector<int> new_array;
  int temp;
  for(int i =0; i< array.size(); i++){
    /*
    new_array[i] =array[i] * array[i];
    */
    new_array.push_back(array[i] * array[i]);
  }
  sort(new_array.begin(), new_array.end());
  return new_array;
}