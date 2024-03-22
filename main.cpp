/////////////////////////////////////////////////////////////////////
//
// Name: <Jonah Barrera>
// Due date:3/21/24
// Class: <CSCI 1470.04>
// Semester: <Spring 2024>
// CSCI 1470 Instructor: <Gustavo Dietrich>
//
// Using your own words describe below what the program does 
// Program Description: This program takes in a capital letter and converts it to a digit matching old school telephone numbers
//
/////////////////////////////////////////////////////////////////////

#include <iostream>				// to use cin and cout
#include <typeinfo>				// to be able to use operator typeid

// Include here the libraries and anything else that your program needs to compile

using namespace std;

// Ignore this; it's a little function used for making tests
inline void _test(const char* expression, const char* file, int line)
{
	cerr << "test(" << expression << ") failed in file " << file;
	cerr << ", line " << line << "." << endl << endl;
}
// This goes along with the above function...don't worry about it
#define test(EXPRESSION) ((EXPRESSION) ? (void)0 : _test(#EXPRESSION, __FILE__, __LINE__))

// Insert here the prototypes of the functions
char letter2digitA(char letter); 
char letter2digitB(char letter);

int main()
{
// declare a variable named letter to hold the letter entered by the user

    char letter;

// declare a variable named digit to hold the digit returned by the functions

    char digit;

// display the title "Converts a capital letter to a digit on the telephone"

    cout << "Converts a capital letter to a digit on the telephone" << endl;

// prompt the user to enter a single capital letter

    cout << "\nPlease enter a single capital letter: ";

// get the value from the keyboard and store it in the corresponding variable

    cin >> letter;

// display "Solution A"

    cout << "\nSolution A\n" << endl;

// call letter2digitA() to get the corresponding digit for the given letter and assign it digit

    digit = letter2digitA(letter);

// if there is a matching digit for the letter entered
//  display the message	"Letter ", letter, " corresponds to digit ", digit, " on the telephone"

    if (digit != '?') 
    {
        cout << "Letter " << letter << " corresponds to digit " << digit << " on the telephone" << endl;
    }

// otherwise
//  display the message "There is no matching digit for the letter ", letter, " entered"

    else 
    {
        cout << "There is no matching digit for the letter " << letter << " entered." << endl;
    }

// display "Solution B"

    cout << "\nSolution B\n" << endl;

// call letter2digitB() to get the corresponding digit for the given letter and assign it digit

    digit = letter2digitB(letter);

// if there is a matching digit for the letter entered
//  display the message	"Letter ", letter, " corresponds to digit ", digit, " on the telephone"

        if (digit != '?')
    {
        cout << "Letter " << letter  << " corresponds to digit " << digit << endl;
    }

// otherwise
//  display the message "There is no matching digit for the letter ", letter, " entered"

    else 
    {
        cout << "There is no matching digit for the letter " << letter << " entered.\n" << endl;
    }

// Do NOT remove or modify the following statements
	cout << endl << "Testing your solution" << endl << endl;

	test(letter2digitA('A') == '2');				// Incorrect letter to digit correlation
	test(letter2digitA('B') == '2');				// Incorrect letter to digit correlation
	test(letter2digitA('C') == '2');				// Incorrect letter to digit correlation
	test(letter2digitA('D') == '3');				// Incorrect letter to digit correlation
	test(letter2digitA('E') == '3');				// Incorrect letter to digit correlation
	test(letter2digitA('F') == '3');				// Incorrect letter to digit correlation
	test(letter2digitA('G') == '4');				// Incorrect letter to digit correlation
	test(letter2digitA('H') == '4');				// Incorrect letter to digit correlation
	test(letter2digitA('I') == '4');				// Incorrect letter to digit correlation
	test(letter2digitA('J') == '5');				// Incorrect letter to digit correlation
	test(letter2digitA('K') == '5');				// Incorrect letter to digit correlation
	test(letter2digitA('L') == '5');				// Incorrect letter to digit correlation
	test(letter2digitA('M') == '6');				// Incorrect letter to digit correlation
	test(letter2digitA('N') == '6');				// Incorrect letter to digit correlation
	test(letter2digitA('O') == '6');				// Incorrect letter to digit correlation
	test(letter2digitA('P') == '7');				// Incorrect letter to digit correlation
	test(letter2digitA('Q') == '7');				// Incorrect letter to digit correlation
	test(letter2digitA('R') == '7');				// Incorrect letter to digit correlation
	test(letter2digitA('S') == '7');				// Incorrect letter to digit correlation
	test(letter2digitA('T') == '8');				// Incorrect letter to digit correlation
	test(letter2digitA('U') == '8');				// Incorrect letter to digit correlation
	test(letter2digitA('V') == '8');				// Incorrect letter to digit correlation
	test(letter2digitA('W') == '9');				// Incorrect letter to digit correlation
	test(letter2digitA('X') == '9');				// Incorrect letter to digit correlation
	test(letter2digitA('Y') == '9');				// Incorrect letter to digit correlation
	test(letter2digitA('Z') == '9');				// Incorrect letter to digit correlation
	test(letter2digitA('a') == '?');				// Incorrect letter to digit correlation
	test(letter2digitA('#') == '?');				// Incorrect letter to digit correlation
	test(letter2digitA('1') == '?');				// Incorrect letter to digit correlation

	test(letter2digitB('A') == '2');				// Incorrect letter to digit correlation
	test(letter2digitB('B') == '2');				// Incorrect letter to digit correlation
	test(letter2digitB('C') == '2');				// Incorrect letter to digit correlation
	test(letter2digitB('D') == '3');				// Incorrect letter to digit correlation
	test(letter2digitB('E') == '3');				// Incorrect letter to digit correlation
	test(letter2digitB('F') == '3');				// Incorrect letter to digit correlation
	test(letter2digitB('G') == '4');				// Incorrect letter to digit correlation
	test(letter2digitB('H') == '4');				// Incorrect letter to digit correlation
	test(letter2digitB('I') == '4');				// Incorrect letter to digit correlation
	test(letter2digitB('J') == '5');				// Incorrect letter to digit correlation
	test(letter2digitB('K') == '5');				// Incorrect letter to digit correlation
	test(letter2digitB('L') == '5');				// Incorrect letter to digit correlation
	test(letter2digitB('M') == '6');				// Incorrect letter to digit correlation
	test(letter2digitB('N') == '6');				// Incorrect letter to digit correlation
	test(letter2digitB('O') == '6');				// Incorrect letter to digit correlation
	test(letter2digitB('P') == '7');				// Incorrect letter to digit correlation
	test(letter2digitB('Q') == '7');				// Incorrect letter to digit correlation
	test(letter2digitB('R') == '7');				// Incorrect letter to digit correlation
	test(letter2digitB('S') == '7');				// Incorrect letter to digit correlation
	test(letter2digitB('T') == '8');				// Incorrect letter to digit correlation
	test(letter2digitB('U') == '8');				// Incorrect letter to digit correlation
	test(letter2digitB('V') == '8');				// Incorrect letter to digit correlation
	test(letter2digitB('W') == '9');				// Incorrect letter to digit correlation
	test(letter2digitB('X') == '9');				// Incorrect letter to digit correlation
	test(letter2digitB('Y') == '9');				// Incorrect letter to digit correlation
	test(letter2digitB('Z') == '9');				// Incorrect letter to digit correlation
	test(letter2digitB('a') == '?');				// Incorrect letter to digit correlation
	test(letter2digitB('#') == '?');				// Incorrect letter to digit correlation
	test(letter2digitB('1') == '?');				// Incorrect letter to digit correlation

	return 0;                               // Indicate successful
}                                           //   completion


//************************  Function definition  *************************
// Read the handout carefully for detailed description of the functions that you have to implement

// This function receives a character. If the character corresponds to any capital letter of the English
// alphabet it returns the corresponding telephone digit as a character; otherwise, it returns character
// '?' to indicate that an invalid character has been entered.
// 
// This function uses COMPLEX CONDITIONAL EXPRESSIONS to determine the matching digit for the letter entered
// Works with RANGE of letters to determine the digit
char letter2digitA(char letter) 
{
    return (letter >= 'A' && letter <= 'C') ? '2' :
    
        (letter >= 'D' && letter <= 'F') ? '3' :
       
        (letter >= 'G' && letter <= 'I') ? '4' :
       
        (letter >= 'J' && letter <= 'L') ? '5' :
       
        (letter >= 'M' && letter <= 'O') ? '6' :
       
        (letter >= 'P' && letter <= 'S') ? '7' :
       
        (letter >= 'T' && letter <= 'V') ? '8' :
       
        (letter >= 'W' && letter <= 'Z') ? '9' : '?';
}
// This function receives a character. If the character corresponds to any capital letter of the English
// alphabet it returns the corresponding telephone digit as a character; otherwise, it returns character
// '?' to indicate that an invalid character has been entered.
//
// This function uses MULTI-BRANCH IF-ELSE STATEMENTS to determine the matching digit for the letter entered
// Works with RANGE of letters to determine the digit
char letter2digitB(char letter) 
{
    if (letter >= 'A' && letter <= 'C')
    {
        return '2';
    }
    else if (letter >= 'D' && letter <= 'F') 
    {
        return '3';
    }
    else if (letter >= 'G' && letter <= 'I') 
    {
       return '4';
    }
    else if (letter >= 'J' && letter <= 'L') 
    {
        return '5';
    }
    else if (letter >= 'M' && letter <= 'O') 
    {
        return '6';
    }
    else if (letter >= 'P' && letter <= 'S') 
    {
        return '7';
    }
    else if (letter >= 'T' && letter <= 'V') 
    {
        return '8';
    }
    else if (letter >= 'W' && letter <= 'Z') 
    {
        return '9';
    } 
    else 
    {
       return '?';
    }
}
