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


// Trailing Zeros

int main()
{
    int N;
    cin >> N;  // Input an integer N, representing the number for which we need to count trailing zeroes in its factorial
    int count = 0;  // Initialize the count of trailing zeroes to 0

    // Loop until N becomes less than 5
    while (N >= 5)
    {
        count = count + N / 5;  // Add the number of multiples of 5 in N to count
        N = N / 5;  // Reduce N by dividing it by 5 for the next iteration
    }

    cout << count << endl;  // Output the count of trailing zeroes
}



// No Of Bishop Moves

int main()
{
    int A, B;  // Variables to store the row and column position of the bishop
    cout << "Enter the row value: ";
    cin >> A;  // Input row position

    cout << "Enter the column Value: ";
    cin >> B;  // Input column position

    int count = 0;  // Initialize count to store the number of valid moves for the bishop

    // Calculate the possible moves for the bishop in all four diagonal directions:
    count += min(8 - A, 8 - B);  // Top-right diagonal
    count += min(8 - A, B - 1);  // Top-left diagonal
    count += min(A - 1, B - 1);  // Bottom-left diagonal
    count += min(A - 1, 8 - B);  // Bottom-right diagonal

    cout << "No of Bishop Moves: " << count << endl;  // Output the number of moves
}


// Nim Game 

int main()
{
    int n;
    cin>>n;

    if(n%4==0)
    return 0;
    else
    return 1;
}


// Home Work //

// Distribute in a circle

int findPosition(int A, int B, int C) {
    int position = (C + A - 1) % B;  // Calculate the final position using modulo

    // If the result is 0, it means the position wraps to the last spot (B), so set it to B.
    if (position == 0) {
        position = B;
    }
    
    return position;
}

int main() {
    int A, B, C;
    
    cout << "Enter the number of items to deliver (A): ";
    cin >> A;
    
    cout << "Enter the size of the circle (B): ";
    cin >> B;
    
    cout << "Enter the starting position (C): ";
    cin >> C;
    
    int result = findPosition(A, B, C);
    cout << "The position where the " << A << "th item will be delivered is: " << result << endl;

    return 0;
}


// Number of 1 Bits ( My first method)
// This doesn't work in big no's .

int main()
{

    int n;
    cin>>n;
    
            if(n<=0)
        {
            return 0;
        }
        
        long long int rem, ans=0, mul=1;
        
        while(n)
        {
            //rem
            rem = n%2;
            //n
            n/=2;
            //ans
            ans=rem*mul+ans;
            //mul
            mul=mul*10;
        }
        
        long long int binary = ans, count=0;
        
        while(binary)
        {
            //rem
            rem = binary%10;
            //n
            binary = binary/10;
            //if 
            if(rem==1)
            {
                count++;
            }
        }
        
        cout<< count;
}


// Number of 1 bits (Best method)

int main()
{
    int n;
    cin>>n;

       if (n <= 0) {
        return 0;
    }

    int count = 0;
    while (n) {
        // Check if the least significant bit is 1
        if (n & 1) {
            count++;
        }
        // Right shift `n` to check the next bit
        n >>= 1;
    }

    cout<<count;
}


// Bit Difference

// Function to count the number of set bits (1s) in an integer
int countSetBits(int n) {
    int count = 0;
    while (n) {
        count += n & 1;  // Check the least significant bit
        n >>= 1;          // Right shift n to process the next bit
    }
    return count;
}

int main() {
    int A, B;
    cin >> A >> B;

    // XOR A and B, then count the number of 1s in the result
    int result = A ^ B;
    int flips = countSetBits(result);

    cout << flips << endl;
    return 0;
}