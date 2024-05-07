#include <iostream>
using namespace std;

int main() 
{
    int years[5] = {};
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter year #" << i+1 << " ==> ";
        cin >> years[i];
    }
    cout << "\nThe Entry Years Backwords\n" << endl;
    for (int i = 5; i >= 1; i--)
    {
        cout << "Year #" << i << "==> " << years[i-1] << endl;
    }
}
