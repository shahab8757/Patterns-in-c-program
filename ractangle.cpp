#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int row,col;
    cout<<"enter the row and col:";
    cin>>row >>col;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}