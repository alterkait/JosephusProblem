#include <iostream>
#include <cstdlib>

/* Program Structure:
User inputs the number of people starting in the initial circle.
Program outputs actions performed, e.g. '2' kills '3', etc..
Programs runs solution, outputtin the winning place in the circle.
*/

using namespace std;
int main()
{
  int nOfSoldiers;
  cout << "How many soldiers are in the Initial circle?" << endl;
  cin >> nOfSoldiers;
  
  // if n = 2 ** a, winner = 1//
  
  int a, winnerSoldier;
  a = 1000;
  if (nOfSoldiers == 2 ** a)
  {
    winnerSoldier = 1;
  }
  
  
  cout << "The last Soldier standing is" << winnerSoldier << endl; 
  
  return 0;
}
