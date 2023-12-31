#include <iostream>
#include <string>
using namespace std;

int hash1(const string& key, int tableSize) {
	int hashVal = 0;
	for (int i = 0; i < key.size(); i++)
		hashVal += key[i];
	return hashVal % tableSize;
}

int hash2(const string& key, int tableSize) {
	char ch1 = key.size() > 0 ? key[0] : 0;
	char ch2 = key.size() > 1 ? key[1] : 0;
	char ch3 = key.size() > 2 ? key[2] : 0;
	return (ch1 + 27 * ch2 + 729 * ch3) % tableSize;
}

int hash3(const string& key, int tableSize) {
	unsigned int hashVal = 0;
	for (int i = 0; i < key.size(); i++)
		hashVal = 37 * hashVal + key[i];
	return hashVal % tableSize;
}

int main() {

	return 0;
}
