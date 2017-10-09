#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
	string key, file;
	if (argc == 1) {
		cout << "";
	}
	else {
		key = argv[1];
		if (key == "-h")
			cout << "all commands:" << '\n' << "-l <name file>" << '\n' << "-h";
		if (key == "-l") {
			if (argc > 2)
				file = argv[2];
			else
				cout << "error";
		}
	}
	return 0;
}