#include <bits/stdc++.h>
using namespace std;

int main() {
  // Small input optimizations
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  // --- INPUT ---
  // input int N
  int N;
  cin >> N;

  // input array `a` of characters of length N
  char a[N];
  for (int i = 0; i < N; i++) {
    cin >> a[i];
  }

  // input into vector `b` of strings of size N
  vector<string> b;
  for (int i = 0; i < N; i++) {
    string temp;
    cin >> temp;
    b[i] = temp; // more optimal than b.push_back(temp)
  }

  // input into set `c` of unsigned integers of size N
  set<int> c;
  for (int i = 0; i < N; i++) {
    int temp;
    cin >> temp;
    c.insert(temp);
  }

  // --- OUTPUT ---
  // output N twice, separated by space, then output newline
  cout << N << ' ' << N << '\n';

  // output array a of chars (spaced) w/ enhanced & regular forloops
  for (int i = 0; i < N; i++) // N could be replaced by a.length
    cout << a[i] << ' ';

  for (char u : a)
    cout << u << ' ';

  // output vector b of strings (not spaced) w/ both forloops
  for (int i = 0; i < b.size(); i++)
    cout << b[i]; // b.at(i) could be used, which is slower yet 'safer'

  for (string u : b)
    cout << u;

  // output set c of ints (sep. by newlines)
  for (int u : c)
    cout << u << '\n';

  return 0;
}
