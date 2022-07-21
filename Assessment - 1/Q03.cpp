//Number of digits in a number

#include<iostream>

using namespace std;

int main() {
    int num;

    cout<<"Enter number : ";
    cin>>num;

    int len = 0;

    while (num > 0) {
        num /= 10;
        len++;
    }

    cout<<"Number of digits in a number : "<<len<<endl;

    return 0;
}