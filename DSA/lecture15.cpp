#include<iostream>
#include<cmath>
using namespace std;


// //convert 'a' to 'A'

// char convert(char  name)
// {
//    char ans = name-'a'+'A';
//    return ans;
// }

// int main()
// {
//    char name;
//    cout<<"Enter character:";
//    cin>>name;

//    //function call
//    cout<<convert(name);

//    return 0;                                      
// }


// //Armstrong no ( 1st Method)

// int countdigit(int n)
// {
//    int count=0;
//    while(n)
//    {
//       count++;
//       n=n/10;
//    }
//    return count;
// }

// bool Armstrong(int num , int digit)
// {
//    int n=num , ans=0, rem;

//    while(n)
//    {
//       //rem
//       rem=n%10;
//       //no
//       n = n/10;
//       ans =ans + pow(rem,digit);

//    }
//    if(ans==num)
//    return 1;
//    else
//    return 0;
// }

// int main()
// {
//    int num;
//    cout<<"Enter no:";
//    cin>>num;

//   int digit = countdigit(num);
//   cout<<Armstrong(num,digit);
// }




//Armstrong no ( second Method)

// Function to count the number of digits in a number
// int countdigit(int n)
// {
//    int count = 0;
//    while(n)
//    {
//       count++;
//       n = n / 10;
//    }
//    return count;
// }

// // Function to calculate the power of an integer without using pow function
// int intPow(int base, int exp)
// {
//    int result = 1;
//    for(int i = 0; i < exp; i++)
//    {
//       result *= base;
//    }
//    return result;
// }




// // Function to check if a number is an Armstrong number
// bool isArmstrong(int num, int digit)
// {
//    int n = num, ans = 0, rem;

//    while(n)
//    {
//       rem = n % 10;
//       n = n / 10;
//       ans += intPow(rem, digit);
//    }
//    return ans == num;
// }

// int main()
// {
//    int num;
//    cout << "Enter number: ";
//    cin >> num;

//    int digit = countdigit(num);
//    if (isArmstrong(num, digit))
//       cout << num << " is an Armstrong number." << endl;
//    else
//       cout << num << " is not an Armstrong number." << endl;

//    return 0;
// }


// //armstrong no 

// int count(int n)
// {
//     int c=0;
//     while(n>0)
//     {
//         c++;
//         n/=10;
//     }
//     return c;
// }

// int cube(int n , int a)
// {
//     int rem,sum=0,ans;

//     while(n)
//     {
//         //rem
//         rem=n%10;
//         //n
//         n=n/10;

//         ans=rem;

//         for(int i=1;i<a;i++)
//         {
//             ans=ans*rem;
//         }

//         sum=sum+ans;
//     }
//     return sum;
// }



// int main()
// {
//     int no;
//     cout<<"no:";
//     cin>>no;

//     int n=no;

//     int a=count(n);
//     cout<<"count:"<<a<<endl;

//     int b=cube(n,a);
//     cout<<b<<endl;

//     if(n==b)
//     {
//         cout<<"Armstrong no:";
//         return 0;
//     }
//     else
//     {
//         cout<<"not an armstrong no:";
//     }

// }


// // // Trailing zeros

// int factorial(int n)
// {
//     int f=1;
//     for(int i =1 ;i<=n;i++)
//     {
//         f = f*i;
//     }

//     return f;
// }

// int trailingzeros(int fact)
// {
//     int n = fact, count=0, rem;

//     while(n)
//     {
//         //rem
//         rem = n%10;

//         if(rem==0)
//         {
//             count++;
//         }
//         else
//         {
//             return count;
//         }

//         n = n/10;
//     }
//     return count;

// }

// int main()
// {
//     int n;
//     cout<<"Enter no:";
//     cin>>n;

//    int fact = factorial(n);
//    cout<<trailingzeros(fact);
// }



