#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int i,n,count=0;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements"<<endl;
    void swap(int *a, int *b);
    for(i=0;i<n;i++)
        cin>>a[i];
    while(count<n)
        {
          for(i=0;i<n;i++)
            {
               if(a[i]>a[i+1])
               {
                   swap(&a[i],&a[i+1]);
               }
            }
            count++;
        }
   cout<<"here the final array\n";
   for(i=0;i<n;i++)
     {
       cout<<a[i]<<endl;
     }
    getch();
    return 0;
}

void swap(int *a, int *b)
        {
            int c;
            c=*a;
            *a=*b;
            *b=c;
        }

