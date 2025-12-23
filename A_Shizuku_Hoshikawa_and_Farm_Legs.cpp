#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        int count  = 0;
       
        for(int i=0; i*4<= n; i++){
            int k = n - i * 4;
            if(k % 2 == 0){
                count++;
            }
        }
        cout<<count<<endl;
    }
}