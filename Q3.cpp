#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cout<<"Enter a String: ";
    cin>>str;

    int i=0; 
    int j=str.size()-1;
    while(i<=j){
        swap(str[i], str[j]);
        i++;
        j--;
    }
    cout<<"Reversed String: ";
    cout<<str;
}