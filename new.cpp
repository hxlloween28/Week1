#include<iostream>
using namespace std;

int main(){
cout<<"Hello";
int n;
cin>>n;
int arr[100];
int sum=0;
for (int i=0; i<n; i++){
    cin>>arr[i];
    sum+=arr[i];
}

cout<<sum/n;
}
