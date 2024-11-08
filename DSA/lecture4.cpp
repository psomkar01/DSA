#include<iostream>
using namespace std;


// sum of two no
int main()
{
    int a , b;
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"Enter the value of b:";
    cin>>b;

    cout<<"Sum of a and b :"<<a+b;
}


// typecasting
int main()
{
    int a =72;
    char b ='a';
    b=a ;
    cout<<b;
}


//package question
int main()
{
    int package;
    cout<<"Enter the package:";
    cin>>package;

    if(package>10)
    {
        cout<<"Accepted";
    }
    else
    {
        cout<<"Rejected";
    }
}


//check student is fail or not
int main()
{
    int marks;
    cout<<"Enter the marks:";
    cin>>marks;

    if(marks>33)
    {
        cout<<"Pass";
    }
    else
    {
        cout<<"Fail";
    }
}


//check whether a is greater than b or not
int main()
{
    int a , b;
    cout<<"Enter your first no:";
    cin>>a;

    cout<<"Enter your second no:";
    cin>>b;

    if(a>b)
    {
        cout<<"a is greater than b";
    }
    else if(b>a)
    {
        cout<<"b is greater than a";
    }
    else
    {
        cout<<"a and b both are equal";
    }
}


//check whether given no is even or odd
int main()
{
    int num;
    cout<<"Enter the no:";
    cin>>num;

    if(num%2==0)
    {
        cout<<"Even no";
    }
    else
    {
        cout<<"Odd no";
    }
}

//check whether person is adult or not
int main()
{
    int age;
    cout<<"Enter the age";
    cin>>age;

    if(age>=18)
    {
        cout<<"Adult";
    }
    else
    {
        cout<<"Teenager";
    }
}


//whether given no is positive, neg or zero
int main()
{
    int num;
    cout<<"Enter the no:";
    cin>>num;

    if(num>0)
    {
        cout<<"positive no";
    }
    else if(num<0)
    {
        cout<<"negative no";
    }
    else
    {
        cout<<"zero";
    }
}

//given character is vowel or consonant
int main()
{
    char ch;
    cout<<"Enter the character:";
    cin>>ch;

    if(ch =='a')
    cout<<"vowel";
    else if (ch=='e')
    cout<<"vowel";
    else if (ch =='i')
    cout<<"vowel";
    else if(ch=='o')
    cout<<"vowel";
    else if(ch=='u')
    cout<<"vowel";
    else
    cout<<"consonat";
}

//print the week 
int main()
{
    int num;
    cout<<"Enter the no:";
    cin>>num;

    if(num==1)
    cout<<"Monday";
    else if(num==2)
    cout<<"Tuesday";
    else if(num==3)
    cout<<"wednesday";
    else if(num==4)
    cout<<"Thursday";
    else if(num==5)
    cout<<"Friday";
    else if(num==6)
    cout<<"Saturday";
    else if(num==7)
    cout<<"Sunday";
    else
    cout<<"Enter a valid day";
}


//For loops

//print coder army 5 times
int main()
{
    int i;
    for(i=1;i<=5;i++)
    {
        cout<<"coder army"<<endl;
    }
}


//print 1 to 5 
int main()
{
    int count;
    for(count=1;count<=5;count++)
    {
        cout<<count<<endl;
    }
}


//square of a no
int main()
{
    int num;
    cout<<"Enter the no:";
    cin>>num;

    for(int i=1;i<=num;i++)
    {
        cout<<i*i<<endl;
    }
}


//print even no from 1 to n
int main()
{
    int n;
    cout<<"Enter the no:";
    cin>>n;

     for(int i=2;i<=n;i=i+2)
     {
        cout<<i<<endl;
     }
}


///HOME WORK //

//print which no is greater and both no cant be same
int main()
{
    float num1, num2;
    cout<<"Enter the first no:";
    cin>>num1;

    cout<<"Enter the second no:";
    cin>>num2;

    if(num1==num2)
    {
        cout<<"Both no can't be same";
    }
    else if(num1>num2)
    {
        cout<<"num1 is greater than num2";
    }
    else
    {
        cout<<"num2 is greater than num1";
    }
}


//print the months of the year
int main()
{
    int n;
    cout<<"Enter the no:";
    cin>>n;

    if(n==1)
    cout<<"january";
    else if(n==2)
    cout<<"Febraury";
    else if(n==3)
    cout<<"march";
    else if(n==4)
    cout<<"april";
    else if(n==5)
    cout<<"may";
    else if(n==6)
    cout<<"june";
    else if(n==7)
    cout<<"july";
    else if(n==8)
    cout<<"august";
    else if(n==9)
    cout<<"september";
    else if(n==10)
    cout<<"october";
    else if(n==11)
    cout<<"november";
    else if(n==12)
    cout<<"december";
    else
    cout<<"print valid no";

}


//Ticket price calculator
int main()
{
    int age;
    cout<<"Enter the age of user:";
    cin>>age;

    if(age<12 || age>65)
    cout<<"yes";
    else
    cout<<"no";
}


//print india will win world cup 
int main()
{
    for(int i=1;i<=20;i++)
    {
        cout<<"India will win world cup 2023"<<endl;
    }
}

//print odd no from 1 to n 
int main()
{
    int n;
    cout<<"Enter the no:";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            cout<<i;
        }
    }
}


//print all no divisible by 4
int main()
{
    int n;
    cout<<"Enter the no:";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        if(i%4==0)
        {
            cout<<i<<endl;
        }
    }
}