#include <iostream>
using namespace std;

int main() 
{
int mas[100]; //masīva inicializācija
int n;
cout << "Input n!\n";
cin >> n;  //masīva elementu skaits

for (int i=0; i<n; i++) //masīva ieviešana
{
  cin >> mas[i];
}

for (int i=0; i<n; i++) //jauna masīva aprēķināšana
{
  mas[i]=mas[i]*2;
}

for (int i=0; i<n; i++) //masīva iizvadīšana
{
  cout << mas[i] << ' ';
}



}