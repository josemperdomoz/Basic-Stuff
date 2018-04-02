#include <iostream>

using namespace std;

class Vehicle {
protected :
  string license;
  int year;

public:
  Vehicle(const string &myLicense, const int myYear) :  license(myLicense) , year(myYear) {  }
// In the upper line what you pretend to do is initiliazing some variables before the body function
// in the form dataMember(initialValue)
  virtual const string getDesc() const {
    return license + " from " ;// stringify(year);
    }
  const string &getLicense() const {
    return license;
    }
  const int getYear() const {
    return year;
    }
};

// Inheritance in C++

class Car : public Vehicle {  // Make Car inherit from Vehicle
  string style;


public:
      Car(const string &myLicense, const int myYear, const string &myStyle)
      : Vehicle(myLicense, myYear) , style(myStyle) {} // in Java you would use super(myLicense, myYear), but instead here you use member initializer syntax to call base-class constructor.
      const string getDesc() {
        return /*stringify(myYear)*/  "Style: " + style + "License: " + license;
      } // Overriding this member function. / You just put the name, and you will overwride the function, when you want to act on instances of Car.
      const string &getStyle() {
        return style;
      }

};

class Truck : public Vehicle {
  string size;

public:
      Truck(const string &myLicense, const int myYear, const string &mySize)
      : Vehicle(myLicense, myYear) , size(mySize) {}
      const string getDesc() {
        return  "License:" + license + " , " + "Size: " + size;
      }
      const string &getSize() {
        return size;
      }


};


  int main() {
    Truck Tacoma("7hsd2", 2017, "BIG");
    cout << Tacoma.getDesc() << endl;
    cout << Tacoma.getSize() << endl;
    Car Corolla("8hfj4" , 2015 , "Sedan");
    Car C("8hfj4F3", 2003,"VANITY");
    Car *vPtr = &C;
    cout <<  vPtr -> getDesc() << endl;
  }

  /* (The -> notation on line 3 just dereferences and gets a member. ptr->member is equivalent to (*ptr).member.) */
