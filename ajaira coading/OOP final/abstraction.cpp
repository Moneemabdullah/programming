/*

         ####  ###  #   # #####        ##### ####  ##### #####
        #     #   # #   # #            #     #   # #     #
         ###  ##### #   # ####   AND   ####  ####  ####  ####
            # #   #  # #  #            #     #  #  #     #
        ####  #   #   #   #####        #     #   # ##### #####


        #####   ###   #      #####   ####  #####  ###  #   #  #####
        #   #  #   #  #      #      #        #     #   ##  #  #
        #####  #####  #      ####    ###     #     #   # # #  ####
        #      #   #  #      #          #    #     #   #  ##  #
        #      #   #  #####  #####  ####     #    ###  #   #  #####

*/
/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-09-28 09:23:23
*/

/*
    Defination:

    Data abstraction refers to providing only essential information to the outside
    world and hiding their background detail

*/

#include <bits/stdc++.h>

using namespace std;
class Sum
{
private:
    int x, y, z; // private variables
public:
    void add()
    {
        cout << "Enter two numbers: ";
        cin >> x >> y;
        z = x + y;
        cout << "Sum of two number is: " << z << endl;
    }
};
int main()
{
    Sum sm;
    sm.add();
    /*

    ai khan e x,y,z ke main fanction thake access kora jaccha na
    tai akta member mathod use korte hoice public part a
    ai add mathod dia x, y, z ke manipulation korte hoice

    */
    return 0;
}