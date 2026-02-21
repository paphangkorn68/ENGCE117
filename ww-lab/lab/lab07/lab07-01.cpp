#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

struct studentNode {
    char name[20];
    int age;
    char sex;
    float gpa;
    studentNode *next;
};

class LinkedList {
protected:
    studentNode *start, *now;
public:
    LinkedList() {
        start = nullptr;
        now = nullptr;
    }

    ~LinkedList() {
        studentNode *temp;
        while (start != nullptr) {
            temp = start;
            start = start->next;
            delete temp;
        }
    }

    void InsNode(char n[], int a, char s, float g) {
        studentNode *newNode = new studentNode;
        strcpy(newNode->name, n);
        newNode->age = a;
        newNode->sex = s;
        newNode->gpa = g;
        newNode->next = nullptr;

        if (start == nullptr) {
            start = newNode;
            now = start;
        } else {
            studentNode *temp = start;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void DelNode() {
        if (start == nullptr || now == nullptr) return;

        if (now == start) {
            start = start->next;
            delete now;
            now = start;
        } else {
            studentNode *prev = start;
            while (prev->next != now && prev->next != nullptr) {
                prev = prev->next;
            }
            if (prev->next == now) {
                prev->next = now->next;
                delete now;
                now = prev->next;
            }
        }
    }

    void GoNext() {
        if (now != nullptr) {
            now = now->next;
        }
    }

    virtual void ShowNode() {
        if (now != nullptr) {
            printf("%s %d %c %.2f\n", now->name, now->age, now->sex, now->gpa);
        }
    }
};

class NewList : public LinkedList {
public:
    void GoFirst() {
        now = start;
    }

    void ShowNode() override {
        if (now != nullptr) {
            if (now->next != nullptr) {
                printf("%s %s\n", now->next->name, now->name);
            } else {
                printf("%s\n", now->name);
            }
        }
    }
};

int main() {
    LinkedList listA;
    NewList listB;
    LinkedList *listC;

    listA.InsNode("one", 1, 'A', 1.1);
    listA.InsNode("two", 2, 'B', 2.2);
    listA.InsNode("three", 3, 'C', 3.3);
    listA.GoNext();   
    listA.ShowNode(); 

    listB.InsNode("four", 4, 'D', 4.4);
    listB.InsNode("five", 5, 'E', 5.5);
    listB.InsNode("six", 6, 'F', 6.6);
    listB.GoNext();   
    listB.DelNode();  
    listB.ShowNode(); 

    listC = &listA;
    listC->GoNext();  
    listC->ShowNode(); 

    listB.GoFirst();  
    listB.ShowNode(); 

    return 0;
}
