 #include <iostream>
 #include "myLib.h"

 using namespace std;

int num;
int number;
int fibo;
double est;

int raiseToPower(int base, int exponent) {
      int result = 1;
      for (int i = 0; i < exponent; i = i + 1)
           result = result * base;
      return result;
}

int fibonacci(int n) {
  if (n == 0 || n == 1) {
        return 1;
  } else {
    return fibonacci(n-2) + fibonacci(n-1);
  }
}

void printNumberIfEven(int num) {
   if (num % 2 == 1) {
     cout << "odd number" << endl;
     return;
   }
   else
        cout << "even number; number is " << num << endl;
}

//int square(int z);

int cube(int x) {
   return x*square(x);
}

int square(int x) {
       return x*x;
}

double squareRoot(double num) {
     double low = 1.0;
     double high = num;
     double estimate;
     for (int i = 0; i < 30; i = i + 1) {
          estimate = (high + low) / 2;
          if (estimate*estimate > num) {
             double newHigh = estimate;
             high = newHigh;
          }else {
          double newLow = estimate;
          low = newLow;
          }
      }
      return estimate; // A
}

void increment(int &a) {
   a = a + 1;
    cout << "a in increment " << a << endl;
}

int divide(int numerator, int denominator, int &remainder ) {
  remainder = numerator % denominator;
  return numerator / denominator;
}

int main(){
 for(int x = 0; x < 4; x = x + 1) {
        for(int y = 0; y < 4; y = y + 1)
            cout << y;
        cout << '\n';
 }

cout << "Raising 3 to the power of 5" << endl;
int threetofive = raiseToPower(3,5);
int q = 3;
int numb = 14;
int den = 4;
int rem;
cout << threetofive << endl ;
cout << "Give me a Number" << endl;
cin >> num;
printNumberIfEven(num);
number = cube(num);
cout << number << endl;
fibo = fibonacci(num);
cout << fibo << endl;
est = squareRoot(num);
cout << est << endl;
increment(q);
cout << " q in main " << q << endl;
int result = divide(numb, den, rem);
cout << result << "*" << den << "+" << rem << "=" << numb << endl;
return 0;
}
