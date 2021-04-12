#ifndef DS_TEST_LINEARTABLE_H
#define DS_TEST_LINEARTABLE_H

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
typedef int Status;
typedef int ElemType;

// Sequence table
#define MAXSIZE 20
typedef struct {
    ElemType *data;
    int length;
} SqList;

Status SqList_InitList(SqList *L);

Status SqList_DestoryList(SqList *L);

void SqList_ListEmpty(SqList L);

Status SqList_ClearList(SqList *L);

int SqList_GetElem(SqList L, int i, ElemType *e);

int SqList_LocateElem(SqList L, ElemType e);

Status SqList_PriorElem(SqList L, ElemType cur_e, ElemType *pre_e);

Status SqList_NextElem(SqList L, ElemType cur_e, ElemType *next_e);

Status SqList_ListInsert(SqList *L, int i, ElemType e);

int SqList_ListLength(SqList L);

//Singly linked list
typedef struct Node {
    ElemType data;
    struct Node *next;
} Node, *LinkList;

Status LinkList_InitList(LinkList *L);

Status LinkList_DestoryList(LinkList *L);

void LinkList_ListEmpty(LinkList L);

Status LinkList_ClearList(LinkList *L);

int LinkList_GetElem(LinkList L, ElemType *e);

int LinkList_LocateElem(LinkList L, ElemType e);

Status LinkList_PriorElem(LinkList L, ElemType cur_e, ElemType *pre_e);

Status LinkList_NextElem(LinkList L, ElemType cur_e, ElemType *next_e);

Status LinkList_ListInsert(LinkList *L, int i, ElemType e);

int LinkList_ListLength(LinkList L);

//Double linked list
typedef struct DulNode {
    ElemType data;
    struct DulNode *prior;
    struct DulNode *next;
} DulNode, *DuLinkList;

#endif //DS_TEST_LINEARTABLE_H
