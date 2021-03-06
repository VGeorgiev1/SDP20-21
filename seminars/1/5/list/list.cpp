#include <iostream>
#include "list.h"
#include "dllist.h"
using namespace std;

int main() {
    DoublyLinkedList<int> l;

    for(int i = 0; i< 10; ++i) {
        l.push_back(i);
    }
    l.remove(5);

    for(int i = 0; i< 9; ++i) {
        cout<< l.getAt(i)<< endl;
    }

    while(!l.empty()) {
        l.pop_back();
    }

    return 0;
}
