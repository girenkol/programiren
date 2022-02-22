#include <iostream>

using namespace std;

//int nom[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};

int main() {
int reszta, kwota;
cout << "Wielkosc glownego pudelka: ";
cin >> reszta;

int n;
cout<<"Podaj ilosc rodzajow pudelek: ";
cin >> n;
int nom[n];
for(int i=0; i<n; i++){
  cout << "-> ";
  cin >> nom[i];
}
  
for(int i=0; kwota>0; i++){
int x = 0;
while(reszta >= nom[i]){
x = x+1;
reszta = reszta - nom[i];
}
if(x!=0)
cout << nom[i] << " zl: " << x << endl;
}
return 0;
}
