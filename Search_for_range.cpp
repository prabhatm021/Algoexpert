#include <vector>
using namespace std;

vector<int> searchForRange(vector<int> array, int target) {
  // Write your code here.
  int firsttime = -1;
  int secondtime = -1;
  
  for(int i = 0 ; i  < array.size() ; i++){
    if(array[i] == target){
      firsttime = i;
      break;
    }
  }

  for(int i = array.size()-1; i>=0; i--){
    if(array[i] == target){
      secondtime = i;
      break;
    }
  }
  return {firsttime,secondtime};
}