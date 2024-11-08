#include<iostream>
using namespace std;

// // star pattern 5x5
// int main()
// {
//     int i;
//     for(i=1;i<=5;i++)
//     {
//         cout<<"*"<<" ";
//     }
//     cout<<endl;
//      for(i=1;i<=5;i++)
//     {
//         cout<<"*"<<" ";
//     }
//     cout<<endl;
//      for(i=1;i<=5;i++)
//     {
//         cout<<"*"<<" ";
//     }
//     cout<<endl; 
// }

// as we can see this is a very long method , so we can use nested loops.

// // star pattern 5x5
// int main()
// {
//     int row ,col;
//     for(row=1;row<=5;row++)
//     {
//         for(col=1;col<=5;col++)
//         {
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }


// // "10" pattern 4x5
// int main()
// {
//     int row, col;
//     for(row=1;row<=4;row++)
//     {
//         for(col=1;col<=5;col++)
//         {
//             cout<<"10"<<" ";
//         }
//         cout<<endl;
//     }
// }



// // 1 1 1 
// // 2 2 2
// // 3 3 3 

// int main()
// {
//     int row,col;
//     for(row=1;row<=3;row++)
//     {
//         for(col=1;col<=3;col++)
//         {
//             cout<<row<<" ";
//         }
//         cout<<endl;
//     }
// }


// // 1 2 3 4 5
// // 1 2 3 4 5
// // 1 2 3 4 5
// // 1 2 3 4 5
// // 1 2 3 4 5

// int main()
// {
//     int row,col;
//     for(row=1;row<=5;row++)
//     {
//         for(col=1;col<=5;col++)
//         {
//             cout<<col<<" " ;
//         }
//         cout<<endl;
//     }
// }


// // 5 4 3 2 1
// // 5 4 3 2 1
// // 5 4 3 2 1
// // 5 4 3 2 1
// // 5 4 3 2 1

// int main()
// {
//     int row,col;
//     for(row=1;row<=5;row++)
//     {
//         for(col=1;col<=5;col++)
//         {
//             cout<<5-col+1<<" ";
//         }
//         cout<<endl;
//     }
// }


// // 1 4 9 16 25 
// // 1 4 9 16 25 
// // 1 4 9 16 25 
// // 1 4 9 16 25 
// // 1 4 9 16 25 


// int main()
// {
//     int row , col;
//     for(row=1;row<=5;row++)
//     {
//         for(col=1;col<=5;col++)
//         {
//             cout<<col*col<<" ";
//         }
//         cout<<endl;
//     }
// }


// // a a a a a
// // b b b b b 
// // c c c c c
// // d d d d d
// // e e e e e

// int main()
// {
//     int row ,col;
//     for(row=1;row<=5;row++)
//     {
//         for(col=1;col<=5;col++)
//         {
//             char name = 'a' + row - 1;
//             cout<<name<<" ";
//         }
//         cout<<endl;
//     }
// }


// // a a a a a
// // b b b b b 
// // c c c c c
// // d d d d d
// // e e e e e


// int main()
// {
//     char row ;
//     int col;
//     for(row='a';row<='e';row++)
//     {
//         for(col=1;col<=5;col++)
//         {
//             cout<<row<<" ";
//         }
//         cout<<endl;
//     }
// }



// // a b c d e 
// // a b c d e 
// // a b c d e 
// // a b c d e 
// // a b c d e 

// int main()
// {
//     int row , col;
//     for(row=1;row<=5;row++)
//     {
//         for(col=1;col<=5;col++)
//         {
//             char name = 'a' + col - 1;
//             cout<<name<<" ";
//         }
//         cout<<endl;
//     }
// }



// // 1 2 3 4 5
// // 6 7 8 9 10
// // 11 12 13 14 15 
// // 16 17 18 19 20
// // 21 22 23 24 25


// int main()
// {
//     int row , col;
//     int count =1;
//     for(row=1;row<=5;row++)
//     {
//         for(col=1;col<=5;col++)
//         {
//             cout<<count<<" ";
//             count++;
//         }
//         cout<<endl;
//     }
// }


// // 1 2 3 4 5
// // 6 7 8 9 10
// // 11 12 13 14 15 
// // 16 17 18 19 20
// // 21 22 23 24 25


// int main()
// {
//     int row , col;
//     for(row=1 ;row<=5;row++)
//     {
//         for(col=5*row -5 +1;col<=5*row -5+5;col++)
//         {
//             cout<<col<<" ";
//         }
//         cout<<endl;
//     }
// }


// // 1 2 3 4 5
// // 6 7 8 9 10
// // 11 12 13 14 15 
// // 16 17 18 19 20
// // 21 22 23 24 25


// int main()
// {
//     int row,col;
//     for(row=1;row<=5;row++)
//     {
//         for(col=1;col<=5;col++)
//         {
//             cout<<5*(row-1)+col<<" ";
//         }
//         cout<<endl;
//     }
// }



// HOME WORK //

 
//  //    4 4 4 4 4 4
//  //    4 4 4 4 4 4
//  //    4 4 4 4 4 4  
//  //    4 4 4 4 4 4
//  //    4 4 4 4 4 4 

// int main()
// {
//     int row ,col;
//     for(row=1;row<=5;row++)
//     {
//         for(col=1;col<=6;col++)
//         {
//             cout<<"4"<<" ";
//         }
//         cout<<endl;
//     }
// }


// // F G H I J K  
// // F G H I J K
// // F G H I J K
// // F G H I J K
// // F G H I J K


// int main()
// {
//     int row ,col;
//     for(row=1;row<=5;row++)
//     {
//         for(col=1;col<=6;col++)
//         {
//             char name = 'F'+col-1;
//             cout<<name<<" ";
//         }
//         cout<<endl;
//     }
// }