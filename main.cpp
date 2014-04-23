#include <iostream>
#include "gbsfo/gbsfo.h"

int main()
{
	sfo my_sfo;
	my_sfo.load("EBOOT.PBP");

	std::cout << my_sfo.get_data("TITLE") << std::endl;
    return 0;
}
