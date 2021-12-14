//Numbers Addition Using Linked List
#include<bits/stdc++.h>
using namespace std;
struct Node_{
int data;
struct Node_* next;
};
typedef struct Node_ Node;
void push(Node** head_ref, int new_data){
Node* new_node = (Node*) malloc(sizeof(Node));
new_node->data = new_data;
// link the old list off the new node 
new_node->next = (*head_ref);
// move the head to point to the new node 
(*head_ref) = new_node;
}
void printList(Node *node){
while (node != NULL)
{
cout << node->data << " ";
node = node->next;
}
cout<<"\n";
}
int Add_List_Data (Node *head){
int sum = 0;
while (head != NULL) 
{ 
sum = (sum * 10) + head->data;
head = head->next;
}
return sum;
}
5
void Create_Result_List (Node **head, int result){
int temp = 0;
while (result){
temp = result % 10;
result = result / 10;
push(head, temp);
}
return;
}
int main(){
Node *head1 = NULL, *head2 = NULL, *result = NULL;
int sum = 0;
int size1, size2;
cout<<"\nPlease enter size of 1st number: ";
cin>>size1;
cout<<"Please enter size of 2nd number: ";
cin>>size2;
int arr1[size1], arr2[size2];
cout<<"Please enter 1st number: ";
for(int i=0;i<size1;i++){
scanf("\n%d",&arr1[i]);
}
cout<<"Please enter 2nd number: ";
for(int i=0;i<size2;i++){
scanf("%d",&arr2[i]);
}
for (int j = size1-1; j >= 0; --j)
push(&head1, arr1[j]);
for (int k = size2-1; k >= 0; --k)
push(&head2, arr2[k]);
printf("\nLIST1\n");
printList(head1);
printf("\nLIST2\n");
printList(head2);
6
sum = Add_List_Data(head1) + Add_List_Data(head2);
Create_Result_List(&result, sum);
printf("\nResult List\n");
printList(result);
cout<<"\n";
return 0;
}
