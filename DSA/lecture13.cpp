#include<iostream>
#include <climits>
using namespace std;


// //add digits

// int main()
// {
//   int num,rem, ans;
//   cout<<"Enter the no:";
//   cin>>num;


// while(num>9)
// {
//   ans = 0;
//   while(num>0)
//   {
//       rem = num%10;
//       num = num/10;
//       ans = rem+ans;
//   }
//   num = ans;
// }
//   cout<<ans;

// }


// //leap year

// int main()
// {
//   int year;
//   cout<<"Enter year:";
//   cin>>year;

//   if(year%400==0)
//   cout<<"Leap year";
//   else if(year%4==0 && year%100!=0)
//   cout<<"Leap year";
//   else
//   cout<<"Not a leap year";
// }


// //reverse digits

// int main()
// {
//   int num;
//   cout<<"Enter num:";
//   cin>>num;

//   int ans=0, rem;

//   while(num!=0)
//   { 
//     rem = num%10;
//     num = num/10;
//     if(ans>INT_MAX/10 || ans<INT_MIN/10)
//     return 0;
//     ans = ans*10+rem;
//   }


//   cout<<ans;
// }


//  //power of two

// int main()
// {
//     int num;
//     cout<<"Enter no:";
//     cin>>num;
        
//     if(num<1)
//        {
//         return 0;
//        }
//     while(num!=1)
//     {
//         if(num%2==1)
//         {
//         cout<<"not a power of 2";
//         return 0;
//         }

//         num/=2;
//     }
//     cout<<num<<"is power of 2";
// }


// //power of two (2nd method)


// bool isPowerOfTwo(int num) {
//     // Ensure the number is positive and not zero
//     if (num <= 0) return false;

//     // Iterate over the range to find a power of two that matches num
//     for (int i = 0; i < 31; ++i) {
//         int ans = 1 << i; // Use bit shift to compute 2^i

//         if (ans == num) return true;
//         if (ans > num) return false; // Optimization: stop if ans exceeds num
//     }

//     return false; // If no match is found
// }

// int main() {
//     int num;
//     cin >> num;

//     if (isPowerOfTwo(num)) {
//         cout << "Yes, it is a power of two." << endl;
//     } else {
//         cout << "No, it is not a power of two." << endl;
//     }

//     return 0;
// }


// //palindrome or not


// int main()
// {
//     int num;
//     cin>>num;
//     int n=num;

//     int rem , ans=0, mul=1;
//     while(n!=0)
//     {
//         //rem
//         rem = n%10;
//         //remove last digit
//         n = n/10;
//         //ans
//         ans = ans*10+rem;
        
//         if(ans>INT_MAX/10)
//         return 0;


//         //mul
//        mul = mul*10;
//     }

//     if(ans<0)
//     {
//         ans = -ans;
//     }

//     if(ans==num)
//     cout<<"palindrome";
//     else
//     cout<<"not palindrome";
// }



// //complement of a no

// int main() {

//     int n;
//     cin>>n;

//         if(n==0)
//         {
//             cout<<"return 1";
//         }
      
//         int rem , ans=0, mul=1;

//         while(n)
//         {
//             //rem
//             rem = n%2;
//             //xor operation to convert 1 to 0 and 0 to 1
//             rem = rem^1;
//             //remove last digit
//             n = n/2;
//             //ans
//             ans = rem*mul+ans;
//             //mul
//             mul = mul*2;
//         };

//         cout<< ans;
        
//     }



