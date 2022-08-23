#include<bits/stdc++.h>
using namespace std;


vector<int> moveElementToEnd(vector <int> array, int toMove){
    vector<int>Answer;
    int noOfTimes = 0;
    for(int i = 0; i< array.size(); i++){ // checking the element how many times it is repeated 
        if(array[i] == toMove){
            noOfTimes++;
        }
    }
    for(int i=0 ; i<array.size(); i++){  // pushing the remaining elements to the Answer
        if(array[i] != toMove){
            Answer.push_back(array[i]);
        }
    }
    for(int i= 0; i<noOfTimes; i++){    // pushing the repeated elements how many times they are repeated
        Answer.push_back(toMove);
    }

    return Answer;
}