/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-04-27 21:40:09
*/

#include <bits/stdc++.h>
using namespace std;
class Prime
{
public:
    int n;
    void input()
    {
        cin >> n;
    }
    bool isPrime(int num)
    {
        if (num <= 1)
            return false; // 0 and 1 are not prime numbers
        if (num == 2)
            return true; // 2 is a prime number

        // Check if num is divisible by any integer from 2 to sqrt(num)
        for (int i = 2; i * i <= num; ++i)
        {
            if (num % i == 0)
            {
                return false; // If num is divisible by any number, it's not prime
            }
        }
        return true; // If num is not divisible by any number, it's prime
    }
    void pr()
    {
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (isPrime(i))
            {
                ans = i;
            }
        }
        cout << ans;
    }
};

int main()
{
    Prime obj;
    obj.input();
    obj.pr();

    return 0;
}