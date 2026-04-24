#ifndef CPP_ARRAY_LIST_H
#define CPP_ARRAY_LIST_H

#define TRUE 1
#define FALSE 0

#define LIST_LEN 100

typedef int Data;

class ArrayList {
    Data arr[LIST_LEN];
    int size;
    int capacity;
    int cur_position;
    int element_count;

    public :
    ArrayList():arr{0},size(0),capacity(0),cur_position(-1),element_count(0){}

    void insert(Data data);
        int first(Data* data);
        int next(Data* data);
        Data remove();
        int count();
        void grow();
        int is_full();
};
typedef ArrayList List;
#endif
