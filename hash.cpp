#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int tab[9];
int liczba;

int hf(int liczba){
  int index;
  for(int i=0; i<9; i++)
  index = (index << 6) + (index << 16) + tab[i] - index;
  return index%90;
}

int rand(int liczba){
  for(int i=0; i<10; i++){
     liczba=rand()%10; 
      tab[i]=liczba;
  }
  
  return liczba;
}

int main() {
    srand (time(NULL));
    
    cout << hf(liczba);
    return 0;
}
