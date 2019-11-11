#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int mat[3][3],mat2[3][3],mat3[3][3] ;

    cout<<"Enter the first matrix(3*3)  row by row\n";
    for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>mat[i][j];
            }
        }

    cout<<"Enter the second matrix(3*3)  row by row\n";
    for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>mat2[i][j];
            }
        }

    for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                mat3[i][j]=0;
                for(int k=0;k<3;k++)
                    {
                     mat3[i][j]+=mat[i][k]*mat2[k][j];
                    }

            }
        }

    cout<<"Result\n";
    for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<mat3[i][j]<<" ";
            }
            cout<<"\n";
        }
    getch();
    return 0;
}
