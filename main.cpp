/**
 * @file 4.cpp
 * @brief Read nine integer values from input and display them in reverse order.
 *        The solution should be written in main function.
 * 	      (10 pts) 
 */
#include <iostream>
using namespace std;
int main(){
    int array[9];
    for(int i = 0; i < 9; i++) {
        cin>>array[i];
    }
    int start = 0;
    int end = 8;
    while(start<end) {
        int temp = array[start];
        array[start]=array[end];
        array[end]=temp;
        start++;
        end--;
    }
    for (int i = 0; i < 9; i++) {
    cout<<array[i]<<endl;
    }
    return 0;
}