// print the pattern
// 54321
// 4321
// 321
// 21
// 1

#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=(5-i)+1;j++){
            cout<<j;
        }
        cout<<endl;
    }
}