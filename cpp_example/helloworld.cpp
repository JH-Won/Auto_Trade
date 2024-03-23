#include<iostream>
#include<vector>
#include<string>


using namespace std;

int main() 
{
    vector<string> msg = {"Hello", "World!"};
    
    for (const string& a : msg)
    {
        cout << a << " ";
    }
    cout << endl;

    return (0);
}