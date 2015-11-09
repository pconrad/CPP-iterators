#include <set>
#include <iostream>
using std::multiset;
using std::cout;
using std::endl;

int main() {
  std::multiset<int> ms;
  ms.insert(8);
  ms.insert(4);
  ms.insert(8); 
  // after these statements, 
  // ms contains one 4 and two 8s.

  // iterate though the multiset
  cout << "ms=[ ";
  for (auto item: ms) {
    cout << item << " ";
  }
  cout << "]" << endl;

  return 0;
}
