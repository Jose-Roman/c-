#include <iostream>
#include "Person.cpp"
using namespace std;

class Customer: public Person
{
    private:
        int customer;
        bool mailing;

    public:
        Customer(string n, string a, string p, int c, bool m) : Person(n, a, p) {
            customer = c;
            mailing  = m;
        }

        void setCustomer(int c)
        {
            customer = c;
        }

        void setMailing(bool m)
        {
            mailing = m;
        }

        int getCustomer()
        {
            return customer;
        }

        bool getMailing()
        {
            return mailing;
        }


};
