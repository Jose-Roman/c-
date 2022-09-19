#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <unordered_map>


//use 2nd option in terminal -> run build task 
using namespace std;

void printFrequencies(const string &str){
    unordered_map<string, int> freq;
    stringstream ss (str);
    string word;
    while (ss >> word)
        freq[word]++;

    unordered_map<string, int>:: iterator itr;

    for(itr = freq.begin(); itr != freq.end(); itr++)
    {
        cout << itr-> first << "   "<< itr-> second << endl;

    }

    string key = "lab,";
  
    if (freq.find(key) == freq.end())
        cout << key << " not found\n\n";
    else
        cout << "FOUND " << key << "   "<< freq[key];


}

int main(){
    string str = "There are 5 steps to the lab, make sure to include all outputs of the lab, also explain what you are observing as well. The outputs will be the graphs, and the values output from the terminal. ";
    printFrequencies(str);
    return 0;
}