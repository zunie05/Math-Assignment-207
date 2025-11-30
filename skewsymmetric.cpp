#include<iostream>
using namespace std;
int main()
{
    int m,n,i,j,c;
    cin>>m>>n;
    int arr[m][n];
    c=0;
    if(m!=n)
    {
        cout<<"not skew symmetric";
        return 0;
    }


    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }

    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(arr[i][j]==arr[j][i]*(-1))
            {
            c=c+1;
            }


        }

    }

    if(c==m*m)
    {
        cout<<"Skew symmetric"<<endl<<endl;
     for(i=0;i<m;i++)
       {
        for(j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;

       }
    }
    else
    {
        cout<<"not skew symmetric";
    }

    return 0;

}