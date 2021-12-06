#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    vector<int> measurements;
    while(cin>>n){
        measurements.push_back(n);
    }
    vector<int> sum;
    for (auto i = 2; i < measurements.size(); i++)
    {
        sum.push_back(measurements[i]+measurements[i-1]+measurements[i-2]);
    } 
    int increased = 0;
    for(auto i=1; i<sum.size(); i++){
        if(sum[i-1]<sum[i])
            increased++;
    }

    cout<<increased<<endl;

    return 0;
}
