#include<iostream>
using namespace std;

int main() {
int arr[20], n;
cout << "enter the size of the array: ";
cin >> n;
for(int i=0; i<n; i++) {
  cin >> arr[i];
}

cout << "enter the value to be searched: ";
int value;
cin >> value;

bool found = false;
for(int i=0; i<n; i++) {
  if(arr[i] == value) {
    cout << "found at index " << i << endl;
    found = true;
    break;
  }
  //else cout<< "not found"<<endl;//use when you are not using flag
}
if(!found)  //use when you are using flag
{
  cout << "not found" << endl;
}

return 0;
}
