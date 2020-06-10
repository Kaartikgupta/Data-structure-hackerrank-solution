#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<queue>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    queue<int> q;
    int query;
    cin>>query;
    for(int i=0;i<query;i++){
        int x;
        cin>>x;
        switch(x){
            case 1:
                int val;
                cin>>val;
                q.push(val);
                break;
            case 2:
                q.pop();
                break;
            case 3:
                cout<<q.front()<<endl;
                
                break;

        }
    }
    return 0;
}
