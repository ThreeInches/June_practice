#ifndef _SEQLIST_H_
#define _SEQLIST_H_

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// 顺序表的动态存储
typedef int SLDataType;
typedef struct SeqList
{
	SLDataType* array; // 指向动态开辟的数组
	size_t size; // 有效数据个数
	size_t capicity; // 容量空间的大小
}SeqList;
// 基本增删查改接口
void SeqListInit(SeqList* psl, size_t capacity);//置空
void SeqListDestory(SeqList* psl);//删除
void CheckCapacity(SeqList* psl);//开辟空间
void SeqListPushBack(SeqList* psl, SLDataType x);//尾插
void SeqListPopBack(SeqList* psl);//尾删
void SeqListPushFront(SeqList* psl, SLDataType x);//头插
void SeqListPopFront(SeqList* psl);//尾插
int SeqListFind(SeqList* psl, SLDataType x);//查找元素时间复杂度O(n)
void SeqListInsert(SeqList* psl, size_t pos, SLDataType x);//中检插
void SeqListErase(SeqList* psl, size_t pos);//中间删
void SeqListRemove(SeqList* psl, SLDataType x);//删元素
void SeqListModify(SeqList* psl, size_t pos, SLDataType x);//插元素
void SeqListPrint(SeqList* psl);//打印
// 扩展面试题实现
void SeqListBubbleSort(SeqList* psl);//冒泡排序
int SeqListBinaryFind(SeqList* psl, SLDataType x);//二分查找(简单分治思想)时间复杂度O(logn)
// 本题要求：时间复杂度：O(N) 空间复杂度 O(1)
void SeqListRemoveAll(SeqList* psl, SLDataType x);//去重
#endif //_SEQLIST_H_