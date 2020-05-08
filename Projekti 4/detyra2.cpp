#include <iostream>
#include <string.h>
#include <string>
using namespace std;
#define CAPACITY 2

template<typename T>
class Queue {
  private:
  T* queue;
  int front, back, occ, capacity;

  public:
  Queue(int capacity = CAPACITY) {
    this->queue    = new T[capacity];
    this->front    = 0;
    this->back     = -1;
    this->occ      = 0;
    this->capacity = CAPACITY;
  }

  void debug() {
    cout << this->front << endl;
    cout << this->back << endl;
    cout << this->occ << endl;
    cout << this->capacity << endl << "QUEUE" << endl;
    for (int i = 0; i < this->capacity; i++) {
      cout << i << " " << this->queue[i] << endl;
    }

    cout << this->queue[front] << endl;
    cout << this->queue[back] << endl;
  }

  ~Queue() {
    delete this->queue;
  }
  bool isEmpty() {
    return (this->size() == 0);
  }

  int size() {
    return this->occ;
  }


  bool isFull() {
    if (this->back == this->capacity - 1) {
      return true;
    } else
      return false;
  }

  void resize() {
    int newCapacity = 3 * capacity;
    T* tempQueue    = new T[newCapacity];
    for (int i = 0; i < this->back; i++) {
      tempQueue[i] = this->queue[i];
    }

    delete[] this->queue;
    this->queue    = tempQueue;
    this->capacity = newCapacity;
  }

  void positionReval(int& pos) {
    pos = (pos + 1) % this->capacity;
  }

  void insert(T x) {
    this->positionReval(this->back);
    this->queue[this->back] = x;
    this->occ++;
  }

  void enqueue(T x) {

    if (this->isFull()) {
      this->resize();
      this->insert(x);
    } else
      this->insert(x);
  }
  T dequeue() {

    T element = this->peek();

    if (this->isEmpty()) {
      throw "Queue ESHTE E ZBRAZET";
    }

    else {
      positionReval(this->front);
      this->occ--;
      return element;
    }
  }

  T peek() {
    if (this->isEmpty())
      throw "STACK ESHTE E ZBRAZET";

    else
      return this->queue[this->front];
  }
};
int main() {

  Queue<int> q1 = Queue<int>();

  q1.enqueue(3);
  q1.enqueue(5);


  cout << q1.peek();
  cout << q1.dequeue();
  cout << q1.dequeue();

  return 0;
}