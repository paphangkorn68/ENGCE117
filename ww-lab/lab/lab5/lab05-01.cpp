#include <stdio.h>
#include <string.h>

struct studennode {
    char name[20];
    int age;
    char sex;
    float gpa;
    struct studennode *next;
};

struct studennode *addnode(struct studennode **walk, char n[], int a, char s, float g);
void showall(struct studennode *walk);
void insnode(struct studennode *walk, char after[], char n[], int a, char s, float g);
void delnode(struct studennode *walk, char target[]);

int main() {
    struct studennode *start = NULL, *now;

    now = addnode(&start, "one", 6, 'M', 3.11);
    showall(start);

    now = addnode(&start, "two", 8, 'F', 3.22);
    showall(start);

    insnode(start, "two", "three", 10, 'M', 3.33);
    showall(start);
    
    insnode(start, "two", "four", 12, 'M', 3.44);
    showall(start);

    delnode(start, "four");
    showall(start);

    return 0;
}

void showall(struct studennode *walk) {
    while (walk != NULL) {
        printf("%s ", walk->name);
        walk = walk->next;
    }
    printf("\n");
}

struct studennode *addnode(struct studennode **walk, char n[], int a, char s, float g) {
    while (*walk != NULL) {
        walk = &((*walk)->next);
    }

    *walk = new struct studennode ;
    strcpy((*walk)->name, n);
    (*walk)->age = a;
    (*walk)->sex = s;
    (*walk)->gpa = g;
    (*walk)->next = NULL;

    return *walk;
}

void insnode(struct studennode *walk, char after[], char n[], int a, char s, float g) {
    while (walk != NULL) {
        if (strcmp((walk)->name, after) == 0) {
            struct studennode *newnode = new struct studennode ;
            strcpy(newnode->name, n);
            newnode->age = a;
            newnode->sex = s;
            newnode->gpa = g;
            newnode->next = (walk)->next;
            (walk)->next = newnode;
            return;
        }
        walk = (walk)->next;
    }
}

void delnode(struct studennode *walk, char target[]) {
    struct studennode *prev = NULL;
    struct studennode *temp = walk;

    while (temp != NULL) {
        if (strcmp(temp->name, target) == 0) {
            if (prev == NULL) {
                walk = temp->next;
            } else {
                prev->next = temp->next;
            }
            delete(temp);
            return;
        }
        prev = temp;
        temp = temp->next;
    }
}
