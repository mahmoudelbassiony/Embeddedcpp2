#include <iostream>
#include <string>

class Room
{
private:
  int size_;

public:
  Room(int size) : size_(size) {}
  // Additional constructor if needed
  //  Destructor if needed
  Room() : size_(0) {} // default size is 0
};
class House
{

private:
  Room *livingRoom;
  Room *Kitchen;

public:
  House() : livingRoom(new Room(10)), Kitchen(new Room(20)) {}
  ~House()
  {
    delete livingRoom;
    delete Kitchen;
  }
};
