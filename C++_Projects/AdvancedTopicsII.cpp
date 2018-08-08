#include <fstream>
#include <iostream>
using namespace std;

//ofstream and ifstreams are Object

 // enum is a set of named integer values
 enum suit_t {CLUBS, DIAMONDS, HEARTS, SPADES};

const char * print_suit ( const suit_t suit ) {
    const char * names[] = {"Clubs" , "Diamonds" ,"Hearts" , "Spades" };
    return names[suit];
  }

int main () {


    suit_t suit1;
    string mobileCarrier;
    string sentence;
    ifstream source("source-file.txt");
    ofstream destination("dest-file.txt");
    int x;
    source >> x; // Reads one int from source -file . txt
    source.close(); // close file as soon as we ’re done using it
    destination << x; // Writes x to dest -file . txt
    char y;
    y = &print_suit(suit1); // the enum value only accepts CLUBS, DIAMONDS, HEARTS and SPADES
    cout << y << endl;
    return 0;
    //cin >> mobileCarrier;
    //char newSentence = getline(cin, sentence);
    //cout << newSentence << endl;

    }


     // close () called on destination by its destructor
