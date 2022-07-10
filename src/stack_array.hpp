#ifndef STACK_ARRAY_HPP_
#define STACK_ARRAY_HPP_

template <typename T>
class StackArray {
private:
	T* arr;
	unsigned arrTableSize;
	unsigned arrSize;

public:
	// default constructor
	StackArray() : arr{new T[10]}, arrTableSize{10}, arrSize{0} {}

	// overload constructor
	StackArray(unsigned tbSize) : arr{new T[tbSize]}, arrTableSize{tbSize}, arrSize{0} {}

	// destructor
	~StackArray() {
		delete[] arr;
	}

	// add, remove, and find methods
	void push(T obj) {
		if (arrSize >= arrTableSize) {
			// expand array
			T* newArray = new T[arrTableSize * 2 + 1];
			for (unsigned i=0; i < arrTableSize; i++) {
				newArray[i] = arr[i];
			}
			arrTableSize = arrTableSize * 2 + 1;
			delete[] arr;
			arr = newArray;
		}

		arr[arrSize++] = obj;
	}

	T pop() {
		if (arrSize == 0) {
			throw;
		}
		return arr[--arrSize];
	}

	T top() {
		if (arrSize == 0) {
			throw;
		}
		return arr[arrSize-1];
	}

	unsigned size() {
		return arrSize;
	}

	bool empty() {
		return arrSize == 0;
	}
};


#endif /* STACK_ARRAY_HPP_ */
