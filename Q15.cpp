//sorting array in half ascending and other in descending order

#include<iostream>

using namespace std;

void swap (int arr[] , int i , int j) {
    arr[i] = arr[i] + arr[j];
    arr[j] = arr[i] - arr[j];
    arr[i] = arr[i] - arr[j];
}

void sortAscending (int arr[] , int lb , int ub) {
    for (int i = lb;i <= ub - 1;i++) {
        for (int j = lb;j <= ub - i - 1;j++) {
            if (arr[j + 1] < arr[j]) {
                swap (arr , j + 1 , j);
            }
        }
    }
}

void sortDescending (int arr[] , int lb , int ub) {
    for (int i = lb;i <= ub - 1;i++) {
        for (int j = ub;j >= i - lb + lb + 1;j--) {
            if (arr[j - 1] < arr[j]) {
                swap (arr , j - 1 , j);
            }
        }
    }
}

int main() {
    int n;

    cout<<"Enter array length : ";
    cin>>n;

    cout<<"Enter array "<<endl;
    int arr[n];
    for (int i = 0;i < n;i++)
        cin>>arr[i];

    int mid = n / 2 - 1;
    sortAscending (arr , 0 , mid);
    sortDescending (arr , mid + 1 , n - 1);

    cout<<"Resultant Array "<<endl;
    for (int i = 0;i < n;i++) {

        cout<<arr[i]<<" ";

        if (i == mid)
            cout<<"| ";
    }
    cout<<endl;

    return 0;
}