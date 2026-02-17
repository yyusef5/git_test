#include<iostream>

using namespace std;


string getUserName()
{
    string name;
    cin >> name;

    return name;
}

void printWelcome(string name)
{
    cout << "Hello" << name;
}
int main()
{
    printWelcome(getUserName());

    return 0;
}