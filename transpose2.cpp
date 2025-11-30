#include<iostream>
using namespace std;
int main()
{
    int m,n,i,j,temp;
    cin>>m>>n;
    if (m!=n)
    {
    cout<<"rectangular matrix"<<endl<<endl;
    int arr1[m][n];
    int arr2[n][m];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr1[i][j];
        }

    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            arr2[j][i]=arr1[i][j];
        }

    }

    cout<<endl;
    cout<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;

    }
    cout<<endl<<endl;


   for(i=0;i<n;i++)
   {
        for(j=0;j<m;j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;

    }

    return 0;
    }

    else if(m==n)
  {
        cout<<"square matrix"<<endl<<endl;

        int arr[m][m];

    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }

    }
    cout<<endl<<endl;


   for(i=0;i<m;i++)
   {
        for(j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;

    }

 cout<<endl<<endl;




    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {   if(i!=j && i<j)
            {   temp=arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
            }

        }

    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;

    }

  return 0;

    }

}