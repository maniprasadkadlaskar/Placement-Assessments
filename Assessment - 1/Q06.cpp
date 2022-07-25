//print names in alphabetic order

#include<iostream>

using namespace std;

void swap (string names[] , int i , int j) {
    string t = names[i];
    names[i] = names[j];
    names[j] = t;
}

void sortNames (string names[] , int n) {
    for (int i = 0;i < n - 1;i++) {
        for (int j = 0;j < n - i - 1;j++) {
            if (names[j + 1][0] < names[j][0]) {
                swap (names , j + 1 , j);
            }
        }
    }
}

int main() {
    int n;

    cout<<"Enter number of names : ";
    cin>>n;

    cout<<"Enter names "<<endl;
    string names[n];
    for (int i = 0;i < n;i++)
        cin>>names[i];

    sortNames (names , n);

    cout<<"Names in sorted form"<<endl;
    for (int i = 0;i < n;i++)
        cout<<names[i]<<" ";
    cout<<endl;

    return 0;
}