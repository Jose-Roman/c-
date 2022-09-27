#include <iostream>
#include "Customer.cpp"

class PreferredCustomer: public Customer
{
    private:
        double purchase;


    public:
        PreferredCustomer(string n, string a, string p, int c, bool m, double pur) : Customer(n, a, p, c, m) {
            purchase = pur;
        }

        void setPurchase(double pur)
        {
            purchase = pur;
        }

        double getPurchase()
        {
            return purchase;
        }

        double getDiscount()
        {
            double discount;

            if(purchase >= 2000)
                discount = 10.0;
            else if(purchase >= 1500)
                discount = 7.0;
            else if(purchase >= 1000)
                discount = 6.0;
            else if(purchase >= 500)
                discount = 5.0;
            else
                discount = 0.0;

            return discount;
        }

        string toString()
        {
            string str = "Customer Amount Spent: $" + to_string(getPurchase()) + "\nDiscount: " + to_string(getDiscount())+ "%";
            return str;
        }

};