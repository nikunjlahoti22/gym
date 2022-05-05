/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int row,col;
    cin>>row>>col;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

