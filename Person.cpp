#include <iostream>
using namespace std;

class Person
{
    private:
        string name, address, phone;

    public:
        Person(string n, string a, string p){
            name = n;
            address = a;
            phone = p;
        }

        void setName(string n)
        {
            name = n;
        }

        void setAddress(string a)
        {
            address = a;
        }

        void setPhone(string p)
        {
            phone = p;
        }

        string getName()
        {
            return name;
        }

        string getAddress()
        {
            return address;
        }

        string getPhone()
        {
            return phone;
        }

};
