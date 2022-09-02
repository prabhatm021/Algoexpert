#include<bits/stdc++.h>
using namespace std;

int longestPeak(vector<int> array) {
  // Write your code here.
  int i=1;
  int peak_len = 0;
  if(array.size() == 0){
    return peak_len;
  }
  while(i< array.size()-1){
    //peak identification 
    bool isPeak = array[i] > array[i-1] && array[i] > array[i+1]
    if (!isPeak){
      i += 1;
      continue;
    }

    int leftIndex = i -2;
    while(leftIndex >= 0 && array[leftIndex] < array[leftIndex + 1]){
      leftIndex -= 1; 
    }

    int rightIndex = i+2;
    cout<<rightIndex << endl;
    while(rightIndex <array.size() && array[rightIndex] < array[rightIndex -1]){
      rightIndex += 1;
    }
    int current_peak_len = rightIndex - leftIndex -1;
    peak_len = max(peak_len, current_peak_len);
    i = rightIndex;
    cout << i << endl;
  }
  return peak_len;
}
