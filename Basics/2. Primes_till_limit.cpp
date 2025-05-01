#include <bits/stdc++.h>
using namespace std;

//siege of eratosthene
    vector<bool> prime_function(int number){
        vector<bool> primes(number+1, true);
        primes[0]=false;
        primes[1]=false;
        for(int i = 2;i*1<number;i++){
            //go after multiples of i if i is prime
            if(primes[i]){
                for(int j = i*i;j<=number;j+=i){
                    primes[j]=false;
                }
            }
        }
        return primes;

    }
    int main(){
        int number;
        cout<<"enter number: ";
        cin>>number;
        vector<bool>primes = prime_function(number);

        for(int i = 2;i<primes.size();i++){
            if(primes[i])
            cout<<i<<" ";
        }
        return 0;
}