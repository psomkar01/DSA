#include<iostream>
using namespace std;

// *
// * *
// * *
// * * * *
// * * * * * 

int main()
{
    int row ,col;
    for(row=1;row<=5;row++)
    {
        for(col=1;col<=row;col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}



// 1 
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5


int main()
{
    int row ,col;
    for(row=1;row<=5;row++)
    {
        for(col=1;col<=row;col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
}


// 1 
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5

int main()
{
    int row,col;
    for(row=1;row<=5;row++)
    {
        for(col=1;col<=row;col++)
        {
            cout<<row<<" ";
        }
        cout<<endl;
    }
}


// 1 
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1

int main()
{
    int row,col;
    for(row=1;row<=5;row++)
    {
        for(col=row;col>=1;col--)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
}



// a 
// b b
// c c c
// d d d d
// e e e e e


int main()
{
    int row ,col;
    for(row=1;row<=5;row++)
    {
        for(col=1;col<=row;col++)
        {
            char name = 'a' + row -1;
            cout<<name<<" ";
        }
        cout<<endl;
    }
}


// * * * * * 
// * * * *
// * * *
// * *
// *


int main()
{
    int row,col;
    for(row=1;row<=5;row++)
    {
        for(col=1;col<=5-row+1;col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}


// 1 2 3 4 5 
// 1 2 3 4
// 1 2 3
// 1 2
// 1


int main()
{
    int row ,col;
    for(row=5;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
}


// 1 2 3 4 5 
// 1 2 3 4
// 1 2 3
// 1 2
// 1


int main()
{
    int row,col;
    for(row=1;row<=5;row++)
    {
        for(col=1;col<=5-row+1;col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
}



// 5 
// 5 4
// 5 4 3
// 5 4 3 2
// 5 4 3 2 1


int main()
{
    int row,col;
    for(row=1;row<=5;row++)
    {
        for(col=5;col>=5-row+1;col--)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
}


HOME WORK //


// 1 
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
// 1 2 3 4 5 6
// 1 2 3 4 5 6

// 1st method 

int main()
{
    int row,col;
    for(row=1;row<=7;row++)
    {
        for(col=1;col<=row;col++)
        {
            if(col==7)
            {
                cout<<" ";
            }
            else
            {
                cout<<col<<" ";
            }
        }
        cout<<endl;
    }
}

// 2nd method 

int main()
{
    for(int row=1;row<=7;row++)
    {
    // condition ? expression_if_true : expression_if_false;

       int limit = (row==7)?6:row;

        for(int col=1;col<=limit;col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
}


// A 
// A B
// A B C
// A B C D
// A B C D E


int main()
{
    int row,col;
    for(row=1;row<=5;row++)
    {
        for(col=1;col<=row;col++)
        {
            char name ='A'+col-1;
            cout<<name<<" ";
        }
        cout<<endl;
    }
}



// 10 
// 10 11
// 10 11 12
// 10 11 12 13
// 10 11 12 13 14
// 10 11 12 13 14 15


int main()
{
    int row,col;
    for(row=10;row<=15;row++)
    {
        for(col=10;col<=row;col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
}


// A B C D 
// A B C 
// A B 
// A 


int main()
{
    int row ,col;
    for(row=4;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            char name = 'A'+ col-1;
            cout<<name<<" ";
        }
        cout<<endl;
    }
}