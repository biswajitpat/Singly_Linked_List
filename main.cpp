#include <cstdlib>
#include "list.h"
#include <iostream>
using namespace std;

int main(){
    List l;
    for(int i=0; i<5; i++){
        l.addNode(i);
    }
    for(int j=0; j>-5; j--){
        l.addNode(j, 'f');
    }
    l.delNode(0);
    l.printList();
    cout << "The no. of nodes is " << l.size() << endl;
}