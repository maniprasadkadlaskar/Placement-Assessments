//Print denomination of number

#include<iostream>

using namespace std;

int main() {
    int num;

    cout<<"Enter number : ";
    cin>>num;

    int len = 0;
    int temp = num;

    while (temp > 10) {
        temp /= 10;
        len++;
    }

    cout<<"Result : ";
    cout<<temp;

    while (len--) {
        cout<<0;
    }

    cout<<endl;

    return 0;
}