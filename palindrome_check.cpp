#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str) {
  // Write your code here.
  string check_string = str;
  int len_of_string = str.size();
  for(int i = 0,j = len_of_string-1; i< len_of_string && j > 0; i++, j-- ){
    if(str[i] == check_string[j]){
        continue;
    }
    else{
        return false;
    }
  }
  return true;
}
