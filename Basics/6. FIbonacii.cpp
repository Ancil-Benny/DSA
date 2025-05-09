#include<bits/stdc++.h>
using namespace std;

    int main(){
        int first = 0, second = 1;
        int limit;
        cin>>limit;

        while(first<=limit){
            cout<<first<<" ";
            int next = first + second;
            first = second;
            second = next;
            }
            
    return 0;
}