#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Node
{
    int val;
    Node* next;
    
    Node(int _val) : val(_val), next(NULL){}
};


int main()
{
    // Node* p = new Node(1);
    // Node* q = new Node(2);
     Node node = Node(1);
     Node* p = &node;
    
    // p -> next = q;
    
    cout << p << endl;
    // Node* head = p;
    // for (Node* i = head; i; i = i->next) 
    //     cout << i->val << endl;

    queue <int> q;
    priority_queue<int> p; // 大根堆
    priority_queue<int, vector<int>, greater <int>> o; // 小根堆

    // 注意：大根堆中引用结构体需要定义小于号，小根堆中引用结构体需定义大于号

    struct Rec
    {
        int a, b;
        bool operator > (const Rec& t) const
        {
            return a > t.a;
        } 
    };

    priority_queue<Rec, vector<Rec>, greater<Rec>> d;
    
    d.push({1, 2});
}
        






