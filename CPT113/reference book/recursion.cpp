#include <iostream>
#include <string>
using namespace std;

// ------------------------------------------------------------------------------
// count number of vowels in string
// ------------------------------------------------------------------------------

int vowels(string str) {
    if (str.empty())
        return 0;

    char currentChar = tolower(str[0]);

    int count = (currentChar == 'a' || currentChar == 'e' || currentChar == 'i' ||
                 currentChar == 'o' || currentChar == 'u') ? 1 : 0;

    return count + vowels(str.substr(1)); // slice string from first character onwards
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int count = vowels(input);
    cout << "Number of vowels: " << count << endl;

    return 0;
}

// ------------------------------------------------------------------------------
// returns the sum of the squares of the numbers 
// from 0 to num
// ------------------------------------------------------------------------------

// int sumSquares(int num) {
//     if (num == 0) {
//         return 0;
//     } else {
//         return num * num + sumSquares(num - 1);
//     }
// }

// int main() {
//     int num;
//     cout << "Enter a non-negative integer: ";
//     cin >> num;
//     cout << "The sum of the squares from 0 to " << num << " is " << sumSquares(num) << endl;
//     return 0;
// }

// ------------------------------------------------------------------------------
// returns the sum of the elements of an int array
// ------------------------------------------------------------------------------

// int sumArray(int arr[], int n) {
//     if (n == 0) {
//         return 0;
//     } else {
//         return arr[n-1] + sumArray(arr, n-1);
//     }
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     cout << "The sum of the elements in the array is " << sumArray(arr, n) << endl;
//     return 0;
// }

// ------------------------------------------------------------------------------
// returns both the smallest and the largest element in an int array.
// ------------------------------------------------------------------------------
// #include <climits>
// using namespace std;

// void minMax(int arr[], int n, int &min, int &max) {
//     if (n == 1) {
//         min = max = arr[0];
//     } else {
//         minMax(arr, n - 1, min, max);
//         if (arr[n - 1] < min) {
//             min = arr[n - 1];
//         }
//         if (arr[n - 1] > max) {
//             max = arr[n - 1];
//         }
//     }
// }

// int main() {
//     int arr[] = {3, 5, 1, 2, 4};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int min = arr[0], max = arr[0];
//     minMax(arr, n, min, max);
//     cout << "The smallest element in the array is " << min << endl;
//     cout << "The largest element in the array is " << max << endl;
//     return 0;
// }


// ------------------------------------------------------------------------------
// determining the number of ways to select a set of things from a given set of things.
// c(n,k) = 1 if k = 0
// c(n,k) = 1 if k = n
// c(n,k) = 0 if k > n
// c(n,k) = c(n-1,k-1) + c(n-1,k)
// ------------------------------------------------------------------------------

// int selection(int n, int k) {
//     if (k == 0 || k == n)
//         return 1;
//     if (k > n)
//         return 0;
//     return selection(n - 1, k - 1) + selection(n - 1, k);
// }

// int main() {
//     int n = 5, k = 2;
//     cout << "Value of C(" << n << ", " << k << ") is " << selection(n, k);
//     return 0;
// }


// ------------------------------------------------------------------------------
//    *
//   * *
//  * * *
// * * * *
//  * * *
//   * *
//    *
// prompts the user to enter the number of lines in the pattern
// ------------------------------------------------------------------------------

// void printPattern(int n, int i = 0, int spaces = 0) {
//     if (i == 2 * n)  // Base case: print pattern up to 2 * n lines
//         return;

//     if (i < n) {
//         // Print spaces
//         for (int j = 0; j < n - i - 1; j++)
//             cout << " ";

//         // Print asterisks
//         for (int j = 0; j < i + 1; j++)
//             cout << "* ";

//         cout << endl;
//     } else {
//         // Print spaces
//         for (int j = 0; j < i - n + 1; j++)
//             cout << " ";

//         // Print asterisks
//         for (int j = 0; j < 2 * n - i - 1; j++)
//             cout << "* ";

//         cout << endl;
//     }

//     printPattern(n, i + 1);
// }

// int main() {
//     int lines;
//     cout << "Enter the number of lines: ";
//     cin >> lines;

//     printPattern(lines);

//     return 0;
// }

// ------------------------------------------------------------------------------
// fibonacci
// ------------------------------------------------------------------------------

// int fibonacci(int n) {
//     return (n <= 1) ? n : fibonacci(n - 1) + fibonacci(n - 2);
// }

// int main() {
//     int num;
//     cout << "Enter the number of terms: ";
//     cin >> num;
    
//     cout << "Fibonacci sequence: ";
//     for (int i = 0; i < num; i++)
//         cout << fibonacci(i) << " ";
    
//     return 0;
// }

// ------------------------------------------------------------------------------
// gcd
// ------------------------------------------------------------------------------

// int gcd(int a, int b) {
//     return (b == 0) ? a : gcd(b, a % b);
// }

// int main() {
//     int num1, num2;
//     cout << "Enter two numbers: ";
//     cin >> num1 >> num2;

//     int result = gcd(num1, num2);
//     cout << "GCD: " << result << endl;

//     return 0;
// }

// ------------------------------------------------------------------------------

// Quick sort
// This program demonstrates the QuickSort Algorithm.
#include <iostream>
using namespace std;

// Function prototypes
void quickSort(int [], int, int);
int partition(int [], int, int);
void swap(int &, int &);

int main()
{
   const int SIZE = 10;  // Array size
   int count;            // Loop counter
   int array[SIZE] = {7, 3, 9, 2, 0, 1, 8, 4, 6, 5};

   // Display the array contents.
   for (count = 0; count < SIZE; count++)
      cout << array[count] << " ";
   cout << endl;
   
   // Sort the array.
   quickSort(array, 0, SIZE - 1);
   
   // Display the array contents.
   for (count = 0; count < SIZE; count++)
      cout << array[count] << " ";
   cout << endl;
   return 0;
}

//************************************************
// quickSort uses the quicksort algorithm to     *
// sort set, from set[start] through set[end].   *
//************************************************

void quickSort(int set[], int start, int end)
{
   int pivotPoint;

   if (start < end)
   {
      // Get the pivot point.
      pivotPoint = partition(set, start, end);
      // Sort the first sub list.
      quickSort(set, start, pivotPoint - 1);
      // Sort the second sub list.
      quickSort(set, pivotPoint + 1, end);
   }
}

//**********************************************************
// partition selects the value in the middle of the        *
// array set as the pivot. The list is rearranged so       *
// all the values less than the pivot are on its left      *
// and all the values greater than pivot are on its right. *
//**********************************************************

int partition(int set[], int start, int end)
{
   int pivotValue, pivotIndex, mid;

   mid = (start + end) / 2;
   swap(set[start], set[mid]);
   pivotIndex = start;
   pivotValue = set[start];
   for (int scan = start + 1; scan <= end; scan++)
   {
      if (set[scan] < pivotValue)
      {
         pivotIndex++;
         swap(set[pivotIndex], set[scan]);
      }
   }
   swap(set[start], set[pivotIndex]);
   return pivotIndex;
}

//**********************************************
// swap simply exchanges the contents of       *
// value1 and value2.                          *
//**********************************************

void swap(int &value1, int &value2)
{
   int temp = value1;

   value1 = value2;
   value2 = temp;
}
