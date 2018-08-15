/*
 Ozkan Sener
 ozkansener@gmail.com
 */

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

static const char karakters[] = "0123456789"
		"!@#$%^&*<>?[]-_+=€±§"
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";

int Lengte = sizeof(karakters) - 1;

char willekeurig() {

	return karakters[rand() % Lengte];
}

int main() {
	srand(time(0));
	string Str;
	for (unsigned int i = 0; i < 200000; ++i) {
		Str += willekeurig();

	}
	cout << Str << endl;

}
