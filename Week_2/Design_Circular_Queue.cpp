#include <iostream>
#include <vector>
using namespace std;

class MyCircularQueue {

public:
    vector<int> v;
    int head;
    int tail;
    int size;
    int count;
    MyCircularQueue(int k) {
        v = vector<int>(k, -1);
        head = 0;
        tail = 0;
        size = k;
        count = 0;
    }
    
    bool enQueue(int value) {
        if(count == size) return false;
        v[head] = value;
        head = (head+1)%size;
        count++;
        return true;
    }
    
    bool deQueue() {
        if(count == 0) return false;
        tail =  (tail+1)%size;
        count --;
        return true;
    
    }
    
    int Front() {
        if(count == 0) return -1;
        return v[head];
    }
    
    int Rear() {
        if(count == 0) return -1;
        return v[tail];
    }
    
    bool isEmpty() {
        if(count == 0) return true;
        return false;
    }
    
    bool isFull() {
        if(count == size) return true;
        return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */

int main(){
    MyCircularQueue obj = MyCircularQueue(3);
    obj.enQueue(1);
    obj.enQueue(2);
    obj.enQueue(3);
    obj.enQueue(4);
    cout << obj.Rear() << endl;
    cout << obj.isFull() << endl;
    obj.deQueue();
    obj.enQueue(4);
    cout << obj.Rear() << endl;
        return 0;
}