#include <iostream>
#include <string>
using namespace std;

int main ( ) {

//declare variables
  int roomCapacity;
  int meetingNumber;
  int diff;

  cout << "Enter the maximum amount of people in this room according to fire saefty: " << endl;
  cin >> roomCapacity;

  cout << "Enter the amount of people attending the meeeting: " << endl;
  cin >> meetingNumber;

  if (meetingNumber > roomCapacity) {
    diff = meetingNumber - roomCapacity;
    cout << "There are too many people for this meeting. " << diff << " people must leave" << endl;
  }
  else {
    cout << "Meeting may go on as scheduled" << endl;
  }
}
