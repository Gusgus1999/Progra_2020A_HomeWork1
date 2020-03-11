#include <iostream>
#include <cstdio>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int Secret;
    int userchoice = 0;
    Secret = rand() % 10 + 1;
    
    cout << "Pick a number between 1 and the 10: \n";
    cin >> userchoice;
    
    if (userchoice == Secret)
    {
        cout << "The number you chose is the same.... Bye";
    }
    else if (userchoice < Secret)
    {
        cout << "The number you chose is greater ";
    }
    else if (userchoice > Secret)
    {
        cout << "The number you chose is minor";
    }

    







}