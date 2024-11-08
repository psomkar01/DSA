#include<iostream>
using namespace std;



//         *         
//       * * *       
//     * * * * *     
//   * * * * * * *   
// * * * * * * * * * 


int main()
{
    int row,col,n;
    cout<<"Enter the no:";
    cin>>n;

    for(row=1;row<=n;row++)
    {
        // space print
        for(col=1;col<=n-row;col++)
        {
            cout<<"  ";
        }

        // star print
        for(col=1;col<=2*row-1;col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}


//         1         
//       1 2 1       
//     1 2 3 2 1     
//   1 2 3 4 3 2 1   
// 1 2 3 4 5 4 3 2 1 


int main()
{
    int row ,col, n;
    cout<<"Enter the no:";
    cin>>n;

    for(row=1;row<=n;row++)
    {
        //space print
        for(col=1;col<=n-row;col++)
        {
            cout<<"  ";
        }

        //no print
        for(col=1;col<=row;col++)
        {
            cout<<col<<" ";
        }

        //no print
        for(col=row-1;col>=1;col--)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
}


// * * * * * * * * * 
//   * * * * * * *   
//     * * * * *     
//       * * *       
//         * 


int main()
{
    int row,col,n;
    cout<<"Enter the no:";
    cin>>n;

    for(row=1;row<=n;row++)
    {
        //space print
        for(col=1;col<=row-1;col++)
        {
            cout<<"  ";
        }

        //star print
        for(col=1;col<=2*n - 2*row + 1;col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}


// * * * * * * * * 
// * * *     * * *
// * *         * *
// *             *
// *             *
// * *         * *
// * * *     * * *
// * * * * * * * * 



int main()
{
    int row , col, n;
    cout<<"Enter the no:";
    cin>>n;

    for(row=1;row<=n;row++)
    {
        //star print
        for(col=1;col<=n-row+1;col++)
        cout<<"* ";

        //space print
        for(col=1;col<=2*row-2;col++)
        cout<<"  ";

        //star print
        for(col=1;col<=n-row+1;col++)
        cout<<"* ";

        cout<<endl;
    }
    for(row=1;row<=n;row++)
    {
        //star print
        for(col=1;col<=row;col++)
        cout<<"* ";

        //space print
        for(col=1;col<=2*n - 2*row;col++)
        cout<<"  ";

        //star print
        for(col=1;col<=row;col++)
        cout<<"* ";

        cout<<endl;
    }
}



// *             *
// * *         * *
// * * *     * * *
// * * * * * * * *
// * * *     * * *
// * *         * *
// *             *


int main()
{
    int row,col,n;
    cout<<"Enter the no:";
    cin>>n;

    for(row=1;row<=n;row++)
    {
        //star print
        for(col=1;col<=row;col++)
        cout<<"* ";

        //space print
        for(col=1;col<=2*n-2*row;col++)
        cout<<"  ";

        //star print
        for(col=1;col<=row;col++)
        cout<<"* ";

        cout<<endl;
    }

    for(row=1;row<=n-1;row++)
    {
        //star print
        for(col=1;col<=n-row;col++)
        cout<<"* ";

        //space print
        for(col=1;col<=2*row;col++)
        cout<<"  ";

        //star print
        for(col=1;col<=n-row;col++)
        cout<<"* ";

        cout<<endl;
    }
}


//    *
//   * *
//  * * *
// * * * *
// * * * *
//  * * *
//   * *
//    *


int main()
{
    int row,col, n;
    cout<<"Enter the no:";
    cin>>n;

    for(row=1;row<=n;row++)
    {
        //space print 
        for(col=1;col<=n-row;col++)
        cout<<" ";

        //star print
        for(col=1;col<=row;col++)
        cout<<"* ";

        cout<<endl;
    }

    for(row=1;row<=n;row++)
    {
        //space print
        for(col=1;col<=row-1;col++)
        cout<<" ";

        //star print
        for(col=1;col<=n-row+1;col++)
        cout<<"* ";

        cout<<endl;
    }
}


// HOME WORK //


//         1         
//       1 2 3       
//     1 2 3 4 5     
//   1 2 3 4 5 6 7   
// 1 2 3 4 5 6 7 8 9 


int main()
{
    int row ,col, n;
    cout<<"Enter the no:";
    cin>>n;

    for(row=1;row<=n;row++)
    {
        //space print 
        for(col=1;col<=n-row;col++)
        cout<<"  ";

        //no print
        for(col=1;col<=2*row-1;col++)
        cout<<col<<" ";
        
        cout<<endl;
    }
}



//Please look into this !!!

//         A 
//       A B A
//     A B C B A
//   A B C D C B A
// A B C D E D C B A


int main()
{
    int n, row, col;
    cout<<"no:";
    cin>>n;

    for(row=1;row<=n;row++)
    {
        //space print
        for(col=1;col<=n-row;col++)
        cout<<"  ";

        //char print
        for(col=1;col<=row;col++)
        {
            char name='A'+col-1;
            cout<<name<<" ";
        }

        //char print
        for(col=row-1;col>=1;col--)
        {
            char name='A'+col-1;
            cout<<name<<" ";
        }

        cout<<endl;
    }
}