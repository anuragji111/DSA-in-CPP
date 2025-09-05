//Q.7:- Write a Program in C++ to get the number then reverse the number using Array. 

#include<iostream>
using namespace std;
int main() {
  int arr[5], pos,value, n;
  cout<<"Enter the number  of elements of the array";
  for(int i=0; i<n; i++)
  {
    cin>> arr[i];
  }
  cout<<"enter the position where you want to insert the element";
  cin>> pos;
  cout<<"please enter the value of the element";
  cin>>value;
  for(int i=n; i>pos;  i--){
    arr[i] = arr[i-1];
  }
  arr[pos] = value;
  n++;
  for(int i=0; i<n; i++){ 
    cout<< arr[i]<<" ";
  }
  return 0;
}