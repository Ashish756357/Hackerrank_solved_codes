// This code will help in geting the sum of fist 10 natural numbers
#include<iostream>
using namespace std;

int main(){
    int store = 0;
    for(int i=1;i<=10;i++){
        store +=i;
    }
    cout<<store<<endl;
    return 0;
}
/* If you want to print the sum of n nuumbers then just replace 10 
with a variable n which will take input from the user*/
#include<iostream>
using namespace std;

int main(){
    int store = 0;
    int n;
    cout<<"Enter the natural number till where you want to print the sum: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        store +=i;
    }
    cout<<store<<endl;
    return 0;
}

