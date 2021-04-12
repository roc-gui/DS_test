#include <stdlib.h>
#include "LinearTable.h"

Status SqList_InitList(SqList *L) {
    L->data = (ElemType *) malloc(MAXSIZE * sizeof(ElemType));
    if (!L->data) { return ERROR; }
    L->length = 0;
    return OK;
}

Status SqList_DestoryList(SqList *L) {
    if (L->data) {
        free(L->data);
        return OK
    }
    return ERROR;
}

Status SqList_ListEmpty(SqList L) {
    if (L.length != 0) { return FALSE; }
    return TRUE;
}

void SqList_ClearList(SqList *L) {
    if (L->length != 0) { L->length = 0; }
}

Status SqList_GetElem(SqList L, int i, ElemType *e) {
    if (i < 1 || i > L.length) { return ERROR; }
    *e = L.data[i - 1];
    return OK;
}

int SqList_LocateElem(SqList L, ElemType e) {
    for (int i = 0; i < L.length; i++)
        if (L.data[i] == e) { return i + 1; }
    return 0;
}

Status SqList_PriorElem(SqList L, ElemType cur_e, ElemType *pre_e) {
    int cur = SqList_LocateElem(L, cur_e);
    if (cur == 0 || cur == 1) { return ERROR; }
    else {
        SqList_GetElem(L, cur - 1, pre_e);
        return OK;
    }
}

Status SqList_NextElem(SqList L, ElemType cur_e, ElemType *next_e) {
    int cur = SqList_LocateElem(L, cur_e);
    if (cur == 0 || cur == L.length) { return ERROR; }
    else {
        SqList_GetElem(L, cur + 1, next_e)
    }
}

Status SqList_ListInsert(SqList *L, int i, ElemType e) {
    if ((i < 1) || (i > L->length + 1)) { return ERROR; }
    if (L->length == MAXSIZE) { return ERROR; }
    for (int j = L->length - 1; j >= i - 1; j--)
        L->data[j + 1] = L->data[j];
    L->data[i - 1] = e;
    ++L->length;
    return OK;
}

int SqList_ListLength(SqList L) {
    return L.length;
}
