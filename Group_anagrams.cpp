#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string> words) {
  // Write your code here.
  vector<vector<string>>Answer;
  unordered_map<string,vector<string>> check_anagrams;
  for(auto word : words){
    string sortedWord = word;
    sort(sortedWord.begin(),sortedWord.end());

    if(check_anagrams.find(sortedWord) != check_anagrams.end()){
      check_anagrams[sortedWord].push_back(word);
    }
    else{
      check_anagrams[sortedWord] = vector<string>{word};
    }
  }

  for(auto it : check_anagrams){
    Answer.push_back(it.second);
  }

  return Answer;
}
