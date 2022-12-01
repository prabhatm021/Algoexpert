#include <vector>
using namespace std;

vector<int> searchInSortedMatrix(vector<vector<int>> matrix, int target) {
  // Write your code here
  int row = 0;
  int col = matrix[0].size() -1;

  while(row < matrix.size() && col >= 0){
    if(target > matrix[row][col]){
      row++;
    }
    else if(target < matrix[row][col]){
      col--;
    }
    else{
      return {row,col};
    } 
  }
  return {-1,-1};
}
