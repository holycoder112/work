#include<iostream>

using namespace std;


    struct Node
    {
        int data;
        Node *next;
        Node(int x)
        {
            data=x;
            next=NULL;
        }
    };
     Node insert_begin(Node *head,int y)
    {
       Node *temp=new Node(y);
      temp->next=head;
      return temp;
    }
    void print_list(Node *head)
    {
        Node *temp=head;
        while(temp!=NULL)
        {
            cout<<(temp->data)<<endl;
            temp=temp->next;
        }
    }
    int main()
    {
        Node *head= new Node(10);
        head->next= new Node(20);
        head->next->next=new Node(30);
        insert_begin(head,40);
        print_list(head);
        return 0;
    }
  
