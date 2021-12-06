#include<bits/stdc++.h>
using namespace std;

int main() {
    string dir;
    int x=0; //horizontal position
    int y=0; // depth
    while(getline(cin,dir)){
        string pos = dir.substr(0,dir.find(" "));
        //cout<<pos<<endl;
        int value = stoi(dir.substr(dir.find(" ")+1));
        //cout<<value<<endl;
        if(pos.compare("forward")==0)
            x+=value;
        else if(pos.compare("down")==0)
            y+=value;
        else
            y-=value;
    }
    cout<<(x*y)<<endl;
    return 0;
}
