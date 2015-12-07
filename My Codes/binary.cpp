// binary_search example
#include <iostream>     // std::cout
#include <algorithm>    // std::binary_search, std::sort
#include <vector>       // std::vector
using namespace std;
//bool myfunction (int i,int j) { return (i<j); }

int main () {
  int myints[] = {1,2,3,4,5,4,3,2,1};
  vector<int> v;
  for (int h=0;h<9;h++)
  {
  	v.push_back(myints[h]);
						}                      

  // using default comparison:
  sort (v.begin(), v.end());

  cout << "looking for a 3... ";
  if (binary_search (v.begin(), v.end(), 3))
    cout << "found!\n"; else cout << "not found.\n";

  // using myfunction as comp:
  sort (v.begin(), v.end());

  cout << "looking for a 6... ";
  if (binary_search (v.begin(), v.end(), 6))
    cout << "found!\n"; else cout << "not found.\n";

  sort (v.begin(), v.end());

  cout << "looking for a 8... ";
  if (binary_search (v.begin(), v.end(), 8))
    cout << "found!\n"; else cout << "not found.\n";
  sort (v.begin(), v.end());

  cout << "looking for a 2... ";
  if (binary_search (v.begin(), v.end(), 2))
    cout << "found!\n"; else cout << "not found.\n";
  return 0;
}
