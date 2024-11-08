#include<iostream>
using namespace std;


//table program

int main()
{
    int n , i=1;
    cout<<"Enter the table no :";
    cin>>n;

    while(i<=10)
    {
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
        i++;
    }
}


//factors of a no

int main()
{
    int n , i=1; // initialization
    cout<<"Enter the no:";
    cin>>n;

    while(i<=n) // break
    {
        if(n%i==0)
        cout<<i<<" ";

        i++; //update
    }
}


// do while loop

//print 1 to 10

int main()
{
    int i=1;
    do{
        cout<<i<<" ";
        i++;
    }
    while(i<=10);
}



//sum of n natural no

int main()
{
    int i=1 , n ;
    int sum =0;
    cout<<"Enter the no:";
    cin>>n;
    
    do
    {
        sum = sum+i;
        i++;
    } while (i<=n);

    cout<<"Sum of n is:"<<sum;
    
}


//Break statement

int main()
{
    int i =1 ;
    while(i<=10)
    {
        if(i==4)
        break;

        cout<<i<<" ";
        i++;
    }
}


// continue statement

int main()
{
    int i=1;
    while(i<=10)
    {
        if(i==4)
        {
            i++;
            continue;
        }
        
        cout<<i<<" ";
        i++;
    }
}


//continue


int main()
{
    for(int i=1;i<=10;i++)
    {
        if(i==4)
        continue;

        cout<<i<<" ";
    }
}


// Switch statement


int main()
{
    int i;
    cout<<"Enter the no:";
    cin>>i;

    switch(i)
    {
        case 1:
        cout<<"Rohit";
        break;

        case 2:
        cout<<"Mohit";
        break;

        // default is not mandatory
        default:
        cout<<"Sohit";
    }
}


// Scope of a variable


// 1st

int main()
{
    int n = 10;
    cout<<n;

    // can't declare same variable in same block
    int n=23;
    cout<<n;
}


// 2nd
int main()
{
    int n ;
    cin>>n;
    cout<<n;

    int i=1;
    if(i==1)
    {
       int  n=23;
        cout<<n;
    }

}


// HOME WORK //

//print all even no from 1 to n(inclusive)

int main()
{
    int i=1, n;
    cout<<"Enter the no:";
    cin>>n;

    while(i<=n)
    {
        if(i%2==0)
        {
            cout<<i<<endl;
        }
        i++;
    }
}


//print all even no from 1 to n(inclusive)

int main()
{
    int i =1, n;
    cout<<"Enter the no:";
    cin>>n;

    do
    {
        if(i%2==0)
        {
            cout<<i<<endl;
        }
        i++;
    }
    while(i<=n);
}


//factorial of a no using while loop

int main()
{
    int i=1 , n , fact=1;
    cout<<"Enter the no:";
    cin>>n;

    while(i<=n)
    {
        fact =fact*i;
        i++;
    }
    cout<<"Factorial of "<<n<<" is :"<<fact<<endl;
}


//factorial of a no using do while loop

int main()
{
   int i=1 , fact =1, n;
    cout<<"Enter the no:";
    cin>>n;
    
    do 
    {
        fact = fact*i;
        i++;
    }
    while(i<=n);
    
    cout<<"Factorial of "<<n<<" is: "<<fact<<endl;
}


//print no from 1 to n which are divisible by both 3 & 5(inclusive)

int main()
{
    int i =1,n;
    cout<<"Enter the no:";
    cin>>n;

    while(i<=n)
    {
        if(i%3==0 || i%5==0)
        {
            cout<<i<<endl;
        }
        i++;
    }
}

// Given a number n, print all the numbers from 1 to n(inclusive) which
 // are not divisible by 3 and 5.(use Continue here).

 int main()
{
    int i=1, n;
    cout<<"Enter no:";
    cin>>n;

    while(i<=n)
    {
        if(i%3==0 || i%5==0)
        {
            i++;
            continue;
        }
        else
        {
            cout<<i<<" ";
        }
        i++;
    }
}


// print months using switch if n=1 jan etc

int main()
{
    int n;
    cout<<"Enter the no:";
    cin>>n;

    switch(n)
    {
        case 1:
        cout<<"Jan";
        break;

        case 2:
        cout<<"Feb";
        break;

        case 3:
        cout<<"mar";
        break;

        case 4:
        cout<<"april";
        break;

        case 5:
        cout<<"may";
        break;

        case 6:
        cout<<"june";
        break;

        case 7:
        cout<<"july";
        break;

        case 8:
        cout<<"Aug";
        break;

        case 9:
        cout<<"Sept";
        break;

        case 10:
        cout<<"oct";
        break;

        case 11:
        cout<<"nov";
        break;

        case 12:
        cout<<"dec";
        break;

    }
}


//Print all the Capital and small letters  using a while loop. It means A-Z, then a-z.

int main()
{
    char name ;
    for(name='A';name<='Z';name++)
    {
        cout<<name<<" ";
    }

        char n ;
    for(n='a';n<='z';n++)
    {
        cout<<n<<" ";
    }
}


// Give a number n, find if it is prime or not, use a while loop and break here to solve it.

int main()
{
    int n ;
    cout<<"Enter the no:";
    cin>>n;

    if(n<2)
    {
        cout<<"Not a prime no:";
        return 0;
    }

    int div =2;
    while (div<n)
    {
        if(n%div==0)
        {
            cout<<"Not a prime no";
            return 0;
        }
        div++;
    }
    cout<<"Given no is a prime no";
}