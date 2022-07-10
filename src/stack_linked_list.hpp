#ifndef STACK_LINKED_LIST_HPP_
#define STACK_LINKED_LIST_HPP_


template <typename T>
class StackLinkedList {
public:
	struct Node {
		T val;
		Node* next;

		Node() : val{}, next{nullptr} {}
		Node(T v) : val{v}, next{nullptr} {}
		Node(T v, Node* n) : val{v}, next{n} {}

	};

private:
	Node* head;
	unsigned stackSize;

public:
	// default constructor
	StackLinkedList() : head{nullptr}, stackSize{0} {};

	// add, remove, and find methods
	void push(T obj) {
		head = new Node(obj, head);
		stackSize++;
	}

	T pop() {
		if (!head) {
			throw;
		}
		T res = head->val;
		head = head->next;
		stackSize--;
		return res;
	}

	T top() {
		if (!head) {
			throw;
		}
		return head->val;
	}

	unsigned size() {
		return stackSize;
	}

	bool empty() {
		return stackSize == 0;
	}

};



#endif /* STACK_LINKED_LIST_HPP_ */
