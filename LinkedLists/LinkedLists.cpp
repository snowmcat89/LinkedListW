#include <iostream>
#include <vector>

typedef struct Node {
	std::int16_t val;
	struct Node* nextNd;
	Node(std::int16_t v, struct Node* nxtNd): val(v),nextNd(nxtNd){}
}Node, *PNode;




void pushNode(std::int16_t val, PNode head);
void deallocMemory(PNode& head);

int main() {
	PNode head = nullptr;
	pushNode(10, head);
	pushNode(16, head);

	deallocMemory(head);
	return 0;

}


void pushNode(std::int16_t val, PNode head) {
	PNode nw_node = new Node(val,nullptr);
	
	if (head == nullptr) {
		head = nw_node;
	}
	else {
		PNode last_node = head->nextNd;
		while (last_node != nullptr) {
			last_node = last_node->nextNd;
		}
		last_node = nw_node;

	}

}
void deallocMemory(PNode& head) {
	PNode current = head;
	while (current != nullptr) {
		PNode next = current->nextNd;
		delete current;
		current = next;
	}

	head = nullptr;
}




