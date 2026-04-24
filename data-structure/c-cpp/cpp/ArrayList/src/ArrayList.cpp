#include "ArrayList.h"


void ArrayList::insert(Data data) {
     arr[size++] = data;
}
int ArrayList::first(Data* data) {
     if (size == 0) return FALSE;
     cur_position = 0;
     *data = arr[cur_position];
     return TRUE;
}

int ArrayList::next(Data *data) {
     if (cur_position == size -1) return FALSE;
     *data = arr[++cur_position];
     return TRUE;
}

Data ArrayList::remove() {
     int r_pos = cur_position;
     int r_data = arr[r_pos];
     for (int i = r_pos;i<size-1;i++) {
          arr[i] = arr[i+1];
     }
     cur_position--;
     size--;
     return r_data;
}

int ArrayList::count(){
     return element_count;
}

void ArrayList::grow() {
     Data new_arr[capacity * 2];
     for (int i = 0;i<size;i++) {
          new_arr[i] = arr[i];
     }
}

int ArrayList::is_full() {
     return size == capacity;
}

