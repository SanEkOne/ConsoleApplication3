#define _CRT_SECURE_NO_WARNINGS  

#include <iostream>  
#include <ctime>  
#include <string.h>  

using namespace std;

void main() {
	srand(time(NULL));

	int x = 10;

	char* s = new char[x];
	cin >> s;

	for (int i = 0; i < x; i++) {
		if (s[i] == 'A' || s[i] == 'M' || s[i] == 'C') {
			cout << (char)(s[i] + 33);
		}
		else {
			cout << s[i];

		}
	}


}