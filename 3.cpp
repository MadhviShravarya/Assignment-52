#include& lt; bits / stdc++.h & gt;
using namespace std;
 
int main()
{
 
    // declaration
    unordered_multimap& lt;
    int, int& gt;
    sample;
 
    // inserts element
    sample.insert({ 1, 2 });
    sample.insert({ 3, 4 });
    sample.insert({ 3, 4 });
    sample.insert({ 2, 3 });
    sample.insert({ 2, 3 });
 
    // prints all element
    cout& lt;
    <
    "
    Key and Elements : \n& quot;
    ;
    for (auto it = sample.begin(); it != sample.end(); it++)
        cout& lt;
    <
    "
    "
    <
    <
    it - >
    first& lt;
    <
    "
    \t& quot;
    <
    <
    it - >
    second& lt;
    <
    endl;
 
    auto it = sample.begin();
 
    // print the first element
    cout& lt;
    <
    "
    \nThe first key and element : "
    <
    <
    it - >
    first& lt;
    <
    "
    "
    ;
    cout& lt;
    <
    it - >
    second;
 
    return 0;
}
