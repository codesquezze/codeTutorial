#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j;
        }
        int star=2*(i-1);
        while(star--){
            cout<<"*";
        }
        int value=n-i+1;
            for(int j=1;j<=n-i+1;j++){
               cout<<value--;
            }
        
        cout<<endl;
        cout<<"Modified";
    }

        return 0;
}