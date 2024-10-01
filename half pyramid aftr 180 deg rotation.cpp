#include<iostream>
using namespace std;
int main()
{
    system("cls");
    for(int i=1;i<5;i++)// row
    {
        for(int j=i;j<5;j++)  //space
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++) //col
        {
            cout<<"*";
        }
        cout<<endl;
    }
}