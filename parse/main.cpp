
#include <iostream>
#include <queue>
#include <string>
#include <sstream>

int main(void) {

	std::queue<std::string> result;

	auto parser = [&result](const std::string& str, char dlim = ' ') -> std::queue<std::string> {
		std::stringstream stream(str);
		std::string tmp;
		while (std::getline(stream, tmp, dlim)) {
			result.push(tmp);
		}

		return result;
	};

	// test data create
	std::string test("test1");
	for (int i = 0; i < 10; i++) {
		test += ' ';
		test += std::to_string(i);
	}
	std::cout << test << std::endl;

	// parser test
	parser(test);
	while ( !result.empty() ) {
		std::cout << result.front() << std::endl;
		result.pop();
	}

	std::cout << "parser test" << std::endl;
	return 0;
}
