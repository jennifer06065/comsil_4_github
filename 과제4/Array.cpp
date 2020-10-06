#include <iostream>
using namespace std;

#include "Array.h"

Array::Array(int size) {
	len = size;
	data = new int[len];
}
Array::~Array() {
	delete data;
}
int Array::length() {
	return len;
}
int Array::operator[](int i)const {
	if (0<=i && i<len)
		return data[i];
	else {
		cout << "Array bound error!" << endl;
		return 0;
	}
}
int& Array:: operator[] (int i) {
	static int tmp;
	if (0 <= i && i < len)
		return data[i];
	else {
		cout << "Array bound error!" << endl;
		return tmp;
	}
}
void Array::print() {
	cout << "[ ";
	for (int i = 0; i < len; i++)
		cout << data[i]<< " ";
	cout << "]" << endl;
}
