#include<bits/stdc++.h>
#include<deque>
using namespace std;

int main(){
    deque<int> d;

    d.push_back(2);
    d.push_front(1);

    for (auto it :d){
        cout<<it<<" ";
    }
    d.pop_back();
    return 0;
}