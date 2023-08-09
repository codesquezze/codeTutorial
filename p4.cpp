#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
for(int i=1;i<=n;i++){
    int space=n-i;
    while(space--){
        cout<<" ";
    }
    for(int j=1;j<=i;j++){
        cout<<j;
        if(j==i){
            int temp=j;
            while(temp>1)
            cout<<--temp;
        }
    }
    cout<<endl;
}
return 0;
}