#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	int i = 0, num = 0;
	int x;
	string n;
	cin >> n;


	while (n[i] != '\0') {
		x = (int) n[i];
		num += x - 48;
		i++;
	}

	if (atoi(n.c_str()) % num == 0) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}

	return 0;
}