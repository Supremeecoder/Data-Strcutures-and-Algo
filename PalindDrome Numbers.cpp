#include <iostream>
using namespace std;

int reverseDigits(int num)
{
    int rev = 0;
    while(num > 0)
    {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}

bool isPalindrome(int n)
{
    return reverseDigits(n) == n;
}

int main()
{
    int n;
    cin >> n;

    if(isPalindrome(n))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
