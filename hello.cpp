#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>


//use 2nd option in terminal -> run build task 
using namespace std;

int main()
{
    unordered_map<string, int> hash;
    hash["dog"] = 2;
    hash["cat"] = 3;
    hash["mouse"] = 10;
    hash["horse"] = 5;
    hash["campanocha"] = 101; 
    hash.insert(make_pair("fly", 909));

    unordered_map<string, int>:: iterator itr;

    for(itr = hash.begin(); itr != hash.end(); itr++)
    {
        cout << itr-> first << "   "<< hash[itr->first] << endl;

    }
    
}