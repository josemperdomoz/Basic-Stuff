#include <iostream>
#include "string.h"

using namespace std;

class Integer {
public:
  int val;
  Integer(int val = 0){
    this->val = val; // shorthand for (*this).val
  }
  void setVal(int val){
    this->val = val;
  }
};

class Point {
public:
  int x, y;
  Point() {
  x=0;
  y=0;
  cout << "default constructor" << endl;
  }
  Point(int nx, int ny) {
    this->x=nx;
    this->y=ny;
    cout << "2-arg constructor" << endl;
  }
  ~Point(){
    cout << "destructor invoked" << endl;
  }
};

class IntegerArray {
public:
  int *data; //pointer to the first element
  int size;
  IntegerArray(int size) {
      data = new int[size]; // allocating memory for array (IntergerArray)
      this->size = size;
  }

  // this constructor is called when you want to copy the fields of an instance to the fields of another instance
  IntegerArray(IntegerArray &o){ // copy constructor to fix bugs lol ( If you deallocate an array by accident [ out of scopes ])
    data = new int[o.size];
    size = o.size;
    for (int i = 0; i < size; i++){
      data[i] = o.data[i];
    }
  }

  ~IntegerArray(){
    delete[] data; // De-allocate memory used by fields in destructor
  }
};



int *getPtrToFive(){
  int *x = new int; // allocates memory to variable x ( that won't be deallocated if it goes out of scope)
  *x = 5;
  return x;
}


int main(){
  int *p;
  for (int i = 0; i<3; i++){
    p = getPtrToFive();
    cout << *p <<endl;
    delete p;
  }
    // Allocating ARrays ( Storing values inputed by user)
  int numItems;
  cout << "how many items?";
  cin >> numItems;
  int *arr = new int[numItems]; // numItems --- number of Items to Allocate.
  for (int i = 0; i < numItems; i++){
    cout << " Enter Items" << i << " : ";
    cin >> arr[i];
  }
  for (int i = 0; i < numItems; i++){
    cout << arr[i] << " , ";
  }
  delete[] arr;

  if(true){
    Point q2;
  }
  //Point *q = new Point;
  //delete q;
  //Point *q1 = new Point(2,4);
  //delete q1;
  cout << "q2 out of scope" << endl;
  IntegerArray array1(2);
  //array1.size = 2;
  //array1.data = new int[array1.size]; // Memory Allocation for Array array1, can be moved to destructor
  array1.data[0] = 4;
  array1.data[1] = 5;
  for(int i=0; i < array1.size;i++){
    cout << to_string(array1.data[i]) << endl;
  }
  IntegerArray array2(2);
  array2.data[0]=4;
  array2.data[1]=2;
  if (true){
    IntegerArray array3 = array2;
  }

  cout <<  array2.data[0] << endl;
  //delete[] array1.data; // can be moved to destructor
}

/*
int main() {
  int *p = getPtrToFive();
  cout << *p << endl;
  delete p;
}
*/
