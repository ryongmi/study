#include<iostream>
using namespace std;

int main(void)
{
 char str[50];
 int cnt = 0;
 while(1)
 {
  char ch;
  cin.get(ch);
  if (ch == '\n')
   break;
  str[cnt] = ch;
  cnt += 1;
 }

 return 0;
}


