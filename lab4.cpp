#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  const int arraySize = 5;
  int table[arraySize][arraySize];

  for (int i = 0; i < arraySize; i++) {
    for (int j = 0; j < arraySize; j++) {
      table[i][j] = i + j;
    }
  }

  cout << endl;
  cout << "Array table:" << endl;

  for (int i = 0; i < arraySize; i++) {
    for (int j = 0; j < arraySize; j++) {
      cout << setw(10) << "element[" << i << "][" << j << "] = " << table[i][j];
    }
    cout << endl;
  }

  cout << endl;
  cout << "The array contains " << arraySize * arraySize << " elements." << endl;

  return 0;
}
