#include <iostream>
#include "myDLL.h"

using namespace std;

int main() {
  string str;
  int n;
  cin>>str>>n;
  cout<<fun(str, n);
  return 0;
}