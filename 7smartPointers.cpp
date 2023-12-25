#include <iostream>
#include <memory>
using namespace std;

class MyClass{
    public:
        MyClass(){
            cout << "Constructor" << endl;
        }
        ~MyClass(){
            cout << "Destructor" << endl;
        }
};

int main(){
    unique_ptr<int>unPtr1 = make_unique<int>(25);
    unique_ptr<int>unPtr2 = move(unPtr1);

    cout << *unPtr2 << endl;
    //cout << *unPtr2 << endl;
    
    unique_ptr<MyClass>unPtr3 = make_unique<MyClass>();
    //shared pointers have the count of owners
    //shared pointers memory is deallocated when there are no more pointers pointing to the object
    shared_ptr<MyClass>shPtr1 = make_shared<MyClass>();
    cout << "Shared count: " << shPtr1.use_count() << endl;
    {
    shared_ptr<MyClass>shPtr2 = shPtr1;
    cout << "Shared count: " << shPtr1.use_count() << endl;
    }
    cout << "Shared count: " << shPtr1.use_count() << endl;


    weak_ptr<int>weakPtr1;
    {
        shared_ptr<int>sharedPtr4=make_shared<int>(10);
        weakPtr1 = sharedPtr4;
    }

    return 0;
}