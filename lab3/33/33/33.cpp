// 33.cpp: определяет точку входа для консольного приложения.
#include "stdafx.h"
#include <iostream>
#include <stack>
#include <string>
#include <windows.h> //SetConsoleCP(1251); SetConsoleOutputCP(1251); 
bool is_correct( const std::string& str)
{
std::stack < char > stack;
for (int i = 0; i < (int) str.length(); ++i)
    {
     if (str[i] == '(' || str[i] == '{' || str[i] == '[' )
     {
stack.push(str[i] );
     }
else if ( str[i] == ')' || str[i] == '}' || str[i] == ']' )
     {
 if
 (stack.empty() || ( (str[i] == ')') ^ (stack.top() == '(') )|| 
 ((str[i] == '}') ^ (stack.top() == '{') ) || ( (str[i] == ']') ^ (stack.top() == '['))  
            )
            {
                return false;
            }
            stack.pop();
        }
    }
return stack.empty();
}
int _tmain(int argc, _TCHAR* argv[])
{SetConsoleCP(1251); SetConsoleOutputCP(1251);
std::string str;
std::cin >> str;
int skobki = (int)is_correct(str);
if (skobki == 1) std::cout << "Скобки сбалансированы. \n";
else (std::cout << "Скобки несбалансированы. \n");
system("pause");
return 0;}