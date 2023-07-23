#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{
char alfabeto[27];
int i;
for(i = 0; i < 26; i++) alfabeto[i] = 'a' + i;
alfabeto[26] = 0;
for(i = 0; alfabeto[i]; i++)
if (i % 2) alfabeto[i] = tolower(alfabeto[i]);
else alfabeto[i] = toupper(alfabeto[i]);
cout << alfabeto << endl;
for(i = 0; alfabeto[i]; i++)
if (isupper(alfabeto[i])) alfabeto[i] = tolower(alfabeto[i]);
else alfabeto[i] = toupper(alfabeto[i]);
cout << alfabeto << endl;
alfabeto[0] = 'A';
alfabeto[1] = 'B';
for(i=2; alfabeto[i]; i++)
if(isupper(alfabeto[i-2])) alfabeto[i] = tolower(alfabeto[i]);
else alfabeto[i] = toupper(alfabeto[i]);
cout << alfabeto << endl;
for (i = 0; alfabeto[i]; i++)
if (isupper(alfabeto[i])) alfabeto[i] = tolower(alfabeto[i]);
else alfabeto[i] = toupper(alfabeto[i]);
cout << alfabeto << endl;
return 0;
}
