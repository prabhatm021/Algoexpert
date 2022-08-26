#include<bits/stdc++.h>
using namespace std;

bool break_the_direction(int direction, int number_one, int number_two){
    int difference = number_two - number_one;
    if(direction > 0){
        return difference < 0;
    }
    return difference > 0;
}
bool isMonotonic(vector<int> array) {
  // Write your code here.
  if(array.size() <= 2){
    return true;
  }
  int direction = array[1] - array[0];
  for(int i = 2; i< array.size(); i++){
    if(direction == 0){
        direction = array[i] - array[i-1];
        continue;
    }
    if(break_the_direction(direction,array[i-1],array[i])){
        return false;
    }
  }
  return true;
}
