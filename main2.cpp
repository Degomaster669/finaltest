#include <iostream>

using namespace std;

const int NUM_ROW = 3;
const int NUM_COL = 3;
void intializeArray(string array[][NUM_COL]);
void displayArray(string array[][NUM_COL]);
int main(){
  string board[NUM_ROW][NUM_COL];
  intializeArray(board);
  displayArray(board);
  return 0;
}
void intializeArray(string array[][NUM_COL]) {
for (int i =0; i<NUM_ROW;++i){
    for(int j = 0; j<NUM_COL;++j) {
      array[i][j]={" *"};
    }
  }
}
void displayArray(string array[][NUM_COL]) {
  for (int i =0; i<NUM_ROW;++i){
    for(int j = 0; j<NUM_COL;++j) {
      cout<<array[i][j];
    }
    cout<<endl;
  }
}