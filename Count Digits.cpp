#include<iostream>
using namespace std;
int countDigits(int num) {
    int res=0;
    while(num) {
        num=num/10;
        res++;
    }
    return res;
}
int main() {
    int num;
    cin>>num;
    int res=countDigits(num);
    return 0;
}