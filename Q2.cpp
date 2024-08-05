#include <bits/stdc++.h>
using namespace std;

int main(){

int n;
cout<<"Enter the value of n: ";
cin>>n;
int arr[100];
int sum=0;
cout<<"Enter the elements: ";
for (int i=0; i<n; i++){
    cin>>arr[i];
    sum+=arr[i];
}
int avg= sum/n;
cout<<"\nThe Average is: ";
cout<<avg;

}
