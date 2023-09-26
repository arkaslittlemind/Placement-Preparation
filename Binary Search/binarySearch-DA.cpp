#include <iostream>
using namespace std;

//binary search
int binarySearch(int arr[],int key,int size){
int s = 0;
int e = size - 1;
int mid = s + (e - s) / 2;
while(s<=e){
if(arr[mid]==key){
return mid;
}
if(key<arr[mid]){
e = mid - 1;
}
else{
s = mid + 1;
}
mid= s + (e - s) / 2;
}
return -1;
}

int main()
{
int a[14] = {11, 22, 33, 44, 55, 66, 77, 88, 99,
111, 222, 333, 444};
int size = sizeof(a) / sizeof(int);
int b;
cout << "Enter a element to search : " << endl;
cin >> b;
int position;
position = binarySearch(a, b, size);
//cout << position << endl;
if(position != -1){
    if(position < size/2){
        cout << "The element is present in position :" << position+1 << endl;
    }
    else{
    cout << "The element is present in position : " << (position+1) % (size/2) << endl;
    }
}
else{
cout << "The element is not present";
}
return 0;
}