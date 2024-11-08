#include<iostream>
#include<cmath>
using namespace std;


//convert 'a' to 'A'

// Function to convert a lowercase character to uppercase
char convert(char name) {
    // Convert the character from lowercase to uppercase
    char ans = name - 'a' + 'A';
    return ans;
}

int main() {
    char name;

    // Take a character input from the user
    cin >> name;

    // Call the convert function and print the result
    cout << convert(name);

    return 0;
}


//Armstrong no ( 1st Method)

// Function to count the number of digits in a given number
int countdigit(int n) {
    int count = 0;

    // Loop to count each digit by dividing the number by 10
    while (n) {
        count++;
        n /= 10; // Remove the last digit
    }

    return count;
}

// Function to check if a number is an Armstrong number
int armstrong(int num, int digit) {
    int n = num;  // Store the original number in a temporary variable
    int ans = 0, rem;

    // Loop to calculate the sum of each digit raised to the power of 'digit'
    while (n) {
        rem = n % 10;          // Get the last digit
        n /= 10;               // Remove the last digit from n
        ans = ans + pow(rem, digit); // Add the last digit raised to the power of digit count
    }

    // Check if the computed sum is equal to the original number
    if (ans == num) {
        return 1; // Return 1 (true) if the number is an Armstrong number
    } else {
        return 0; // Return 0 (false) if not
    }
}

int main() {
    int num;
    cout << "n: "; // Prompt the user to enter a number
    cin >> num;

    // Count the digits of the input number
    int digit = countdigit(num);
    cout << "Number of digits: " << digit << endl;
    
    // Check if the number is an Armstrong number and print the result
    if (armstrong(num, digit)) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0; // Exit the program
}



// Armstrong no ( second Method)

Function to count the number of digits in a number
int countdigit(int n)
{
   int count = 0;
   while(n)
   {
      count++;
      n = n / 10;
   }
   return count;
}

// Function to calculate the power of an integer without using pow function
int intPow(int base, int exp)
{
   int result = 1;
   for(int i = 0; i < exp; i++)
   {
      result *= base;
   }
   return result;
}


// Function to check if a number is an Armstrong number
bool isArmstrong(int num, int digit)
{
   int n = num, ans = 0, rem;

   while(n)
   {
      rem = n % 10;
      n = n / 10;
      ans += intPow(rem, digit);
   }
   return ans == num;
}

int main()
{
   int num;
   cout << "Enter number: ";
   cin >> num;

   int digit = countdigit(num);
   if (isArmstrong(num, digit))
      cout << num << " is an Armstrong number." << endl;
   else
      cout << num << " is not an Armstrong number." << endl;

   return 0;
}




// // Trailing zeros

int factorial(int n)
{
    int f=1;
    for(int i =1 ;i<=n;i++)
    {
        f = f*i;
    }

    return f;
}

int trailingzeros(int fact)
{
    int n = fact, count=0, rem;

    while(n)
    {
        //rem
        rem = n%10;

        if(rem==0)
        {
            count++;
        }
        else
        {
            return count;
        }

        n = n/10;
    }
    return count;

}

int main()
{
    int n;
    cout<<"Enter no:";
    cin>>n;

   int fact = factorial(n);
   cout<<trailingzeros(fact);
}
