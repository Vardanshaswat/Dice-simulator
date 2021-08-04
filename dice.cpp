#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int main() {
  srand((int) time(nullptr)); 
  int dice = (rand() % 6 ) + 1;
  cout << "Dice: " << dice << endl;
}

// we need cstdlib to use a random generator

// we need Ctime to initislize the random geneartor every time the program is executed


//These two are major insight pof te projext

