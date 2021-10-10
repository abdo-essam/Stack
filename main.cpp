#include <string>
#include <iostream>

using namespace std ;

template <typename T>

class Stack{
private:
    int top ;
    T *arr;
    int size ;

public:

    Stack()
    {
        size = 10 ;
        top = - 1 ;
        arr = new T[size] ;
    }

    Stack(T element, int size){
        this->size = size ;
        top = -1 ;
        arr = new T[size] ;
        for (int i = 0 ; i < size ; ++i){
            arr[i] = element;
        }
    }

    ~Stack(){
        top = -1 ;
        delete []arr ;
    }



    bool isEmpty()
    {
        return top < 0 ;
    }

    bool isFull()
    {
        if (top >= size-1)
            return true ;
        else
            return false ;
    }

    void push(T element)
    {
        if (isFull())
        {
            cout<<"stack is full " <<endl;
        } else{
            top++;
            arr[top]=element ;
        }
    }

    int getSize(){
        return (top+1) ;
    };

    void pop(){
        if (isEmpty())
        {
            cout <<"stack is empty"<<endl;
        }
        else
        {
            top -- ;
        }
    }

    T &getTop(){
        return arr[top] ;
    }

    void display(){
        for (int i = top; i >= 0; --i) {
            cout << arr[i] << " " ;
        }
        cout<<endl ;
    }

};
int main() {

    return 0;
}


