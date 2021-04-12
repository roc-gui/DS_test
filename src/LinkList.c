#include <stdlib.h>
#include "LinearTable.h"

Status LinkList_InitList(LinkList *L) {
    L = (LinkList *) malloc(sizeof(LinkList));
    (*L)->next = NULL;
    return OK;
}

Status LinkList_DestoryList(LinkList *L) {
    LinkList p, q;
    p = (*L)->next;
    while (p) {
        q = p->next;
        free(p);
        p = q;
    }
    free(*L);
}

void LinkList_ListEmpty(LinkList L) {
    if (NULL != L->next) { return FALSE; }
    return TRUE;
}

Status LinkList_ClearList(LinkList *L) {
    LinkList p, q;
    p = (*L)->next;
    while (p) {
        q = p->next;
        free(p);
        p = q;
    }
    (*L)->next = NULL;
}

int LinkList_GetElem(LinkList L, ElemType *e) {}

int LinkList_LocateElem(LinkList L, ElemType e) {}

Status LinkList_PriorElem(LinkList L, ElemType cur_e, ElemType *pre_e) {}

Status LinkList_NextElem(LinkList L, ElemType cur_e, ElemType *next_e) {}

Status LinkList_ListInsert(LinkList *L, int i, ElemType e) {}

int LinkList_ListLength(LinkList L) {}
