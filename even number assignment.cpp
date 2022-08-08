NAME: OPARE MARTIN OFFEI
ID : 10969079



#include <iostream>

using namespace std;

int main()
{
int i,sum , numberOfeven = 0;

for( i = 1; i < 10000; i++)

if((i % 2) == 0){
    sum = sum + i;
    numberOfeven++;
}
double average = sum/numberOfeven;
cout << "The average of all even numbers between 1 and 10000 = ";
cout << average;

return 0;
}
