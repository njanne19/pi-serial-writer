#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ofstream file;
	file.open("/mnt/mwrite/testfiles/test9.txt");
	string sbuf;
	getline(cin, sbuf);
	while (!sbuf.empty()) {
		file << sbuf << "\n";
		getline(cin, sbuf);
	}
	file.close();
	return 0;
}
