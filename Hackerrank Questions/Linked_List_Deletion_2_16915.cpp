#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Node {
    public:
        int val = 0;
        Node* next = NULL;
};
Node* head = NULL;
void Insert_Details() {
    int val;
    while(cin>>val) {
        if(val == -1)
            return;
        if(head == NULL) {
            head = new Node();
            head->val = val;
        }
        else {
            Node* node = new Node();
            node->val = val;
            Node* tem = head;
            while(tem->next != NULL) {
                tem = tem->next;
            }
            tem->next = node;
        }
    }
}
void Output() {
    Node* tem = head;
    int c = 0;
    vector<int> vec;
    while(tem != NULL) {
        if(tem->val % 2 != 0)
            vec.push_back(tem->val);
        else
            c++;
        tem = tem->next;
    }
    if(c > 0) {
        for(auto val:vec) {
            cout<<val<<" ";
        }
    }
    else
        cout<<"No even number present";
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    Insert_Details();
    Output();
    return 0;
}