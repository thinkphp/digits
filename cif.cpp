#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  
  int n, s = 0;
  
  cin>>n;

  while(n) {
    s = 0;
    while(n) {
      s += n % 10;
      n /= 10;
    }
    if(s > 9) n = s;
  }

  cout<<s;
  return 0;
}
