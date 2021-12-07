#include<bits/stdc++.h>
using namespace std;

int main() {
    string line;
    int length;
    ifstream input ("input.txt");
    vector<vector<char>> bin;
    while(getline(input,line)){
        vector<char> row;
        for(char &c:line){
            row.push_back(c);
        }
        length=row.size();
        bin.push_back(row);
    }
    
    int highest=INT_MIN;
    string g;
    for(auto i=0; i<length; i++){
        int low=0, high=0;
        for(auto j=0;j<bin.size(); j++){
            if(bin[j][i]=='0'){
                ++low;
            }
            else ++high;
        }
        highest = max(low, high);
        g[i]=(highest==low?'0':'1');
    }
    string e;
    for(int i=0; i<length;i++){
        if(g[i]=='0') e[i]='1';
        else e[i]='0';
    }

    int gamma = stoi(g,0,2);
    int epsilon = stoi(e,0,2);

    cout<<(gamma*epsilon)<<endl;

    return 0;
}
