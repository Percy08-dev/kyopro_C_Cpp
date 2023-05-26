#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	int n;
	char s;
	bool b = false;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		cin >> s;
		if (s == 'Y') {
			b = true;
			break;
		}
	}

	if (b) {
		cout << " Four" << endl;
	}else{
		cout << "Three" << endl;
	}


	return 0;
}