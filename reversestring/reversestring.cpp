// reversestring.cpp : Defines the entry point for the console application.
//

#include <cstdlib>
#include <iostream>
#include <string>

void simpleReverse(std::string &input)
{
   char temp = ' ';
   int back = strlen(input.c_str()) - 1;
   for (int front = 0; front < back; ++front)
   {
      temp = input[front];
      input[front] = input[back];
      input[back] = temp;
      back--;
   }
}

std::string iteratorReverse(std::string &input)
{
   std::string temp;
   for (std::string::reverse_iterator revIter = input.rbegin(); revIter != input.rend(); ++revIter)
   {
      temp += *revIter;
   }
   return temp;
}


int main()
{
   std::string testString = "Let's reverse this string!";
   std::cout << testString << std::endl;

   std::reverse(testString.begin(), testString.end());
   std::cout << testString << std::endl;

   simpleReverse(testString);
   std::cout << testString << std::endl;

   testString = iteratorReverse(testString);
   std::cout << testString << std::endl;

   std::string revTestString(testString.rbegin(), testString.rend());
   std::cout << revTestString << std::endl;

   system("PAUSE");
    return 0;
}

