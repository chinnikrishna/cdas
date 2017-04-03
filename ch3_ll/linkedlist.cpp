#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
  int data;
  struct Node *next; //Self referential structure
};
//Function prototypes
Node* _getnodeaddr();
Node* _createList(int);
void _printList(Node*,Node*);
Node* _insertElem(int,int,Node*);
int _retrieve(int,Node*,Node*);
int _listlen(Node*,Node*);
Node* _locate(int,Node*);
//Main Function
int main()
{
  Node* listptr=_createList(5);
  Node* head=listptr;
  _printList(listptr,head);
  int value=0;
  value=_retrieve(2,listptr,head);
  cout<<"\nValue is "<<value;
  _printList(listptr,head);
  int length=0;
  length=_listlen(listptr,head);
  cout<<"\nLength is "<<length;
  listptr=_locate(3,listptr);
  cout<<"\nValue is "<<listptr->data;

}
Node* _locate(int x,Node* List)
{
  cout<<"\n"<<x;
  while(List->next!=NULL)
  {
    if(List->data==x)
      return(List);
    List=List->next;
  }
}
int _listlen(Node* List,Node* Head)
{
  int lencount=0;
  while(List->next!=NULL)
  {
    List=List->next;
    lencount++;
  }
  List=Head;
  return lencount;
}

int _retrieve(int pos,Node* List,Node* Head)
{
  int posCount=0;
  int ElemVal=0;
  while(posCount!=pos)
  {
    List=List->next;
    posCount++;
  }
  ElemVal=List->data;
  List=Head;
  return ElemVal;
}
//Insert element x at position P in list L and return List
Node* _insertElem(int element,int pos,Node* List)
{
  //1.Goto position
  //2.Break link
  //3.Create a new positon
  //4.Link everything back
  return List;
}


//Print elements of the list
void _printList(Node* List,Node* Head)
{
  cout<<"\n[";
  while(List->next!=NULL)
  {
    cout<<List->data<<",";
    List=List->next; //Update pointer to next location
  }
  //Update back the pointer to start
  List=Head;
  cout<<"]";
}

Node* _getnodeaddr()
{
  //Calculate the memory needed for storing structure Node and return memory location and cast it to type Node
  return (Node *) malloc(sizeof(Node));
}
//Creates a list of specific lenght
Node* _createList(int listlen)
{
  //Create head of the list
  Node* listptr=_getnodeaddr();
  //Set the head next to null
  listptr->next=NULL;
  //Store the temporary location of head
  Node* temp=listptr;
  //Setup a counter
  int nodeCount=0;
  //Create lists
  while(nodeCount<listlen)
  {
    //Get address of next element in list and store it in next
    listptr->next=_getnodeaddr();
    listptr->data=nodeCount;
    //Update the listptr to point to current element in list
    listptr=listptr->next;
    //update counter
    nodeCount++;
  }
  //Fill last element next location to NULL;
  listptr->next=NULL;
  cout<<"Creating list done";
  listptr=temp;
  return listptr;
}
