#include <bits/stdc++.h>
using namespace std;

int main() {
  // --- INPUT ---

  // input an int N
  int N;
  cin >> N;

  // input an array a of characters of length N
  char a[N];
  for (int i = 0; i < N; i++) {
    cin >> a[i];
  }

  // input into a vector b of strings of size N
  vector<string> b;
  for (int i = 0; i < N; i++) {
    string temp;
    cin >> temp;
    b.push_back(temp);
  }

  // input into a set c of integers of size N
  set<int> c;
  for (int i = 0; i < N; i++) {
    int temp;
    cin >> temp;
    c.insert(temp);
  }

  // --- OUTPUT ---

  // output N twice, separated by a space, then output a newline
  cout << N << ' ' << N << '\n';

  // output an array a of chars (spaced apart) w/ enhanced & regular forloops
  for (int i = 0; i < N; i++) // N or a.length could be used here
    cout << a[i] << ' ';

  for (char u : a) {
    cout << u << ' ';
  }

  // output a vector b of strings (not spaced apart) w/ both forloops
  for (int i = 0; i < b.size(); i++) {
    cout << b[i]; // b.at(i) could be used but it is slower (yet 'safer')
  }

  for (string u : b) {
    cout << u;
  }

  // output a set c of ints (sep. by newlines)
  for (int u : c) {
    cout << u << '\n';
  }

  return 0;
}
