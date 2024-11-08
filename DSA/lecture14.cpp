#include<iostream>
using namespace std;


// //Sum and Mul of two no
// int Sum(int m , int n)  //Function Declaration
// {
//     int ans = m+n; //Function define
//     return ans;
// }

// int Mul(int m , int n)
// {
//     int ans = m*n;
//     return ans;
// }

// void fun()
// {
//     cout<<"Hello Coder Army";
// }

// int main()
// {
//     int a, b;
//     cout<<"Enter a:";
//     cin>>a;

//     cout<<"Enter b:";
//     cin>>b;

//     //Function call
//     //cout<<Sum(a,b);

//     //Another way to call and print fun
//     int ans = Sum(a,b);
//     cout<<ans;
//     cout<<endl;
//     cout<<Mul(a,b);
//     cout<<endl;

//     fun();
// }


// //Given no is prime or not , factorial of a no

// bool isprime(int m)
// {
//     if(m<2)
//     return 0;

//     for(int i=2;i<m;i++)
//     {
//         if(m%i==0)
//         return 0;
//     }
//     return 1;
// }


// int fact(int m)
// {
//     int ans=1;
//     for(int i=1;i<=m;i++)
//     {
//         ans = ans*i;
//     }
//     return ans;
// }


// int main()
// {
//     int a , b;
//     cout<<"Enter the value of a:";
//     cin>>a;

//     cout<<"Enter the value of b:";
//     cin>>b;

//     //A is prime or not
//     cout<<isprime(a)<<endl;
//     //Factorial of A
//     cout<<fact(a)<<endl;
//     //B is prime or not
//     cout<<isprime(b)<<endl;
//     //Factorial of B
//     cout<<fact(b)<<endl;
//     //B-A is prime or not
//     cout<<isprime(b-a)<<endl;
//     //Factorial of B-A
//     cout<<fact(b-a)<<endl; 
// }



// // Pass by value (increment "a")

// void incr(int n)
// {
//     n++;
// }

// int main()
// {
//     int a=10;
//     incr(a);
//     cout<<a<<endl;
// }



// // Pass by reference (increment "a")

// void incr(int &n)
// {
//     n++;
// }

// int main()
// {
//     int a=10;
//     incr(a);
//     cout<<a<<endl;
// }


// // Swapping of two no

// void swap(int &a , int &b)
// {
//     int c;
//     c=a;
//     a=b;
//     b=c;
// }
// int main()
// {
//     int a , b;
//     cin>>a>>b;

//     swap(a,b);
//     cout<<a<<" "<<b<<" ";
// }


// // Swapping of two no (Function Overloading)


// void swap(int &a , int &b)
// {
//     int c = a;
//     a=b;
//     b=c;
// }

// void swap(float &c , float &d)
// {
//     float e = c;
//     c=d;
//     d=e;
// }


// int main()
// {
//     int a , b;
//     cin>>a>>b;

//     swap(a,b);
//     cout<<a<<" "<<b<<endl;

//     float c , d;
//     cin>>c>>d;

//     swap(c,d);
//     cout<<c<<" "<<d;
// }



//HOME WORK //

// //cube of a no

// int cube(int n)
// {
//     int ans = n*n*n;
//     return ans;
// }


// int main()
// {
//     int a , ans ;
//     cout<<"Enter value of a:";
//     cin>>a;

//     ans = cube(a);
//     cout<<ans;
// }



// //Reverse a no using function

// int rev(int num)
// {
//     int ans=0 , rem ;
//     while(num!=0)
//     {
//     rem = num%10;
//     num = num/10;
//     if(ans>INT_MAX/10 || ans<INT_MAX/10)
//     {
//      return 0;  
//      }
//     ans = ans*10+rem;
//     }
//     return ans;

// }
// int main()
// {
//     int n;
//     cout<<"no:";
//     cin>>n;

//     cout<<rev(n);
// }


// //There are three numbers a,b,c.
// // Put the value of a into b, put value of b into c and put value of c into a. Do it using Function.

// void swap(int &a , int &b , int &c)
// {
//     int temp = a ;
//     a=c;
//     c=b;
//     b=temp;

// }
// int main()
// {
//     int a, b, c;
//     cout<<"enter a:";
//     cin>>a;

//     cout<<"enter b:";
//     cin>>b;

//     cout<<"enter c:";
//     cin>>c;

//     swap(a,b,c);

//     cout<<a<<" "<<b<<" "<<c<<endl;

// }


// //Swap 2 numbers a, b without using extra variables. Range of -10000<=a,b<=100000. 

// void swap(int &a, int &b)
// {
//     a = a+b; // a now contains the sum of a and b
//     b = a-b; // b now contains the original value of b
//     a = a-b; // a now contains the original value of a
// }

// int main()
// {
//     int a,b;

//     cout<<"Enter value of a:";
//     cin>>a;

//     cout<<"Enter value of b:";
//     cin>>b;

//     swap(a,b);

//     cout<<"After swapping :";

//     cout<<a<<" "<<b;
// }



// //Print “Hello Coder Army” n times using Function.

// void ca(int &n)
// {
//     int  i;
//     for(i=1;i<=n;i++)
//     {
//         cout<<"Hello coder army"<<endl;
//     }
// }
// int main()
// {
//     int n;
//     cout<<"Value of n:";
//     cin>>n;

//     ca(n);
// }


// //Given two numbers n, r. Find nCr (Combination). Use Function here.

// //my code

// void fact(int &n , int &r)
// {
//     int i, n_fact=1 , r_fact=1, nr_fact=1;

//     for(i=1;i<=n;i++)
//     {
//         n_fact = n_fact*i;
//     }
//     cout<<"n factorial:"<<n_fact<<endl;

//     for(i=1;i<=r;i++)
//     {
//         r_fact = r_fact*i;
//     }
//     cout<<"r factorial:"<<r_fact<<endl;

//     for(i=1;i<=n-r;i++)
//     {
//         nr_fact = nr_fact*i;
//     }
//     cout<<"nr factorial:"<<nr_fact<<endl;

//     cout<<"Factorial of nCr :";

//     cout<<n_fact/(r_fact*nr_fact);
// }


// int main()
// {
//     int n , r;
//     cout<<"Enter value of n:";
//     cin>>n;

//     cout<<"Enter value of r:";
//     cin>>r;

//     fact(n,r);
// }

//  //Given two numbers n, r. Find nCr (Combination). Use Function here.

// // long long is used to avoid overflow

// long long fact(int n) {
//     long long factorial = 1;
//     for (int i = 1; i <= n; i++) {
//         factorial *= i;
//     }
//     return factorial;
// }

// int main() {
//     int n, r;

//     cout << "n: ";
//     cin >> n;

//     cout << "r: ";
//     cin >> r;

//     if (n < 0 || r < 0) {
//         cout << "n and r should be non-negative." << endl;
//         return 0;
//     }

//     if (r > n) {
//         cout << "r cannot be greater than n." << endl;
//         return 0;
//     }

//     long long nCr = fact(n) / (fact(n - r) * fact(r));
//     cout << "Combination (nCr): " << nCr << endl;

//     return 0;
// }



