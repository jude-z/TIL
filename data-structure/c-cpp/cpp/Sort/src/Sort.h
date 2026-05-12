#ifndef C_CPP_DATA_STRUCTURE_SORT_H
#define C_CPP_DATA_STRUCTURE_SORT_H

#define ARRAY_LEN 100
#define BUCKET_NUM 10
template<class T>
class Sort {
    T* arr;
    int (*comp)(T t1, T t2);

public:
    Sort();
    void set(int (*comp)(T t1, T t2));
    void bubbleSort();
    void insertSort();
    void selectSort();
    void mergeSort(int left, int right);
    void quickSort(int left, int right);
    int partition(int left, int right);

};


#endif //C_CPP_DATA_STRUCTURE_SORT_H