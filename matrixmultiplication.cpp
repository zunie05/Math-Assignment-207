#include<iostream>
using namespace std;

int main()
{
    int m,n,o,p,i,j,k,sum;
    sum=0;
    cout<<"Enter row and column of 1st and 2nd matrix respectively"<<endl;
    cin>>m>>n>>o>>p;
    int mat1[m][n];
    int mat2[o][p];
    int mat3[m][p];
    if(n!=o)
    {
        cout<<"invalid";
        return 0;
    }
    for(i=0;i<m;i++)
     {
             for(j=0;j<n;j++)
             {
                 cin>>mat1[i][j];
             }
     }
    for(i=0;i<o;i++)
    {
        for(j=0;j<p;j++)
        {
            cin>>mat2[i][j];
        }
    }
    cout<<endl<<endl;

    for(i=0;i<m;i++)
     {
             for(j=0;j<n;j++)
             {
                 cout<<mat1[i][j]<<" ";
             }
             cout<<endl;
     }

    cout<<endl<<endl;
    for(i=0;i<o;i++)
    {
        for(j=0;j<p;j++)
        {
            cout<<mat2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;

    for(i=0;i<m;i++)
    {
        for(j=0;j<p;j++)
        {
            for(k=0;k<n;k++)
            {
             sum=sum+(mat1[i][k]*mat2[k][j]);
            }
            mat3[i][j]=sum;
            sum=0;
        }
    }

    for(i=0;i<m;i++)
     {
             for(j=0;j<p;j++)
             {
                 cout<<mat3[i][j]<<" ";
             }
             cout<<endl;
     }


}