#include "Array.h"
#include <stdlib.h>
#include <iostream>
using namespace std;

template <typename T>
class GrowableArray : public Array {
protected:
	T* data;
public:
	GrowableArray(int size);
	~GrowableArray();

	virtual T& operator[](int i);
	virtual T operator[](int i) const;
	void print();
};

template <typename T>
GrowableArray<T>::GrowableArray(int size) : Array(size) {
	this->data = new T[len];
}

template <typename T>
GrowableArray<T>:: ~GrowableArray() {
	delete this->data;
}

template <typename T>
T GrowableArray<T>::operator[](int i)const{
	static T tmp;
	if (0 <= i && i < len)
		return  (this->data)[i];	
	else {
		return tmp;
	}
}

template <typename T>
T& GrowableArray<T>:: operator[] (int i) {
	static T tmp;
	if (0 <= i && i < len)
		return  (this->data)[i];
	else if (len <= i < 2 * len) {
		len += len;
		this->data = (T*)realloc(this->data, len * sizeof(T));
		for (int k = len/2 ; k < len; k++) {
			(this->data)[k] = 0;
		}
		return  (this->data)[i];
	}
	else {
		cout << "Array bound error!" << endl;
		return tmp;
	}
}

template <typename T>
void GrowableArray<T>::print() {
	cout << "[ ";
	for (int i = 0; i < len; i++)
		cout << (this->data)[i]<< " ";
	cout << "]" << endl;
}
