using namespace std;
#include <iostream>
#include <stdlib.h>

int main(int argc, char *argv[]) {
int size;

if (argc==1) {
  size = atoi(argv[1]);
 }

cout << size << endl;
int set[size];

for (int i=0; i<size; i++) {
 cout << "enter an integer for slot " << i+1 << ":" << endl;
 cin >> set[i];
 while (set[i] < 0 || set[i] > 1024) {
   cout << "invalid. enter another integer:" << endl;
   cin >> set[i];
 }
}

return 0;
}
