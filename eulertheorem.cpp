#include <iostream>
#include <vector>
using namespace std;
vector<int> inverseArray(int x, int y) {
   vector<int> modInverse(x + 1, 0);
   modInverse[1] = 1;
   for (int i = 2; i <= x; i++) {
      modInverse[i] = (-(y / i) * modInverse[y % i]) % y + y;
   }
   return modInverse;
}
int main() {
   vector<int>::iterator it;
   int a, m;
   cout<<"Enter number to find modular multiplicative inverse: ";
   cin>>a;
   cout<<"Enter Modular Value: ";
   cin>>m;
   cout<<inverseArray(a, m)[a]<<endl;
}