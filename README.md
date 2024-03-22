# lettersToDigits
This program takes any capital letter from the english alphabet and converts it to the corresponding digit of old school telephones

This assignment consists of two parts in which you will solve the same problem but using two different control 
structures.
Part A: Solves the problem using complex conditional expressions
In this first part of the lab you will practice using if statements with complex conditions to perform decision 
making. First you will review a program that demonstrates the use of if statements with complex conditions, 
then you will write your own C++ code to practice this skill

Problem: Suppose you are asked to write a program that displays the corresponding telephone digit for a given 
letter. The user must enter the letter in upper case and a function returns the corresponding digit as a character. 
If an invalid value is entered (a lower-case letter or a nonalphabetical character) the program displays an error 
message.
The letters and digits on a telephone are grouped this way:
2 = ABC 4 = GHI 6 = MNO 8 = TUV
3 = DEF 5 = JKL 7 = PQRS 9 = WXYZ

Algorithm solution (in pseudocode):

To solve this problem your program must perform the following tasks:
Declare a variable named letter to hold the letter entered by the user
Declare a variable named digit to hold the digit returned by the functions
Display the title "Converts a capital letter to a digit on the telephone"
Prompt the user to enter a single capital letter
Get the value from the keyboard and store it in the corresponding variable
Display "Solution A"
Call letter2digitA() to get the corresponding digit for the given letter and assign it digit
If there is a matching digit for the letter entered
Display the message "letter ", letter, " corresponds to digit ", digit, " on the telephone"
Otherwise
Display the message "there is no matching digit for the letter ", letter, " entered"
You must define a value-returning function named letter2digitA() that uses complex conditional expressions
1
in if-else statements to determine the letter to digit correlation.
This function receives a character. If the character corresponds to any capital letter of the English alphabet it 
returns the corresponding telephone digit as a character; otherwise, it returns character '?' to indicate that an 
invalid character has been entered.

Part B: Solves the problem using multi-branch if-else statements
Once you finished part A go over the example on the use of multi-branch if statements to write the car 
insurance premium program.
The carInsNested.cpp program provided illustrates the skills you are learning in this lab. Open it in your IDE, 
read and understand the code and finally run the program with different inputs to see how it works.
Once you understood this program solve the letter to digit problem using this type of structure.
You must define a value-returning function named letter2digitB() that uses multi-branch if-else statements2
to determine the letter to digit correlation.
This function receives a character. If the character corresponds to any capital letter of the English alphabet it 
returns the corresponding telephone digit as a character; otherwise, it returns character '?' to indicate that an 
invalid character has been entered.
Once you have defined this function add the steps shown below at the bottom of your program and implement 
them.
Display "Solution B"
Call letter2digitB() to get the corresponding digit for the given letter and assign it digit
If there is a matching digit for the letter entered
Display the message "letter ", letter, " corresponds to digit ", digit, " on the telephone"
Otherwise
Display the message "there is no matching digit for the letter ", letter, " entered"
