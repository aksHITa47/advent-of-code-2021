#include<bits/stdc++.h>
using namespace std;

int StringToInt(vector<vector<char>> v, int len){
    string num="";
    
    for(auto i=0; i<1; i++){
        for(int j=0; j<len; j++){
            num+=v[i][j];
        }
    }

    return stoi(num,0,2);
}

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

    auto o2(bin);
    auto co2(bin);
    
    for(auto i=0; i<(length); i++){
        int one=0, zero=0;
        char lf;
        for(auto j=0; j<o2.size(); j++){
            if (o2[j][i]=='0') zero++;
            else one++;
        }
        lf = (one>=zero?'0':'1');
        if(o2.size()>1)
        o2.erase(remove_if(o2.begin(), o2.end(), [i,lf](const vector<char>& v) {return v.size() > 1 && v[i] == lf;}),o2.end());
        else break;
    }

    for(auto i=0; i<(length); i++){
        int one=0, zero=0;
        char lf;
        for(auto j=0; j<co2.size(); j++){
            if (co2[j][i]=='0') zero++;
            else one++;
        }
        lf = (one>=zero?'0':'1');
        if(co2.size()>1)
        co2.erase(remove_if(co2.begin(), co2.end(), [i,lf](const vector<char>& v) {return v.size() > 1 && v[i] != lf;}),co2.end());
        else break;
    }

    cout<<(StringToInt(o2,length))*(StringToInt(co2,length))<<endl;

    return 0;
}