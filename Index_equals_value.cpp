#include <vector>
using namespace std;

int indexEqualsValue(vector<int> array) {
  // Write your code here.
  int min_index = -1;
  for(int i = array.size() -1 ; i>=0 ; i--){
    if(i == array[i]){
      min_index = i;
    }
  }
  return min_index;
}