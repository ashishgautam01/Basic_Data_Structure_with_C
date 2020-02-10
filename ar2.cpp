#include<iostream>
using namespace std;

int main(void){
vector<Cube> cubes{Cube(11), Cube(42), Cube(400)};
cout<<"Initial Capacity: " << cubes.capacity() << endl;
cubes.push_back( Cube(800));
cout<<"Size after adding" << cubes.size() << endl;
cout<<" Capacity after adding" << cubes.capacity() << endl;

return 0;
}
