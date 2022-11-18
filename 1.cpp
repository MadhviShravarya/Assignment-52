#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    // Declaration
    unordered_map<std::string, std::string> mymap;
 
    // Initialisation
    mymap = { { "Australia", "Canberra" },
              { "U.S.", "Washington" },
              { "France", "Paris" } };
 
    // Iterator pointing to the first element
    // in the unordered map
    auto it = mymap.begin();
 
    // Prints the elements of the first element in map
    cout << it->first << " " << it->second;
 
    return 0;
}
