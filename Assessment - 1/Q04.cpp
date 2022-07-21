//Print pattern

/*  1
    1 2 1
    1 2 3 2 1
    1 2 3 4 3 2 1
    1 2 3 4 5 4 3 2 1  */

#include<iostream>

using namespace std;

int main() {
    int n;

    cout<<"Enter number : ";
    cin>>n;

    for (int i = 1;i <= n;i++) {

        for (int j = 1;j <= i;j++)
            cout<<j<<" ";

        for (int k = i - 1;k > 0;k--)
            cout<<k<<" ";

        cout<<endl;
    }
    return 0;
}