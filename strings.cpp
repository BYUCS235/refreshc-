#include <iostream>
#include <sstream>

using namespace std;

int main (int argc, char *argv[]) {

  int answer = 42;
  string s;

  s = "The answer is " + answer;

  string snumber = "42";
  int value;
  stringstream ss;
  ss << snumber;
  int number;
  ss >> number;
  value = 2 * number;

  cout << s << endl;
  cout << value << endl;

}
