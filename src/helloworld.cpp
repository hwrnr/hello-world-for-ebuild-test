#include "helloworld.hh"
#include <iostream>
 
HelloWorld::HelloWorld(){
	std::cout << "Hello";
}
 
HelloWorld::~HelloWorld(){ }
 
void HelloWorld::my_world(){
	std::cout << " World " ;
}
 
void HelloWorld::run(){
	my_world();
	std::cout << ", Again!" << std::endl;
}

