//
// Created by kejbi on 23.04.18.
//

#ifndef ROULETTE_CIRCULLAR_LIST_H
#define ROULETTE_CIRCULLAR_LIST_H

#include <iostream>

template <class T>
class CircullarList{
private:
    struct A{
        T content;
        A* next;
    };
    A* head;
    A* actual;
    A* tail;
public:
    CircullarList(){
        head = nullptr;
        actual = nullptr;
        tail = nullptr;
    }
    void add_element(T e){
        if(head==nullptr){
            A* temp;
            temp = new A;
            temp->content=e;
            head=temp;
            head->next=head;
            tail=head;
            actual=head;


        }
        else{
            A* temp;
            temp = new A;
            temp->content=e;
            temp->next=head;
            tail->next=temp;
            tail=temp;
        }
    }
    void next(){
        actual=actual->next;

    }
    T getActualContent(){
        return actual->content;
    }
    ~CircullarList(){
        A* temp;
        while(head!=tail){
            temp=head->next;
            tail->next=temp;
            delete head;
            head=temp;
        }
        delete head;
    }

};



#endif //ROULETTE_CIRCULLAR_LIST_H

