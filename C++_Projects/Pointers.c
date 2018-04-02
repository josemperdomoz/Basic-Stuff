#include <iostream>
#include <cctype>

using namespace std;

void squareByPtr(int *numPtr){
  *numPtr = *numPtr * *numPtr;
}

char PrintChloe(char Chloe[], char current){
  for(int i=0; current != '\0';i++)
    char current = Chloe[i];
    if(ispunct(current))
      cout << ' ';
    else
      cout << current;
}

int main(int argc, char** argv){
  long arr [] = {6 , 0, 9, 6};
  long *ptr2 = arr;
  int length = 13;
  //Char * Strings
  char Chloe[] = {'C','h', 'l', 'o','e', '.','V', 'e', 's', 'i','e' ,'r', '\0'} ;
  char *ptrc = Chloe + 4;
  *ptrc = 't';
  cout << Chloe[4] << endl;
  char current = Chloe[0];
  PrintChloe(Chloe, current);
  // Pointer-Array Arithmetics ;)
  ptr2 = ptr2 + 1;
  long *ptr3 = arr + 3;
  int z = ptr3 - ptr2;
  cout << *ptr2 << endl;
  cout << *ptr3 << endl;
  cout << z << endl;
  int x = 5;
  int y = 12314;
  int *ptr = &y;
  squareByPtr(&x);
  cout << x << endl;
  *ptr = 6;
  cout << y << endl;
}
