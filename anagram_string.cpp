#include<bits/stdc++.h>
using namespace std;
int main() {
bool flag=false;
string a = "medical";
string b = "decimal";
int h[26] = { 0 };

int x[26];

for (int i = 0; i < 26; i++) {

x[i] = 1;

}

if (a.length() == b.length()) {

for (int i = 0; a[i] != '\0'; i++) {

h[a[i] - 97]++;

x[b[i] - 97]--;

}

for (int j = 0; j < 26; j++) {

if ((h[j] & x[j] )> 0) {

cout << "Not anagram";

flag = true;

break;

}

}

if (flag == false) {

cout << "anagram";

}

}

else{

cout << "Not anagram";

}

}
