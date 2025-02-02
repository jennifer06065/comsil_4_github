#include <iostream>
using namespace std;

#include "Array.h"
#include "GrowableArray.h"

int main() {
	// GrowableArray test (int)

	cout << "GrowableArray<int> Test" << endl;
	GrowableArray<int> g(10);
	int i;
	for (i = 0; i < g.length(); i++) g[i] = 2 * i + 3;
	cout << "g(10)"; g.print();
	g[13] = 13;
	cout << "g(20)"; g.print(); // 20으로 수정


	cout << endl;

	// GrowableArray test (double)
	cout << "GrowableArray<double> Test" << endl;
	GrowableArray<double> dg(10);

	for (i = 0; i < dg.length(); i++) dg[i] = 2 * i + 3.14;
	cout << "dg(10)"; dg.print();
	dg[13] = 13.31;
	cout << "dg(20)"; dg.print(); // 20으로 수정
}
