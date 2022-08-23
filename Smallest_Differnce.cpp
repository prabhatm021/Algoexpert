#include <bits/stdc++.h>
using namespace std;


vector<int> smallestDifference(vector<int> arrayOne, vector<int> arrayTwo) {
  // Write your code here.
  vector<int> Answer;
  int pointer1 = 0;
  int pointer2 = 0;
  sort(arrayOne.begin(), arrayOne.end());
  sort(arrayTwo.begin(), arrayTwo.end());
  int diff = INT_MAX;
  int current_diff = INT_MAX;
  while(pointer1 < arrayOne.size() && pointer2 < arrayTwo.size()){  // checking the arrays until the one of them is completed 
    int firstnum = arrayOne[pointer1];
    int secondnum = arrayTwo[pointer2];
    if(firstnum < secondnum){
      current_diff = secondnum - firstnum;
      pointer1++;
    }
    else if(firstnum > secondnum){ 
      current_diff = firstnum - secondnum;
      pointer2++;
    }
    else{
      return vector<int>{firstnum, secondnum} ;  // return the equal pair(difference is '0')
    }
    if(diff > current_diff){    // updating the least difference
      diff = current_diff;
      Answer = {firstnum, secondnum};
    }
  }
    
  return Answer;
}

