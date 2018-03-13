#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main() {
char messyString[] = "t6H0I9s6.iS.999a9.STRING";
char current = messyString[0];
for(int i = 0; current != '\0';i++){
    current = messyString[i];
    if(isalpha(current))
      cout << (char) (isupper(current) ? tolower(current) : current); // ternary operation
    else if(ispunct(current))
      cout << ' ';
}

cout << endl;

char fragment1[] = "I'm a s";
char fragment2[] = "tring!";
char fragment3[20];
char finalString[20] = "";
char fragmentf[40];


strcpy(fragment3, fragment1);
strcat(fragmentf, fragment3);
strcat(fragmentf, fragment2);
cout << fragmentf;

cout << endl;
return 0;
}
