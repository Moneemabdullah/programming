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
    date: 2024-09-28 19:45:59
*/

/*
    inharitence::
    The capability of a class to derive properties and characteristics from another
    class is called Inheritance.
*/

#include <bits/stdc++.h>
using namespace std;

class Prome
{
private:
    int x;

protected:
    int rifat = 007;

public:
    void set(int a)
    {
        x = a;
    }
    int get()
    {
        return x;
    }
};

class derived : public Prome
{
public:
    void set_x(int a)
    {
        rifat = a;
    }
    void put()
    {
        cout << rifat << endl;
    }
};

int main()
{
    derived obj;
    obj.put();
    obj.set_x(100);
    obj.put();

    return 0;
}

/* Thank you */