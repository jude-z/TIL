#include "NameCard.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
NameCard* makeNameCard(char* name, char* phone) {
    NameCard* name_card = (NameCard*)malloc(sizeof(NameCard));
    strcpy(name_card -> name,name);
    strcpy(name_card -> phone,phone);
    return name_card;
}

void showNameCardInfo(NameCard* name_card) {
    printf("name : %s\n",name_card -> name);
    printf("phone : %s\n",name_card -> phone);
}
int nameCompare(NameCard* name_card, char* name) {
    if (strcmp(name_card -> name,name) == 0) return 0;
    return 1;
}
void changePhoneNum(NameCard* name_card, char* phone) {
    strcpy(name_card -> phone,phone);
}