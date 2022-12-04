#include<iostream> 
#include<queue> 
using namespace std;

int countNodes(queue<int> q)
{
	int count = 0;
	while (!q.empty())
	{
		count++;
		q.pop();
	}
	return count;
}

int main()
{
	queue<int> q;
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	q.push(50);

	int n = countNodes(q);
	cout << "Number of nodes in queue is : " << n << endl;

	int *arr;
	arr = new int[n];
	for (int i = 0; i<n; i++)
	{
		arr[i] = q.front();
		q.pop();
	}

	cout << "Elements in array are : ";
	for (int i = 0; i<n; i++)
		cout << arr[i] << " ";
	system("pause");
	return 0;
}
