#include<iostream>
#include<climits>
#include<cmath>
using namespace std;

// int main()
// {
//     int arr[100];

//     cout<<"Enter the elements in the array: ";
//     // take array input from user
//     for(int i=0;i<5;i++)
//     {
//         cin>>arr[i];
//     }

//     int n;
//     cout<<"Enter the element :";
//     cin>>n;

//     for(int i=0;i<5;i++)
//     {
//         if(arr[i]==n)
//         {
//             cout<<i<<endl;
//             return 0;
//         }
//     }

//     cout<<"Element is not present in the array : -1 ";
// }

// //reverse an array

// int main()
// {
//     int arr[100]={1,2,3,4,5,6};

//     int temp[6];

//     int i=5,j=0;

//     while(i>=0)
//     {
//         temp[j]=arr[i];
//         cout<<temp[j]<<" ";
//         j++;
//         i--;
//     }

    

//     return 0;
// }


int main()
{
    int arr[]={1,2,3,4,5};

    int i=0,j=4;

    while(i<j)
    {
        swap(arr[i],arr[j]);
        cout<<arr[i]<<" ";
        cout<<arr[j]<<" ";


        i++;
        j--;
    }
}