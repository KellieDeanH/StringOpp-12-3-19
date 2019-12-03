// StringOpps_ Henderson_ Dr_T 12-03-2019
// inspired by GeekForGeeks String Operations Page
// the power of the string library 

#include <iostream>
#include <string>
using namespace std; 

int main() 
{
  string str1("first string"); //string initalization 
  cout << str1 << endl; 
  string str2(str1); //initalize a new string based upon another string 
  cout << str2 << endl; 
  string str3(5, '#'); //print the # char to screen 5 times 
  cout << str3 << endl; 
  string str4(str1, 6, 6);//begin at index 6, 7th element 
                          //print from element 7 + 6 chars in str1
  cout << str4 << endl; 

  //cout << str4.length();  method call by value and by & reference   
  //cout << str4->length(); method call by pointer *

  //string initalization by iterator part of another string
  string str5(str2.begin(), str2.end() + 5); //Add 5 blanks spaces to str2 and create str5
  cout << str2.length() << endl; //12 initial chars in str2
  cout << str5.length() << endl ; //now 17 chars in str5
  cout << str5 << endl; 

  string str6 = str4; 

  cout << str4.length() << endl; 
  str4.clear(); //delete all chars in the string 
  cout << str4.length() << endl; 

  char ch = str6.at(2); //ch = str6[2]; 
  cout << ch << endl; //print the 3rd element in the string

  char chf = str6.front(); //chf = str6[0]; 
  char chb = str6.back(); //chb = str6[str6.length() - 1]; 
  cout << chf << " " << chb << endl; 

  //c_str // old school strings
  const char* charstr = str6.c_str(); 
  printf("%s\n", charstr); 
  
  //add an argument at the end of the string
  str6.append(" extension"); //str6 += " extension"; 

  str4.append(str6, 0, 6);
  cout << str4 << endl; //str4 has the first 6 chars of str6
  cout << str6 << endl; 

  /*future study see 
  C++ String Operations: https://repl.it/@TysonMcMillan/CPPStringOpperationsDrT
  */ 
  return 0; 
}