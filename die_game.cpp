#include <iostream>
#include <cstdio>
using namespace std;

struct Dice{
  int top, bottom;
  int north, south;
  int east, west;

  Dice(){
    top = 1;
    north = 2;
    west = 3;
    bottom = 6;
    south = 5;
    east = 4;
  }

  void rotate(string command){
    if( command == "north" ){
      swap(top, north);
      swap(south, top);
      swap(bottom, south);
    }
    else if( command == "south" ){
      swap(top, south);
      swap(north, top);
      swap(bottom, north);
    }
    else if( command == "west" ){
      swap(top, west);
      swap(east, top);
      swap(bottom, east);
    }
    else if( command == "east" ){
      swap(top, east);
      swap(west, top);
      swap(bottom, west);
    }
  }

};



int main(){
  int commandNumber;
  while( scanf("%d", &commandNumber) != EOF && commandNumber != 0 ){
    Dice dice;
    for( int i = 0 ; i < commandNumber ; ++i ){
      string command;
      cin >> command;
      dice.rotate(command);
    }

    printf("%d\n", dice.top);
  }

  return 0;
}
