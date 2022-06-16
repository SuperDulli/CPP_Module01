#include <string>
#include "Harl.hpp"

int	main(void) {
	Harl kArEn;

	kArEn.complain("DEBUG");
	kArEn.complain("INFO");
	kArEn.complain("WARNING");
	kArEn.complain("ERROR");

	kArEn.complain("");
	kArEn.complain("42");
	// kArEn.complain(NULL); // causes seg fault
	return 0;
}
