#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    //no of rows
    for(int i=n;i>=1;i--){
        //no of gaps
        for(int k=n-i;k>0;k--)
        cout<<" ";
        //no of columns or star print
        for(int j=i;j>0;j--){
            cout<<"*";
        }
        cout<<endl;

    }
}