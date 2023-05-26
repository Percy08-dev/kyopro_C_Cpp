#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	int n, l, r, num=0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &l, &r);
		num += r - l + 1;
	}

	

	cout << num << endl;

	return 0;
}