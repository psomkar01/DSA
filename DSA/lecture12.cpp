// #include<iostream>
// using namespace std;

// // Decimal to binary conversion (method 1)

// int main()
// {
//     int n;
//     cout << "No: ";
//     cin >> n;

//     int ans = 0;    // To store the final binary answer
//     int mul = 1;    // To keep track of place value in binary (1, 10, 100, etc.)
//     int rem;        // To store the remainder when dividing by 2

//     while(n > 0)    // Continue until all digits are processed
//     {
//         // Calculate remainder when dividing by 2 (0 or 1)
//         rem = n % 2;
        
//         // Update the number by dividing it by 2 to move to the next binary digit
//         n = n / 2;
        
//         // Add the binary digit (rem) to the final answer at the correct place value
//         ans = rem * mul + ans;
        
//         // Increase place value (from 1 to 10, 100, 1000, ...) for the next binary digit
//         mul = mul * 10;
//     }

//     // Output the binary equivalent of the decimal number
//     cout << ans << endl;
// }



// //decimal to binary (method 2)
// int main()
// {
//     int num;
//     cout<<"Enter the no:";
//     cin>>num;

//     int rem , ans=0 , mul=1;

//     while(num>0)
//     {
//         //remainder
//         rem = num&1;
//         //quotient
//         num = num>>1;
//         //ans
//         ans+= rem*mul;
//         //mul
//         mul*=10;
//     }
//     cout<<ans<<endl;
// }




// // Binary to decimal conversion

// int main()
// {
//     int no;
//     cout << "Enter binary number: ";
//     cin >> no;

//     int n = no;         // Copy of the input number for processing
//     int ans = 0;        // To store the final decimal answer
//     int mul = 1;        // To keep track of powers of 2 (1, 2, 4, 8, etc.)
//     int rem;            // To store each binary digit (0 or 1)

//     while(n > 0)        // Continue until all binary digits are processed
//     {
//         // Extract the last binary digit (0 or 1) using modulo 10
//         rem = n % 10;
        
//         // Remove the last digit by dividing by 10
//         n /= 10;
        
//         // Add the decimal equivalent of the binary digit at the correct power of 2
//         ans += rem * mul;
        
//         // Update mul to the next power of 2 (1, 2, 4, 8, ...)
//         mul *= 2;
//     }

//     // Output the original binary number and its decimal equivalent
//     cout << no << " in decimal is: " << ans << endl;
// }


// // Decimal to octal

// int main()
// {
//     int num;
//     cout<<"Enter the no:";
//     cin>>num;

//     int ans=0, mul=1, rem;

//     while(num)
//     {
//         //remainder
//         rem = num%8;
//         //num
//         num = num/8;
//         //ans
//         ans = rem*mul+ans;
//         //mul
//         mul = mul*10;
//     }
//     cout<<ans<<endl;
// }


// // Octal to decimal
// int main()
// {
//     int num;
//     cout<<"Enter the no:";
//     cin>>num;

//     int ans=0, mul=1, rem;

//     while(num)
//     {
//         //remainder
//         rem = num%10;
//         //number
//         num = num/10;
//         //ans
//         ans = rem*mul+ans;
//         //mul
//         mul = mul*8;
//     }
//     cout<<ans<<endl;
// }



// // convert binary numbers to decimal numbers using a for loop.

// int main()
// {
//     int no, rem, ans=0, mul=1;
//     cout<<"Enter the binary no:";
//     cin>>no;

//     for( int n=no;n>0;n/=10)
//     {
//         //rem
//         rem=n%10;
//         //ans
//         ans=rem*mul+ans;
//         //mul
//         mul=mul*2;
//     }

//     cout<<ans;

// }


// // convert binary numbers to decimal numbers using a for loop.
// // 2nd method

// int main()
// {
//     int n, rem, ans=0, mul=1, count=0;
//     cout<<"Enter the binary no:";
//     cin>>n;

//     int temp = n;

//     //to find the no of digits in the binary no
//     while(temp!=0)
//     {
//         temp/=10;
//         count++;
//     }

//     for(int i=1;i<=count;i++)
//     {
//         //rem
//         rem=n%10;
//         //no
//         n=n/10;
//         //ans
//         ans=rem*mul+ans;
//         //mul
//         mul=mul*2;
//     }

//     cout<<ans;
// }


// // program to convert decimal numbers to binary numbers using a for loop.

// int main()
// {
//     int n, rem, ans=0, mul=1;
//     cout<<"Enter the decimal no:";
//     cin>>n;

//     int temp=n, count=0;

//     // to count the no of digits
//     while(temp!=0)
//     {
//         temp/=2;
//         count++;
//     }

//     for(int i=1;i<=count;i++)
//     {
//         //rem
//         rem=n%2;
//         //no
//         n=n/2;
//         //ans
//         ans=rem*mul+ans;
//         //mul
//         mul=mul*10;

//     }

//     cout<<"The binary no is :"<<ans;
// }






// //binary to octal

// //first convert binary to decimal


// int main()
// {
//     int num;
//     cout << "Enter the binary number: ";
//     cin >> num;

//     int ans = 0, mul = 1, rem;

//     // Convert binary to decimal
//     while (num)
//     {
//         rem = num % 10;
//         num = num / 10;
//         ans = rem * mul + ans;
//         mul = mul * 2;
//     }
//     cout << "Decimal: " << ans << endl;

//     // Convert decimal to octal
//     int octa = 0;
//     mul = 1; // Reinitialize mul for octal conversion
//     while (ans)
//     {
//         rem = ans % 8;
//         ans = ans / 8;
//         octa = rem * mul + octa;
//         mul = mul * 10; // mul should be 10 to convert to octal number
//     }
//     cout << "Octal: " << octa << endl;

//     return 0;
// }



// //octal to binary

// //first convert octal to decimal
// int main()
// {
//     int num;
//     cout<<"Enter the octal no:";
//     cin>>num;

//     int ans=0, mul=1, rem;

//     while(num)
//     {
//         //remainder
//         rem = num%10;
//         //num
//         num = num/10;
//         //ans
//         ans = rem*mul+ans;
//         //mul
//         mul = mul*8;
//     }

//     cout<<"Decimal:"<<ans<<endl;

//     // convert decimal to binary
//     int binary=0;
//     mul =1;

//     while(ans)
//     {
//         //remainder
//         rem = ans%2;
//         //num
//         ans = ans/2;
//         //binary no
//         binary = rem*mul+binary;
//         //mul
//         mul = mul*10;
//     }
//     cout<<"Binary:"<<binary<<endl;
// }

