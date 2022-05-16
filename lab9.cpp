#include <iostream>
#include <fstream>
#include "BMP.hpp"

int main()
{
	ks::BMP image;
	image.read();
	
	image.filter();

	image.write();
	return 0;
}
