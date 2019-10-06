#ifndef EXAMPLE_HELLOWORD_H
#define EXAMPLE_HELLOWORD_H
 
#include <iostream>
 
class HelloWorld {
	public:
		HelloWorld();
		virtual ~HelloWorld();
                void run();
 
	protected:
		virtual void my_world();	
 
};
 
#endif
