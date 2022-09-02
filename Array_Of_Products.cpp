#include<bits/stdc++.h>
using namespace std;

vector<int> arrayOfProducts(vector<int> array) {
  // Write your code here.
  int i =0;
  vector<int> Answer; 
  while(i < array.size()){
    int temp_variable = i;
    int j = 0;
    int product_variable = 1;
    while(j < array.size()){
      if(j != temp_variable){
        product_variable = product_variable * array[j];
      }
      j++;
    }
    Answer.push_back(product_variable);
    i++;
  }
  return Answer;
}
