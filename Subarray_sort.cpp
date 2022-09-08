#include <bits/stdc++.h>
using namespace std;

vector<int> subarraySort(vector<int> array) {
  // Write your code here.
  int highest_anomaly_element = array[0];
  int highest_anomaly_index;
  int least_anomaly_element = INT_MIN;
  vector<int> Answer;
  vector<int> array_two = array;
  sort(array_two.begin(), array_two.end());
  if(array == array_two){
    return {-1,-1};
  }
  for(int i= 1; i< array.size(); i++){
    if(array[i] < array[i-1] && least_anomaly_element == INT_MIN ){
        least_anomaly_element = array[i];
        highest_anomaly_index = i;
    }
    else if(array[i] < array[i-1] && least_anomaly_element != INT_MIN){
        if(array[i] <= least_anomaly_element){
            least_anomaly_element = array[i];
            highest_anomaly_index = i;
        }
    }
  }
  for(int i =0 ; i< highest_anomaly_index; i++){
    if(array[i] > highest_anomaly_element){
      highest_anomaly_element = array[i];
    }
  }
  for(int i =0; i<array.size(); i++){
    if(array[i] > least_anomaly_element){
        if(i != 0){
            Answer.push_back(i);
            break;
        }
        else{
            Answer.push_back(0);
            break;
        }
    }
  }
  for(int i = array.size()-1; i>0; i--){
    if(array[i] < highest_anomaly_element){
        Answer.push_back(i);
        break;
    }
  }
  return Answer;
}