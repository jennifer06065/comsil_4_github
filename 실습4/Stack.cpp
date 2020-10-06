#include "LinkedList.cpp"

template <typename T>
class Stack : public LinkedList <T>
{
public:
	Stack() {};
	virtual bool Delete(T& element);// 맨 뒤의 원소를 삭제
};

template <typename T>
bool Stack<T>::Delete(T& element) {
	if (this->current_size == 0)
		return false;
	element = this->first->data;
	Node<T>* temp = this->first;
	this->first = this->first->link;
	delete temp;
	this->current_size--;
	return true;
}
