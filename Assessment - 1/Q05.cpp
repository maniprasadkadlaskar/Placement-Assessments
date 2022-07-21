//Print prime numbers between lower and upper bound

#include<iostream>
#include<cmath>

using namespace std;

bool isPrime(int num) {
    for(int i = 2;i <= sqrt(num);i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int lb , ub;

    cout<<"Enter lower and upper bound : ";
    cin>>lb>>ub;

    cout<<"Prime numbers between "<<lb<<" and "<<ub<<" are : ";
    for (int i = lb;i <= ub;i++) {
        if (isPrime (i))
            cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}