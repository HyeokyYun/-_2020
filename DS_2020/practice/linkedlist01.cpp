#include <isotream>

using namespace std;

class Node {
public:
	int data;
	Node* next;
};

int main(){
	Node* q = new Node{3, nullptr};
	Node* p = new Node{5, q};
	
	cout << " 가장 첫번째 노드인 p의 data 값: "<< p->data << "->" << "두번째 노드인 q의 data 값: " << q->data << endl;
	cout << "q의 주소값을 가리키고 있는 p->next의 값 "<< p->next << endl;
}

