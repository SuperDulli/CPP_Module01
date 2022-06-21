#include <string>
#include <iostream>
#include <fstream>

int	main(int argc, char* argv[]) {
	std::ifstream	inputFileStream;
	std::ofstream	outputFileStream;
	std::string		fileName;
	std::string		s1; // search for this
	std::string		s2; // replace by this

	if (argc != 4) {
		std::cerr << "usage: sed_is_for_losers file s1 s2" << std::endl;
		return 1;
	}

	fileName = argv[1];
	s1 = argv[2];
	s2 = argv[3];

	inputFileStream.open(fileName.c_str(), std::ifstream::in);
	if (inputFileStream.fail()) {
		std::cerr << "failed to open " << fileName << " for reading" << std::endl;
		return 1;
	}
	std::string const	fileNameOutput = fileName += ".replace";
	outputFileStream.open(fileNameOutput.c_str(), std::ofstream::out);
	if (outputFileStream.fail()) {
		std::cerr << "failed to open " << fileNameOutput << " for writing" << std::endl;
		return 1;
	}

	std::cout << "replacing every occurrence of '" << s1 << "' with '" << s2 << "'" << std::endl;

	std::string	line;
	while (getline(inputFileStream, line)) {
		std::string::size_type	n;
		while ((n = line.find(s1)) != std::string::npos) {
			outputFileStream << line.substr(0, n);
			line.erase(0, n + s1.length());
			outputFileStream << s2;
		}
		outputFileStream << line << std::endl;
	}
	return 0;
}
