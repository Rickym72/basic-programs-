#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <string>
#include<algorithm>
#include<cmath>
#include "Stock.h"
#include "StackOfIntegers.h"
using namespace std;

void Prog10_1();
void Prog10_2();
void Prog10_4();
void Prog10_5();
void Prog10_6();
void Prog10_7();
void Prog10_10();
void Prog10_12();
void Prog10_16();
////////10_05
bool isPalindrome(const string& s);
///////////

///////////
bool isAnagram(const string s1, const string s2)
{
	// variable  dec 
	int str1;
	int str2;
	int count;
	count = 0;

	bool isAnagram = true;

	// define the size 

	str1 = s1.size();

	str2 = s2.size();

	// compare both the strings 

	if (str1 != str2)
	{
		cout << "\n The strings are not anagram" << endl;
		return 0;
	}

	for (int i = str2 - 1; i >= 0; i--)
	{
		if (s1[count] != s2[i])
		{
			count++;

			continue;
		}
		else
		{
			// display message
			cout << "\nSorry, not an anagram" << endl;
			isAnagram = false;

			return 0;
		}// endl loop

		if (isAnagram)
		{
			// display out put
			cout << "\nAnagrams" << endl;

		}
	}
}
/////////// 10_01

/////////// 10_14-16
///////////////

/////////// 10_06
int countLetters(const string& s)
{
	int count = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (isalpha(s[i])) count++;
	}

	return count;
}

/////////////

bool inString(char ch, const string& s)
{
	for (unsigned i = 0; i < s.size(); i++)
		if (s[i] == ch)
			return true;

	return false;
}

string commonChars(const string& s1, const string& s2)
{
	string result;

	for (unsigned i = 0; i < s1.size(); i++)
		if (inString(s1[i], s2) && !inString(s1[i], result))
			result += s1[i];

	return result;
}

///////Prog 10_14
bool isPrime(int number)
{
	// Assume the number is prime
	bool isPrime = true;

	// Test if number is prime
	for (int divisor = 2; divisor <= number / 2; divisor++)
	{
		//If true, the number is not prime
		if (number % divisor == 0)
		{
			// Set isPrime to false, if the number is not prime
			isPrime = false;
			break; // Exit the for loop
		}
	}

	return isPrime;
}
/////////////

////// class for prog10_10
class MyInteger
{
private:
	int value;

public:
	int getValue() const
	{
		return value;
	}

	MyInteger(int value)
	{
		this->value = value;
	}

	bool isPrime() const
	{
		return isPrime(value);
	}

	static bool isPrime(const MyInteger& o)
	{
		return isPrime(o.getValue());
	}

	static bool isPrime(int num)
	{
		if ((num == 1) || (num == 2))
		{
			return true;
		}

		for (int i = 2; i <= num / 2; i++)
		{
			if (num % i == 0)
				return false;
		}

		return true;
	}

	bool isEven() const
	{
		return isEven(value);
	}

	static bool isEven(int n)
	{
		return n % 2 == 0;
	}

	static bool isEven(const MyInteger& n)
	{
		return isEven(n.getValue());
	}

	bool equals(int anotherNum) const
	{
		return value == anotherNum;
	}

	bool equals(const MyInteger& o) const
	{
		return value == o.getValue();
	}
};
////////////////

///////////////
void count(string &s, int[], int);
//////////10_07

int main()

{
	while (true)
	{
		system("cls");
		cout << "\nMain Menu - Chapter 10\n";
		cout << "==================================\n";
		cout << "    1: Programming Exercise 10.1\n";
		cout << "    2: Programming Exercise 10.2\n";
		cout << "    4: Programming Exercise 10.4\n";
		cout << "    5: Programming Exercise 10.5\n";
		cout << "    6: Programming Exercise 10.6\n";
		cout << "    7: Programming Exercise 10.7\n";
		cout << "   10: Programming Exercise 10.10\n";
		cout << "   12: Programming Exercise 10.12\n";
		cout << "   14: Programming Exercise 10.14\n";
		cout << "   16: Programming Exercise 10.16\n";
		cout << "other: Exit\n";
		cout << "==================================\n";
		cout << "Enter an exercise: ";
		char exercise[2];
		cin >> exercise;
		cout << endl;

		switch (atoi(exercise))
		{
		case 1: Prog10_1(); break;
		case 2: Prog10_2(); break;
		case 4: Prog10_4(); break;
		case 5: Prog10_5(); break;
		case 6: Prog10_6(); break;
		case 7: Prog10_7(); break;
		case 10: Prog10_10(); break;
		case 12: Prog10_12(); break;
		case 14: Prog10_14(); break;
		case 16: Prog10_16(); break;
		default: exit(0);
		}
		cout << endl;
		system("pause");
		cin.clear();
	}
	return 0;
}

void Prog10_01()
{
	// declare the variables 
	string i1;

	string i2;
	// read the input for string1 and string 2	
	// display the output
	cout << "Enter a string s1: " << endl;
	cin >> i1;
	cout << "\nEnter a string s2: " << endl;
	cin >> i2;
	// invoke the func 
	isAnagram(i1, i2);

	system("pause");

}
void Prog10_02()
{
	// Prompt the user to enter two strings
	cout << "Enter a string s1: ";
	string s1;
	getline(cin, s1);

	// Prompt the user to enter two strings
	cout << "Enter a string s2: ";
	string s2;
	getline(cin, s2);

	string commonCharacters = commonChars(s1, s2);
	if (commonCharacters.size() == 0)
		cout << "No common characters" << endl;
	else
		cout << "The common characters are " << commonCharacters << endl;

}
void Prog10_04()
{
	// Prompt the user to enter a string
	cout << "Enter a string s: ";
	string s;
	getline(cin, s);

	cout << "The sorted string is " << sort(s) << endl;

}
void Prog10_05()
{
	// declaring string variable 
	string s;
	cout << "Enter a string: ";

	// get string input

	getline(cin, s);

	bool Palindrom = isPalindrome(s);

	//prints if the string is palidrome or not 

	if (Palindrome)
	{

		cout << s << "is a palindrome " << endl;
	}
	else
	{
		cout << s << "isn't a palindrom" << endl;
	}
		system("pause");
}
void Prog10_06()
{
	cout << "Enter a string: ";
	string s;
	getline(cin, s);

	cout << "The number of letters in " << s << " is " << countLetters(s) << endl;

}
void Prog10_07() 
{
	// 's' string is declared
	std::string s;
	int counts[26] = { 0 };

	cout << "Enter a string";

	getline(cin, s); //  accept the string with blanks

	int size = s.length(); // finds the length of the string 's'
	count(s, counts, size);

	system("pause");

}
void Prog10_10()
{
	MyInteger n1(5);
	cout << "n1 is even? " << n1.isEven() << endl;
	cout << "n1 is prime? " << n1.isPrime() << endl;
	cout << "5 is prime? " << MyInteger::isPrime(5) << endl;
}
void Prog10_12()
{
	Stock stock("MSFT", "Microsoft Coorporations");
	stock.setPreviousClosingPrice(27.5);

	// Set current price
	stock.setCurrentPrice(27.6);

	// Display stock info
	cout << "Previous Closing Price: " <<
		stock.getPreviousClosingPrice() << endl;
	cout << "Current Price: " <<
		stock.getCurrentPrice() << endl;
	cout << "Percentage Change: " <<
		stock.getChangePercent() << endl;

}
void Prog10_14()
{
	const int LIMIT = 120;
	int count = 0;
	StackOfIntegers stack;

	// Repeatedly find prime numbers
	for (int number = 2; number < LIMIT; number++)
		if (isPrime(number))
		{
			stack.push(number);
			count++; // Increase the prime number count
		}

	// Print the first 30 prime numbers in decreasing order
	cout << "The prime numbers less than 120 are \n" << endl;
	const int NUMBER_PER_LINE = 10;

	while (!stack.isEmpty())
	{
		cout << stack.pop() << " ";

		if (stack.getSize() % NUMBER_PER_LINE == 0)
			cout << endl; // advance to the new line
	}
}
void Prog10_16()
{

	StackOfIntegers stack;

	// Prompt the user to enter an integer
	cout << "Enter an integer: ";
	int number;
	cin >> number;

	// Find and store all the smallest factors of the integer
	int factor = 2;
	while (factor <= number)
	{
		if (number % factor == 0)
		{
			number = number / factor;
			stack.push(factor);
		}
		else
		{
			factor++;
		}
	}

	// Display factors
	cout << "The factors for " << number << " is ";
	while (!stack.isEmpty())
	{
		cout << stack.pop() << " ";
	}
}

bool isPalindrom(const string& s)
{
	bool Palindrome = true;

	// for loop, loops equal to the length of str

	for (int i = 0; i < s.length(); i++)
	{
		if (toupper(s[i]) != toupper(s[s.length() - 1 - i]))
		{
			Palindrome = false;
		}
		else
		{
			Palindrome;

		}
		
	}
	return Palindrome;

}
void count(std::string &s, int counts[26], int len)
{
	int i = 0;
	//traverse the string from first to last char 

	while (s[i] != '\0')
	{
		// if chars isupper then converts into lower 

		if (s[i] >= 'a' && s[i] <= 'z')
			counts[s[i] - 'a']++;
		i++;
	}
	for (int c = 0; c < 26; c++)
	{
		if (counts[c] != 0)
			cout << char(c + 'a') << " occurs " << counts[c] << "times" << endl;

	}
}