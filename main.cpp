#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  double nume = 1., pi4 = 0.;
  int denom = 1, loop, sign = 1;

  cout << "Please input how many iterations you want"<< endl;
  cin >> loop;

  for(int x = 0; x < loop; x++){
    pi4 += sign * (nume / denom);
    //pi4 = pi4 / 4;

    denom += 2;
    sign *= -1;
  }


  cout.precision(20);
  cout << "Pi = " << (pi4 * 4.) << endl;
  return 0;
}