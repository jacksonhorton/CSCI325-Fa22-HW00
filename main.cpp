#include <iostream>

using namespace std;

int main() {
  int MAX_ARRAY_SIZE = 100;
  int int_array[MAX_ARRAY_SIZE];

  int i = 0;
  while (i<=99) {	     
    int_array[i] = i;	       	
    //cout << std::to_string(i) << " ";
    i++;
  }
  
  cout << endl;
  for (int n: int_array) {
    cout << n << " ";
  };
  return 0;
}
