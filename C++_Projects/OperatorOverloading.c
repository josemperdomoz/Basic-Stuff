#include <iostream>
#include "string.h"
using namespace std;


struct USCurrency {
        int dollars;
        int cents;


//ostream& operator<<(ostream &output, const USCurrency &o) {
  //output << "$" << o.dollars << "." << o.cents;
  //return output;
//}

USCurrency operator+(const USCurrency o) {
  USCurrency tmp = {0, 0};
  tmp.cents = dollars + o.cents;
  tmp.dollars = cents + o.dollars;
  if(tmp.cents >= 100) {
    tmp.dollars += 1;
    tmp.cents -= 100;
  }
  return tmp;
}
};

int main() {
  USCurrency a = {2, 50};
  USCurrency b = {1, 75};
  USCurrency c = a + b;
  //cout << c << endl;
  cout<< to_string(c.dollars) << " . " << to_string(c.cents) << " $ ";
  return 0;
}
