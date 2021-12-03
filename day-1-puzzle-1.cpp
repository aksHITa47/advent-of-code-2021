#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int temp = 0;
    int count = -1;
    int increased = -1;
    while(cin>>n){
        int temp = n;
        if(n>increased){
            count++;
        }
        increased = n;
    }
    cout<<count<<endl;
    return 0;
}
