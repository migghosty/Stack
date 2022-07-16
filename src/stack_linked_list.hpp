#ifndef STACK_LINKED_LIST_HPP_
#define STACK_LINKED_LIST_HPP_

template <typename T>
class StackLinkedList {
private:
	struct Node {
		T val;
		Node* next;

		Node() : val{}, next{nullptr} {}
		Node(T v) : val{v}, next{nullptr} {}
		Node(T v, Node* n) : val{v}, next{n} {}

	};
	Node* head;
	unsigned stackSize;

public:
	// default constructor
	StackLinkedList() : head{nullptr}, stackSize{0} {};

	// destructor
	~StackLinkedList() {
		while (head) {
			Node* tmp = head;
			head = head->next;
			delete tmp;
		}
	}


	// add, remove, and find methods
	void push(T obj) {
		head = new Node(obj, head);
		stackSize++;
	}

	T pop() {
		if (!head) {
			throw;
		}
		Node* toDelete = head;
		T res = head->val;
		head = head->next;
		stackSize--;
		delete toDelete;
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
