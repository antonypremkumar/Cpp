#include<iostream>
#include<memory>

using namespace std;

struct Node
{
  shared_ptr<Node> lc;
  shared_ptr<Node> rc;
  weak_ptr<Node> parent;
  // shared_ptr<Node> parent; Cause circular loop
  int v;

  Node(int i=0)
  :
  v(i)
  {
    cout << "Node = " << v << endl;
  }

  ~Node()
  {
    cout << "~Node = " << v << endl;
  }
};

int main()
{
  shared_ptr<Node> root = make_shared<Node>(2);

  root->lc = make_shared<Node>(1);
  root->rc = make_shared<Node>(3);

  root->lc->parent = root;
  root->rc->parent = root;

  shared_ptr<Node> p = root;
  weak_ptr<Node> q;

  cout << p->v << ' ';
  p = p -> lc;
  cout << p->v << ' ';
  q = p -> parent;
  p = q.lock();
  p = p -> rc;
  cout << p->v << ' ';
  cout << endl;

}