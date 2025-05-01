#include <bits/stdc++.h>
using namespace std;

    bool is_prime(int number){
        if(number<2)
        return false;
        else if(number==2)
        return true;
        else{
            for(int i = 3; i<=sqrt(number);i+=2){
                if(number%i==0)
                return false;
            }
            return true;
        }
    }
    int main(){
        int number;
        cout<<"enter number: ";
        cin>>number;
        if(is_prime(number))
        cout<<"Number "<<number<<" is prime";
        else
        cout<<"Number "<<number<<" is not prime";

        return 0;
}