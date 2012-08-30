#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;


int euler(int n);
int vectorExample(int n);

int main() {
 cout << "hello World!" << endl;
 cout << "result: " << euler(1000) << endl;
 vectorExample(500);

 return 0;
}


int euler(int n){
  int sum = 0;

  for(int i = 0; i < n; ++i) {
    if(i%5 == 0 || i%7 == 0) {
      sum += i;
    }
  } 

  return sum;
}


int vectorExmaple(int n) {
  vector<int> v;

  for(int i = 0; i < n; ++i) {
    v.push_back(i);
  }

  for(vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
    cout << *it << endl;
  }

  return n;

}
