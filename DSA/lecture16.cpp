#include<iostream>
using namespace std;

// int main()
// {
//     int arr[] = {1,2,3};

//     for(int i=0;i<5;i++)
//     cout<<arr[i]<<" ";

//     return 0;
// }

// //zero

// int main()
// {
//     int arr[6]={0};

//     for(int i=0;i<6;i++)
//     cout<<arr[i]<<" ";

//     return 0;
// }


// // Taking input form user

// int main()
// {
//     int arr[5];
//     cout<<"Enter the input:";

//     for(int i=0;i<5;i++)
//     {
//         cin>>arr[i];
//     }

//     for(int i=0;i<5;i++)
//     {
//         cout<<arr[i]<<endl;
//     }

//     return 0;
// }


// // User can assign size of array

// int main()
// {
//     int size;
//     cout<<"Enter the size:";
//     cin>>size;

//     //keeep no inside the arr bcz it is not a good habit to declare arr size as variable
//     int arr[1000];

//     cout<<"Enter the input:";

//     for(int i =0;i<size;i++)
//     cin>>arr[i];

//     for(int i=0;i<size;i++)
//     cout<<arr[i]<<"  ";
// }


// // Find the size of an array

// int main()
// {
//     int arr[5] ={ 1,2,3,3,5};

//     cout<<sizeof(arr)<<" ";
// }


// // Find the no of elements in an array

// int main()
// {
//     int arr[5]={1,2,3,4,5};

//     cout<<"No of elements in array are:"<<sizeof(arr)/sizeof(arr[0]);
// }




// // find Maximum and minimum element in an array

// #include <climits>
// int main()
// {

//     int ans=INT_MIN;

//     int a[5]={1,23,23,12,3};

//     for(int i=0;i<5;i++)
//     {
//         if(a[i]>ans)
//         ans = a[i];
//     }

//     cout<<"Maximum element:"<<ans<<endl;

    
//     ans = INT_MAX;

//     for(int i=0;i<5;i++)
//     {
//         if(a[i]<ans)
//         ans = a[i];
//     }

//     cout<<"Minimum element:"<<ans<<endl;

// }



//////////////HOME WORK /////////////////////

// //sum of 20 elements using array


// int main()
// {
//     int a[20];
//     cout<<"enter a:";
    
//     for(int i=0;i<20;i++)
//     {
//         cin>>a[i];
//         cout<<endl;
//     }

//    int sum=0;
//    for(int i=0;i<20;i++)
//    {
//     sum = sum + a[i];
//    }

//    cout<<"Sum of 20 elements is : "<<sum<<endl;

// }


// //Calculate the average of elements in an array of size 18.

// int main()
// {
//     int arr[18];

//     cout<<"Enter the elements :";

//     for(int i=0;i<18;i++)
//     {
//     cin>>arr[i];
//     }

//     int sum=0;
//     for(int i=0;i<18;i++)
//     {
//         sum = sum + arr[i];
//     }

//     cout<<sum/2<<endl;
// }


// //Find the index of a specific element in an array, if the element is nor present, print -1.
// // Ask the size of the array from the user and then implement it.

// int main()
// {
//     int size, element;
   
//     cout<<"Enter the size of array :";
//     cin>>size;

//     if(size<0)
//     {
//         return 0;
//     }

//     int arr[size];
//     cout<<"Enter the elements in the array :";
    
//     for(int i=0;i<size;i++)
//     {
//         cin>>arr[i];
//     }

//     cout<<"Enter the element which index need to be find :";
//     cin>>element;

//     //find the index by for loop

//     for(int i=0;i<size;i++)
//     {
//         if(arr[i]==element)
//         {
//             cout<<"index : "<<i;
//             return 0;
            
//         }
//     }
//     cout<<"-1";
// }



// // Create an array of char types and store ‘a’ to ‘z’ in it.
// // Then print the element of the arrays.

// int main()
// {
//     char arr[26];

//     cout<<"Enter the character :";

//     for(int i=0;i<26;i++)
//     {
//         //cin>>arr[i];
//          // Fill the array with characters 'a' to 'z'
//          arr[i]='a'+i;
//     }

//     for(int i=0;i<26;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }

