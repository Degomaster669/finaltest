/**
 * @file 13.cpp
 * @brief Write a function moveZ() that accepts an array of int and size of the array and 
 *          moves all zeros to the end of the array while maintaining the relative order 
 *          of the non-zero elements of the array. 
 * 	        (25 pts)
 */
#include <iostream>
using namespace std;
void displayArray(int array[], int size);
void moveZ(int array[], int size);
int main()
{
    int array[9]={0,1,44,0,0,46,0,7,-3};
    displayArray(array, 9);
    moveZ(array, 9);
    displayArray(array, 9);//{1,44,46,7,-3,0,0,0,0}
    return 0;
}
void moveZ(int array[], int size) {
    int index = 0;
     for (int i = 0; i < size; i++) {
        if (array[i] != 0) {
            array[index]=array[i];
            index++;
        }
    }
    for (int i = index; i < size; i++) {
        array[i]=0;
    }
}
/**
 * @brief This function displays the array of int (need for testing)
 * 
 * @param array 
 * @param size 
 */
void displayArray(int array[], int size)
{
    for (int i = 0; i < size; i ++)
    {
        cout << array[i]<< " ";
    }
    cout <<endl;
}