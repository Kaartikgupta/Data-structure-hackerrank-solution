#include <cmath>
#include <cstdio>
#include <vector>
#include<string>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {   
    int n;
    stack<string> s;
    cin>>n;
    string st;
    while(n>0){
        int query;
        cin>>query;
        string val;
        switch(query){
            case 1:
                
                cin>>val;
                s.push(st);
                st+=val;
                break;
            case 2:
                int del;
                cin>>del;
                s.push(st);
                st.erase(st.size()-del);
                break;
            case 3:
                int pri;
                cin>>pri;
                cout<<st[pri-1]<<endl;
                break;
            case 4:
            
                st = s.top();  
                s.pop();
                break;
            }
            n--;
        }
    return 0;
}
