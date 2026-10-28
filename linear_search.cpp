#include <iostream>
using namespace std;

// Function to perform linear search
int linear_search(int a[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            return i;   // Return index if element is found
        }
    }
    return -1;          // Return -1 if element is not found
}

int main()
{
    int n, x;

    cout << "Enter the size of the array: ";
    cin >> n;

    int a[n];   // If your compiler doesn't support this, use int a[100];

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter the element to search: ";
    cin >> x;

    int result = linear_search(a, n, x);

    if (result == -1)
    {
        cout << "Element not found." << endl;
    }
    else
    {
        cout << "Element found at index " << result << "." << endl;
    }

    return 0;
}

/*
// output
//PS D:\vaibhav> cd "d:\vaibhav\" ; if ($?) { g++ linear_search.cpp -o linear_search } ; if ($?) { .\linear_search }
Enter the size of the array: 10
Enter 10 elements:
1 2 3 4 5 6 7 8 9 10
Enter the element to search: 7
Element found at index 6.
PS D:\vaibhav> */