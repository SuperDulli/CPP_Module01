#include <string>
#include "Harl.hpp"

int	main(int argc, char* argv[]) {
	Harl kArEn;

	if (argc != 2) {
		kArEn.complain("");
		return 1;
	}
	kArEn.complain(argv[1]);
	
	return 0;
}
