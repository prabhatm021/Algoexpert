#include <bits/stdc++.h>
using namespace std;

string longestSubstringWithoutDuplication(string str) {
  // Write your code here.
  string answer;
  vector<int> longestStringIndexes{0,1};
  unordered_map<char,int> lettersSeen;
  int startIdx = 0;
  for(int i =0; i< str.size() ; i++){
    char character = str[i];
    if(lettersSeen.find(character) != lettersSeen.end()){
        startIdx = max(startIdx, lettersSeen[character] + 1);
    }

    // above is to show the starting point of next longest 

    if(longestStringIndexes[1] -longestStringIndexes[0] < i + 1 - startIdx){
        longestStringIndexes = {startIdx, i+1} ;
    }

    // storing the longest until now ( longest..[2] - longest..[1] -> u will get string length)
    // i +  1 is to get the string length, actual Idx is i and startIdx is start Idx

    lettersSeen[character] = i;
  }

  answer = str.substr(longestStringIndexes[0], longestStringIndexes[1] - longestStringIndexes[0]);
  return answer;
}
