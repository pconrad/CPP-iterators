#include <set>
#include <iostream>
using std::multiset;
using std::cout;
using std::endl;

int main() {
  std::multiset<int> first;
  first.insert(8);
  first.insert(4);
  first.insert(8); 
  // after these statements, 
  // first contains one 4 and two 8s.

  // iterate though the multiset
  cout << "first=[ ";
  for (auto it=first.begin(); it!=first.end(); it++) {
    cout << *it << " ";
  }
  cout << "]" << endl;

  return 0;
}
