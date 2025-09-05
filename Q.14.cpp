// Q.42 - Write a program in C++ to Merge Operation in an Array:-

#include<iostream>
using namespace std;

int main(){
    int array1[]= {9,8,4,1,5};
    int array2[]= {2,0,3,6};
    int size1 = sizeof(array1)/sizeof(array1[0]);
    int size2 = sizeof(array2)/sizeof(array2[0]);

    int mergedArray[size1 + size2];

    // Copy elements of array1
    for(int i = 0; i < size1; i++) {
        mergedArray[i] = array1[i];
    }
    // Copy elements of array2
    for(int i = 0; i < size2; i++) {
        mergedArray[size1 + i] = array2[i];
    }

    cout << "Merged Array: ";
    for(int i = 0; i < size1 + size2; i++) {
        cout << mergedArray[i] << " ";
    }
    cout << endl;

    return 0;
}