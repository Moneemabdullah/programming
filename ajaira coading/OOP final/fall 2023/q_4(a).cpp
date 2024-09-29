/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-09-28 09:37:11
*/

/*
    Defination:

    In Object Oriented Programming, Encapsulation is defined as binding together
    the data and the functions that manipulate them

*/

#include <bits/stdc++.h>
using namespace std;

class Encapsulation
{
private:
    // x ke main ai class er bahire thake access kora jabe na
    int x;

public:
    /*
     ai set fanction dia main fanction thake x er akta value set kore
     dite hobe
    */
    void set(int a) { x = a; }
    /*
     ai get fanction x er value main fanction e apss kore ditece
    */
    int get() { return x; }
};
int main()
{
    Encapsulation obj;
    /*
      ai obj.set(5)  holo set fanction dia x er value 5 set kore dice
    */
    obj.set(5);
    cout << obj.get();
    return 0;
}