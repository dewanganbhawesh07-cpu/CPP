#include <iostream>
using namespace std;
enum direction
{
     East, 
     West,
     North,
     south
};
int main()
{
    direction dir = North;
    cout << dir;
    return 0;
}