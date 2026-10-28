#include <iostream>
using namespace std;
int binary_search (int a[],int n,int x)
{
    int first,last,mid;
    first=0;
    last=n-1;
    while(first<= last)
    {
        mid=(first+last)/2;
        if(a[mid]==x)return(mid);
        else if(a[mid]<x)first=mid+1;
        else last=mid-1;

    }
    return(-1);
}
int main()
{
    int a[10],x,n;
    cout<<"how many elements";
    cin>>n;
    cout<<"Enter"<<n<<"elements";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the element to be searched";
    cin>>x;
    int position = binary_search(a,n,x);
    if(position==-1)cout<<"element not found";
    else cout<<"element found at position:"<<position;
    return(0);
}



/*Output
PS D:\vaibhav> cd "d:\vaibhav\" ; if ($?) { g++ binary_search.cpp -o binary_search } ; if ($?) { .\binary_search }
how many elements10
Enter10elements1 2 3 4 5 6 7 8 9 10
enter the element to be searched5
element found at position:4
PS D:\vaibhav>*/