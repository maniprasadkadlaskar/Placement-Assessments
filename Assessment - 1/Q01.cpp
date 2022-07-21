//Incrementing every digit of a number

#include<iostream>

using namespace std;

int main() {
    string num;

    cout<<"Enter number : ";
    cin>>num;

    cout<<"Result : ";
    for (char i : num)
        if (i == '9')
            cout<<'0';
        else 
            cout<<(i + 1 - '0');
    cout<<endl;

    return 0;
}