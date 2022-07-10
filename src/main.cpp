#include <iostream>
#include "stack_linked_list.hpp"

int main() {

	StackLinkedList<int> sll;

	sll.push(3);
	sll.push(5);

	std::cout << sll.top() << std::endl; // output 5

	sll.push(12);
	sll.push(15);

	std::cout << sll.size() << std::endl; // output 4
	std::cout << sll.pop() << std::endl; // output 15
	std::cout << sll.size() << std::endl; // output 3
	sll.push(4);

	while (!sll.empty()) {
		std::cout << sll.pop() << std::endl; // output 4, 12, 5, 3
	}

	return 0;
}
