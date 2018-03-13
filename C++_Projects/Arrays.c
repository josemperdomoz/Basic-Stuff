 #include <iostream>
 using namespace std;


// Passing an array as an argument
int sum(const int array[], const int length) {
  long sum = 0;
  for(int i = 0; i < length;i++) // it will finish the loop first
      sum = sum + array[i];
      return sum;
}


 int main() {

 // Populating an array with input data
 int arr[4];
 int array[] = {1, 2, 3, 4, 5, 6, 7};
 cout << "Sum: " << sum(array,7) << endl;

 cout << "Please enter 4 integers:" << endl;

// for(int i = 0; i < 4; i++)
//    cin >> arr[i];
// cout << " Values of the array are ";

// for(int i = 0; i < 4; i=i+1){
//    if(i==0)
//    cout << arr[i];
//    else
//    cout << " " << arr[i];
// }
// cout << endl;

// Defining Multidimensional Arrays
int MultiArray[2][4];
MultiArray[0][0] = 1;
MultiArray[0][1] = 3;
MultiArray[0][2] = 5;
MultiArray[0][3] = 7;
MultiArray[1][0] = 2;
MultiArray[1][1] = 4;
MultiArray[1][2] = 6;
MultiArray[1][3] = 8;

for(int i=0; i < 2;i++){
    for(int j=0; j < 4; j++)
        cout << MultiArray[i][j];
cout << endl;
}


// Other way of defining array
int twoDimArray[2][4] = { { 6, 0, 9, 6 } , { 2, 0, 1, 1 } };

for(int i=0; i < 2;i++){
    for(int j=0; j < 4; j++)
        cout << twoDimArray[i][j];
cout << endl;
}

cout << endl;
 return 0;
}
