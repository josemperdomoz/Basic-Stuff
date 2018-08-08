#include <iostream>
#include <cctype>
#include "string.h"


using namespace std;

template  <typename T, typename U> // function template. To accept a lot of datatypes
T sum(const T a, const U b){
  return a+b;
}

// Class Templates are also possible

template <typename T>
class Point {
  private:
    T x;
    T y;

  public:
    Point(const T u, const T v): x(u), y(v) {} // constructor with member initializer syntax

    T getX() {
       return x;
     }
    T getY() {
       return y;
     }
};


template <typename T>
class Container {
  private:
    T elt;
  public:
    Container(T arg) : elt(arg) {}
    T inc() {
      return elt + 1;
    }
};


// Tuve que definir otra class template tailored para character types.
template<> // Creo que no le pones typename si es una primitive datatype
class Container <char> { // Class container implementation specifically tailored for char type.
  private:
    char elt;
  public:
    Container(const char arg) : elt(arg) {}
    char uppercase() {
      return toupper(elt);
    }

};


template <typename T, int N>
class ArrayContainer {
  private:
        T elts[N];
  public:
        T set(const int i, const T val){
          this->elts[i] = val;
        }
        T get(const int i){
          return elts[i];
        }
};


// You can set up default values for template parameters.
// template <typename T=int, int N=5> class ArrayContainer { ... }

// When you create an ArrayContainer using the default parameters by writing:
// ArrayConatiner<> identifier;


int main(){
    cout<< sum<int>(1,2) << endl;
    cout<< sum<float>(1.21,2.43)<<endl;
    //cout<< sum(1.21,2.43)<<endl;
    cout<< sum<float, int>(1.21,2)<<endl;
    Point<float> fpoint(2.5,3.5); // creating an instance of Point with class template syntax
    cout<< fpoint.getX() << " , " << fpoint.getY() << endl; // we use getters because you can only access the DataMember within Point Class
    Container<int> integercontainer(4);
    Container<char> charactercontainer('r'); // creating instances of Container . Character is ONLY ONE CHARACTER
    cout<< integercontainer.inc() << endl;
    cout<< charactercontainer.uppercase() << endl;
    ArrayContainer<int, 5> intac;
    ArrayContainer<float, 10> floatac;
    for(int i=0; i<10;i++){
        intac.set(2,3);
        intac.set(0,1);
        intac.set(1,4);
        intac.set(3,5);
        floatac.set(3,3.5);
        cout<< intac.get(2) << endl;
        cout<< floatac.get(3) << endl;
    }

    for(int i=0; i<10;i++){
      cout << to_string(intac.get(i)) << endl;
    }
    return 0;
}



//
