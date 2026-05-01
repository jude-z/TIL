#include "NameCard.h"
#include "ArrayList.h"

int main() {
    List list;
    init(&list);
    insert(&list,makeNameCard("aaa","000"));
    insert(&list,makeNameCard("bbb","111"));
    insert(&list,makeNameCard("ccc","222"));

    Data data;
    if (first(&list,&data)) {
        if (nameCompare(data,"bbb") == 0) {
           showNameCardInfo(data);
        }
        while (next(&list,&data)) {
            if (nameCompare(data,"bbb") == 0) {
                showNameCardInfo(data);
            }
        }
    }

    if (first(&list,&data)) {
        if (nameCompare(data,"bbb") == 0) {
            remove_(&list);
        }
        while (next(&list,&data)) {
            if (nameCompare(data,"bbb") == 0) {
                remove_(&list);
            }
        }
    }

    if (first(&list,&data)) {
        showNameCardInfo(data);
        while (next(&list,&data)) {
            showNameCardInfo(data);
        }
    }
}