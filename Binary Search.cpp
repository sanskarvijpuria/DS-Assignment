#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int n,avg,e,count=0;
    cout<<"Enter the number of elements in array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the sorted array"<<endl;
    for(int i=0;i<n;i++)
            {
                cin>>a[i];
            }

    cout<<"Element to be searched"<<endl;
    cin>>e;
    avg=(n-1)/2;

    while(count==0)
        {
            if(a[avg]==e)
                {
                   cout<<"Element found at:"<<avg+1<<endl;
                   count++;
                }
            else if(e<a[avg])
                {
                    avg=avg/2;
                }
            else if(e>a[avg])
                {
                   avg=(avg+n-1)/2;
                }
            else
                {
                    cout<<"Element not in array "<<endl;
                }
           }

    getch();
    return 0;
}
