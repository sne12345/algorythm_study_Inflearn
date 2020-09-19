#include <iostream>

#define SIZE 7

using namespace std;

void printPreOrder(int n)
{
	if(n > SIZE) return;
	else {
		printf("%d ", n);
		printPreOrder(n * 2);
		printPreOrder(n * 2 + 1);
	}
}
void printInOrder(int n)
{
	if(n > SIZE) return;
	else {
		printPreOrder(n * 2);
		printf("%d ", n);
		printPreOrder(n * 2 + 1);
	}
}
void printPostOrder(int n)
{
	if(n > SIZE) return;
	else {
		printPreOrder(n * 2);
		printPreOrder(n * 2 + 1);
		printf("%d ", n);
	}
}
int main()
{
	printPreOrder(1);
	printf("\n");
	printInOrder(1);
	printf("\n");
	printPostOrder(1);
}
