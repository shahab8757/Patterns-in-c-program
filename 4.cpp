#include<iostream>
using namespace std;
int main()
{
    system("cls");
    for(int i=1;i<5;i++)// row
    {
        for(int j=1;j<=i;j++)  //space
        {
            cout<<" ";
        }
        for(int k=i;k<5;k++) //col
        {
            cout<<"*";
        }
        cout<<endl;
    }
}