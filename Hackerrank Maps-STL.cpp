#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int no, type,value;
    string key;
  map<string,int>m;
    cin>>no;
    while(no>0){
        cin>>type>>key;
       // cin>>value;
        if(type==1){
            cin>>value;
            m[key]+=value;
           //  m.insert(make_pair(key,value));
            }
        if(type==2){
            m.erase(key);
        }
        if(type==3){
           map<string,int>::iterator itr=m.find(key);
            if(itr==m.end())
            cout<<"0"<<endl;
            else
            cout<<m[key]<<endl;
            }
            no--;
    };
    
    return 0;
}


