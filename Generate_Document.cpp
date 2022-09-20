#include<bits/stdc++.h>
using namespace std;

bool generateDocument(string characters, string document) {
  // Write your code here.
  // if the string sizes are different we can directly say that they are different( if the second string is empty we can directly pass true)
  // checking frequency of both strings based on the first string
  int n = 256;
  vector<int> char_arr(n,0);
  vector<int> doc_arr(n, 0);
  if(characters.size() > document.size()){
    if(document.size() == 0){ 
        return true;
    }
    for(int i =0; i< characters.size() ;i++){
        char_arr[int(characters[i])] +=1;
    }
    for(int i =0 ; i< document.size(); i++){
        doc_arr[int(document[i])] += 1;
    }
    for(int i =0 ; i < n ; i++){
        if(char_arr[i] != doc_arr[i]){
            if(doc_arr[i] > char_arr[i]){
                return false;
            }
        }
    }
  }
  else if(characters.size() < document.size()){
    return false;
  }
  else{
    if(document.size() == 0){
        return true;
    }
    if(characters.size() < document.size()){
        return false;
    }
    for(int i =0; i< characters.size() ;i++){
        char_arr[int(characters[i])] +=1;
    }
    for(int i =0 ; i< document.size(); i++){
        doc_arr[int(document[i])] += 1;
    }
    for(int i =0 ; i < n ; i++){
        if(char_arr[i] != doc_arr[i]){
            if(doc_arr[i] > char_arr[i]){
                return false;
            }
            if(char_arr[i] > doc_arr[i]){
                return false;
            }
        }
    }
  }
  return true;
}

