#include<bits/stdc++.h>
using namespace std;

int main() {
    string dir;
    int x=0; //horizontal position
    int y=0; // depth
    int aim = 0;
    while(getline(cin,dir)){ 
        //cin>>dir => "terminate called after throwing an instance of 'std::invalid_argument'"
        string pos = dir.substr(0,dir.find(" "));
        int value = stoi(dir.substr(dir.find(" ")+1));
        if(pos.compare("forward")==0){
            x+=value;
            y+=(aim*value);
        }
            
        else if(pos.compare("down")==0)
            aim+=value;
        else
            aim-=value;
    }
    cout<<(x*y)<<endl;
    return 0;
}
