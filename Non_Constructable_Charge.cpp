#include <vector>
using namespace std;

int nonConstructibleChange(vector<int> coins) {
  // Write your code here.
  int i = 0;
  int change;
  sort(coins.begin(), coins.end());
  if(coins.size() == 0){
    return 1;
  }
  else if(coins[i] != 1){
    return 1;
  }
  else{
    change = coins[0];
    for(int j = 1;j < coins.size(); j++){
      if(change == coins[j]){
        change = change + coins[j];
      }
      else if(change+1 == coins[j]){
        change = change + coins[j];
      }
      else if(change > coins[j]){
        change = change + coins[j];
      }
      else if(change+1 < coins[j]){
        break;
      }
    }
    return change+1;
  }
}
