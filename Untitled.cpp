#include <iostream>

using namespace std;

int main()
{
    int x = 5;
    int *xpointer= &x;
    *xpointer = 20;
    cout<<x;
    return 0;
}