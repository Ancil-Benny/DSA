#include <bits/stdc++.h>
using namespace std;

    int main(){
        int number;
        cout<<"enter number: ";
        cin>>number;
        int reverse=0;

         while(number!=0){
            int digit = number%10;
            reverse=reverse*10+digit;
            number/=10;
        }
        cout<<"sum is: "<<reverse;
        return 0;
}