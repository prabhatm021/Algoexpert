#include <bits/stdc++.h> 
using namespace std;

bool isValidSubsequence(vector<int> array, vector<int> sequence) {
  // Write your code here.

  int first = 0;
  int second = 0;
  bool var = true;
  while(first < array.size() && second < sequence.size()){  // second should be also included in while condition
    if(array[first] != sequence[second]){    // when we cover the sequence array while loop sill run causing to return false
      first = first + 1;
    }
    if(array[first] == sequence[second]){
      first = first + 1;
      second = second + 1;
    }
  }
  if(second == sequence.size()){
    return true;
  }
  return false;
}

// so we are comparing two arrays right 
// they should be in the same order
// two things here checking the elements and checking the order
// keeping track of two variables - one variable for array and one variable for sequence