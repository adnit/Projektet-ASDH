#include <iostream>
#include <string.h>
#include <string>
using namespace std;
#define CAPACITY 1

template<typename T>
class Stack {
  private:
  T* stack;
  int top;
  int capacity;

  public:
  Stack(int capacity = CAPACITY) {
    this->stack    = new T[capacity];
    this->capacity = CAPACITY;
    this->top      = 0;
  }

  ~Stack() {
    delete this->stack;
  };

  int size() {
    return this->top;
  }

  int Capacity() {
    return this->capacity;
  }

  void insert(T x) {

    this->stack[top] = x;
    this->top++;
  }

  void push(T x) {
    if (isFull()) {
      this->resize();
      this->insert(x);
    } else
      this->insert(x);
  }

  void resize() {

    int newCapacity = 2 * capacity;
    T* tempStack    = new T[newCapacity];
    for (int i = 0; i < this->top; i++) {
      tempStack[i] = this->stack[i];
    }

    delete[] this->stack;
    this->stack    = tempStack;
    this->capacity = newCapacity;
  }
  T pop() {
    if (this->isEmpty()) {
      cout << "STACK ESHTE E ZBRAZET";
      throw "AAAA";
    } else {
      return this->stack[--top];
    }
  }

  T peek() {
    return this->stack[this->top - 1];
  }

  bool isFull() {
    return this->size() == this->capacity;
  }
  bool isEmpty() {
    return top == 0;
  }
};

int main() {

  Stack<string> s1 = Stack<string>();

  s1.push("Fatmir Limaj");
  s1.push("Sulmi terroristik");
  s1.push("Fluturkja");
  s1.push("Albin Kurti i lidht me shkie e me rus");
  s1.push("Hashim Thaqi p90 i csgo");


  cout << s1.Capacity() << endl;

  cout << s1.pop() << endl;
  cout << s1.pop() << endl;

  cout << s1.size() << endl;


  return 0;
}