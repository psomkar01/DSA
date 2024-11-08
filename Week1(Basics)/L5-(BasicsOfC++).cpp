#include<iostream>
using namespace std;

//print 101 to 200
int main()
{
    int i ;
    for(i=101;i<=200;i++)
{
    cout<<i<<endl;
}
}

//print a to z
int main()
{
    char name;
    for(name='a';name<='z';name++)
    {
        cout<<name<<endl; 
    }
}


//print from 10 to 1
int main()
{
    int i;
    for(i=10;i>=1;i--)
    {
        cout<<i<<" ";
    }
}


//print 1 to 100 (AP series)
int main()
{
    for(int i=1;i<=100;i=i+3)
    cout<<i<<" ";
}


//print table
int main()
{
    int n , i;
    cout<<"Enter the table no:";
    cin>>n;

    for(i=1;i<=10;i++)
    {
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
}


//power of a no
int main()
{
    int n, pow,num;
 
    cout<<"Enter the no:";
    cin>>n;

    cout<<"Enter the power:";
    cin>>pow;

       num =n;
    for(int i=1;i<pow;i++)
    {
        num = num*n;
    }
    cout<<"power of "<<n<<":"<<num;
}


//sum of n natural no
int main()
{
    int n , sum=0, i;
    cout<<"Enter the no:";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"sum of "<<n<<" is :"<<sum;
}



//sum of n natural no (Method 2)
int main()
{
    int n;
    cout<<"Enter the no:";
    cin>>n;

    cout<<n*(n+1)/2;
}


factorial of a no
int main()
{
    long long int i , n, fact=1;
    cout<<"Enter the no:";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        fact= fact*i;
    }
    cout<<"Factorial of "<<n<<":"<<fact;
}


//prime no
int main()
{
    int n, i;
    cout<<"Enter the no:";
    cin>>n;

    if(n<2)
    {
        cout<<"Not a prime no";
        return 0;
    }
    else
    {
        for(i=2;i<=n-1;i++)
        {
            if(n%i==0)
            {
                cout<<"Not a prime no";
                return 0;
            }
        }
    }
     cout<<n<<" is a prime no";
}


// //fibonacci series
int main()
{
    int n;
    cout<<"Enter the fibonacci series";
    cin>>n;

     int curr, last=0, prev=1;
     cout<<"Fibonacci series";
     
     if(n>=1)
     cout<<last<<" ";
     if(n>=2)
     cout<<prev<<" ";
     for(int i=3;i<=n;i++)
     {
        curr = prev+last;
        cout<<curr<<" ";
        last=prev;
        prev=curr;
     }
     return 0;
}

//HOME WORK //

//print no from 280 to 250
int main()
{
    int i;
    for(i=280;i>=250;i--)
    {
        cout<<i<<" ";
    }
}


//print from A to Z 
int main()
{
    char name;
    for(name = 'A';name<='Z';name++)
    {
        cout<<name<<" ";
    }
}


//print from Z to A
int main()
{
    char name;
    for(name='Z';name>='A';name--)
    cout<<name<<" ";
}


//print from 220 to 730 with cd 7
int main()
{
    int i;
    for(i=220;i<=730;i=i+7)
    cout<<i<<" ";
}


//sum of spuare of first n natural no
int main()
{
    int i , sum=0 , n;
    cout<<"Enter the no:";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        sum = sum + i*i;
    }
    cout<<sum;
}


sum of cube of first n natural no
int main()
{
    int i , sum=0, n;
    cout<<"Enter the no:";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        sum = sum + i*i*i;
    }
    cout<<sum;
}