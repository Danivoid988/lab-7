#include<iostream>
using namespace std;
class node {
public:
	int data;
	node* next;
	node(int data) {
		this->data = data;
		this->next = NULL;
	}
};
class stack {
public:
	node* top;
	int count = 0;
	stack() {
		top = NULL;
	}
	void push(int da) {
		node* temp = new node(da);


		temp->next = top;
		top = temp;
		count++;
	}
	int pop() {
		int temp;
		temp = top->data;
		top = top->next;
		return temp;
		count--;
	}
	void display() {
		node* temp;
		temp = top;
		for (int i = 0; i < count; i++) {
			while (temp != NULL) {
				cout << " the value of stack is = " << temp->data << endl;
				temp = temp->next;
			}
		}
	}
	int  peek(){
		return top->data;
	}

};
void main()
{
	stack one;
	one.push(10);
	one.push(10);
	one.push(20);
	one.push(30);
	cout << "the value is = " << one.pop() << endl;
	cout << "the value is = " << one.pop() << endl;
	one.display();
	cout << endl << one.peek();

	system("pause");
}
