#include <iostream>
#include "stack_linked_list.hpp"
#include "stack_array.hpp"

int main() {

	/* Testing Stack using Linked List */
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

	// Testing Stack using Array */
	StackArray<int> sa(5);
	for (int i=0; i < 10; i++) {
		sa.push(i);
	}

	sa.push(15);

	std::cout << sa.top() << std::endl; // output 15
	sa.pop();

	sa.push(10);
	sa.push(11);
	sa.push(12);

	while (!sa.empty()) {
		std::cout << sa.pop() << std::endl; // output 12 -> 0
	}

	return 0;
}
