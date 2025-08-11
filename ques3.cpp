#include <bits/stdc++.h>
using namespace std;

int main() {
   string paragraph, word;
   getline(cin, paragraph);
   stringstream ss(paragraph);
   map<string, int> freq;
   while (ss >> word)
       freq[word]++;
   for (auto& p : freq)
       cout << p.first << ": " << p.second << endl;
   return 0;
}
