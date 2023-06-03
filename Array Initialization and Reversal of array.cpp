/*Array Initialization and Reversal of array.cpp
By using this code you can reverse the array upto 1000 numbers*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
     int array[1000];
     int n;
     cin>>n;
     
     for(int i=0;i<n;i++){
        cin>>array[i];
     }
     for(int i=n-1;i>=0;i--){
         cout<<array[i];
     }
    return 0;
}

