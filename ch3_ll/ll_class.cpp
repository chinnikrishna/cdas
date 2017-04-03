#include<iostream>
using namespace std;
class Node{
  int data;
  Node* next;

  public:
    Node() {};
    void SetData(int aData){
      data=aData;
    }
    void SetNext(Node* aNext){
      next=aNext;
    }
    int Data(){
      return data;
    }
    Node* Next(){
      return next;
    }
};
class List{
  Node *head;
  public:
    List(){
      head=NULL;
    }
    void Print();
};

void List::Print(){
  Node* tmp=head;
  Node* tmp2=head;
  while (tmp!=NULL){
    cout<<tmp->Data();
    tmp=tmp->Next();
  }
  tmp=tmp2;
}
