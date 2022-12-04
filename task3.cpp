#include <iostream>
#include <stack> 
using namespace std;

int findMiddle(stack<int> s)
{
	int temp;
	int mid;
	int n = s.size();
	int count = 0;

	while (!s.empty()) {
		temp = s.top();

		if (count == n / 2) {
			mid = temp;
		}
		s.pop();
		count++;
	}
	return mid;
}

int main()
{
	stack<int> s;
	s.push(11);
	s.push(22);
	s.push(33);
	s.push(44);
	s.push(55);
	s.push(66);
	s.push(77);

	cout << "Item at middle of the stack is: " << findMiddle(s) << endl;
	system("pause");
	return 0;
}
