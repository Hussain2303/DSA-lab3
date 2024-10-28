#include <iostream>
using namespace std;

template <class Type>
class List {
protected:
    Type* arr;
    int currentSize; 
    int maxSize;
public:
    List(int s); // Constructor declaration
    virtual void addElementAtFirstIndex(Type) = 0; 
    virtual void addElementAtLastIndex(Type) = 0; 
    virtual Type removeElementFromEnd() = 0; 
    virtual void removeElementFromStart() = 0; 
    List(const List& obj);
    virtual ~List();
};

template <class Type>
List<Type>::List(int s) {
    arr = new Type[s];
    maxSize = s; 
    currentSize = 0; 
}

template <class Type>
List<Type>::~List() {
    delete[] arr; 
    arr = nullptr; 
}


template <class Type>
List<Type>::List(const List& obj) {
    maxSize = obj.maxSize;
    currentSize = obj.currentSize;
    arr = new Type[maxSize]; 
    for (int i = 0; i < currentSize; ++i) {
        arr[i] = obj.arr[i]; 
    }
}
int main()
{
    return 0;
}