#include<iostream>
using namespace std;
int search(int arr[],int num,int x) {
    for(int i=0;i<num;i++) {
        if(arr[i]==x) {
            return i;
        }
    }
    return -1;
}
int main() {
    int x;
    cin>>x;
    int num;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++) {
        cin>>arr[i];
    }
    int loc=search(arr,num,x);
}