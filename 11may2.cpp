#include<iostream>
using namespace std;
	struct node
	{
		int data;
		node * link;
	};
	int main()
	{
		node *temp, *temp1;
		temp = new node;
		temp -> data = 100;
		temp -> link = NULL;                         
		cout<<temp->data<<"   "<<temp->link<<endl;

		temp1 = new node;
		temp1 -> data = 50;
		temp1 -> link = NULL;

		temp->link = temp1;
		cout<<temp->data<<"   "<<temp->link<<endl;

		cout<<temp1->data<<"   "<<temp1->link;
	}
