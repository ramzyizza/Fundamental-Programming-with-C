#include <iostream>
using namespace std;
// recursive function declaration with 3 parameters
string revPalindrome(int a, int b, string x);
// variable declaration
string word;       // contain words
int wordLength;    // determine the length of a string
int firstAlphabet; // value of the first index
int main()
{
    cout << "Enter a word to determine whether palindrome or not: ";
    getline(cin, word); // word defined by user assigned to word

    wordLength = word.length() - 1; // length - 1 will get the last index of a string
    firstAlphabet = 0;              // starting index of string

    cout << revPalindrome(firstAlphabet, wordLength, word); // recall the recursive function
}
string revPalindrome(int a, int b, string x)
{

    if (x[a] == x[b]) // check if each index has the same value respectively
        return "Palindrome!";
    else if (x[a] != x[b])
        return "Not Palindrome!"; // if not, therefore its not palindrome

    revPalindrome(a++, b--, x);
}