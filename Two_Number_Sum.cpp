#include <bits/stdc++.h> 
#include <vector>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
  // Write your code here.
  //sort the array 
  int start = 0; // starting index of array
  int end = array.size() -1 ; // ending index of array
  sort(array.begin(),array.end()); // sorting of the array 
  while(start < end){  // adding elements to check with the targetSum 
    if(array[start] + array[end] < targetSum){  // checking each case 
      start = start + 1;
    }
    if(array[start] + array[end] > targetSum){
      end = end -1 ;
    }
    if(array[start] + array[end] == targetSum){
      return {array[start], array[end]}; // result
    }
  }
  return {}; // if the while loop is skipped we return empty array
}

//Updated the commits
