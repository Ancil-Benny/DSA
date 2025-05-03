#include <bits/stdc++.h>
using namespace std;

    int main(){
        int number;
        cout<<"enter number: ";
        cin>>number;
        int temp = number;
        int count = to_string(number).length();
        int armstrong=0;

         while(number!=0){
            int digit = number%10;
            armstrong=armstrong+pow(digit, count);
            number/=10;
        }
        if(temp==armstrong)
        cout<<"yes";
        else
        cout<<"no";
        return 0;
}