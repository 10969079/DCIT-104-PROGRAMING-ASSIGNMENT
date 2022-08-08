NAME: OPARE MARTIN OFFEI
ID : 10969079



#include <iostream>

using namespace std;

int main()
{
    int i,num,numPrime, sum_of_prime=0;
    int givenValue;
            cout <<"Please Enter given value:";
            cin>>givenValue;

            cout <<"Sum of Prime numbers less " <<givenValue; cout<< " = ";

            for(num=1; num<givenValue; num++){
                numPrime=0;
                for(i=2; i<=num/2; i++){
                    if(num%i==0){
                        numPrime++;
                    }
                }
                if(numPrime==0 && num !=1){
                    sum_of_prime+=num;
                }
            }
            cout<<sum_of_prime;

        }
