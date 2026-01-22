#include<iostream>
using namespace std;
int fun1(int num) {
    num*(num+1)/2;
}
int fun2(int num) {
    int sum=0;
    for(int i=1;i<=num;i++) {
        sum=sum+i;
    }
    return sum;
}
int fun3(int num) {
    int sum=0;
    for(int i=1;i<=num;i++) {
        for(int j=1;j<=i;j++) {
            sum++;
        }
    }
    return sum;
}
int main() {
    int num;
    cin>>num;
    int res1=fun1(num);
    int res2=fun2(num);
    int res3=fun3(num);
    return 0;
}