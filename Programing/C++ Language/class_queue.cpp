#include <iostream>
#define SIZE 10 // maximum size of queue

using namespace std;

class Queue {
private:
  int items[SIZE], front, rear;

public:
  Queue() {
    front = -1;
    rear = -1;
  }

  bool isFull() {
    if (front == 0 && rear == SIZE - 1) {
      return true;
    }
    if (front == rear + 1) {
      return true;
    }
    return false;
  }

  bool isEmpty() {
    if (front == -1) {
      return true;
    }
    return false;
  }

  void enqueue(int element) {
    if (isFull()) {
      cout << "Queue is full" << endl;
    } else {
      if (front == -1) {
        front = 0;
      }
      rear = (rear + 1) % SIZE;
      items[rear] = element;
      cout << "Inserted " << element << endl;
    }
  }

  void dequeue() {
    int element;
    if (isEmpty()) {
      cout << "Queue is empty" << endl;
    } else {
      element = items[front];
      if (front == rear) {
        front = -1;
        rear = -1;
      } else {
        front = (front + 1) % SIZE;
      }
      cout << "Deleted element: " << element << endl;
    }
  }

  void display() {
    int i;
    if (isEmpty()) {
      cout << "Queue is empty" << endl;
    } else {
      cout << "Front -> " << front << endl;
      cout << "Items -> ";
      for (i = front; i != rear; i = (i + 1) % SIZE) {
        cout << items[i] << " ";
      }
      cout << items[i] << endl;
      cout << "Rear -> " << rear << endl;
    }
  }
};

int main() {
  Queue q;
  int choice, element;
  while (1) {
    cout << "---------------------" << endl;
    cout << "1.Insert element into the queue" << endl;
    cout << "2.Delete element from the queue" << endl;
    cout << "3.Display all elements of the queue" << endl;
    cout << "4.Quit" << endl;
    cout << "Enter your choice : ";
    cin >> choice;
    switch (choice) {
      case 1:
        cout << "Enter the element to be inserted: ";
        cin >> element;
        q.enqueue(element);
        break;
      case 2:
        q.dequeue();
        break;
      case 3:
        q.display();
        break;
      case 4:
        exit(0);
        break;
      default:
        cout << "Wrong choice" << endl;
    }
  }
  return 0;
}
