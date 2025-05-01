#include <bits/stdc++.h>
using namespace std;

    int main(){
        int number;
        cout<<"enter number: ";
        cin>>number;
        int sum = 0;

         while(number!=0){
            int digit = number%10;
            sum+=digit;
            number/=10;
        }
        cout<<"sum is: "<<sum;
        return 0;
}