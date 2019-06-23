#include "seqList.h"

void SeqListInit(SeqList* psl, size_t capacity){
	assert(psl);
	psl->capicity = capacity;
	psl->array = (SLDataType*)malloc(capacity*sizeof(SLDataType));
	assert(psl->array);
	psl->size = 0;
}

void SeqListDestory(SeqList* psl){
	assert(psl);
	if (psl->array){
		free(psl->array);
		psl->capicity = 0;
		psl->size = 0;
		psl->array = NULL;
	}
}

void CheckCapacity(SeqList* psl){
	assert(psl);
	if (psl->size == psl->capicity) {
		psl->capicity *= 2;
		psl->array = (SLDataType*)realloc(psl->size,psl->capicity*sizeof(SLDataType));
	}
}

void SeqListPushBack(SeqList* psl, SLDataType x){
	assert(psl);
	CheckCapacity(psl);
	psl->array[psl->size] = x;
	psl->size++;
}

void SeqListPopBack(SeqList* psl){
	assert(psl || psl->size);
	psl->size--;
}

void SeqListPushFront(SeqList* psl, SLDataType x){
	assert(psl);
	CheckCapacity(psl);
	int i;
	for (i = psl->size - 1; i >= 0; i--){
		psl->array[i + 1] = psl->array[i];
	}

	psl->array[0] = x;
	psl->size++;
}

void SeqListPopFront(SeqList* psl){
	assert(psl);
	psl->size--;
	int i;
	for (i = 0; i < psl->size; i++){
		psl->array[i] = psl->array[i + 1];
	}
}

int SeqListFind(SeqList* psl, SLDataType x){
	assert(psl);
	int i;
	for (i = 0; i < psl->size; i++){
		if (psl->array[i] == x) {
			return i;
		}
	}
	return -1;
}

void SeqListInsert(SeqList* psl, size_t pos, SLDataType x){
	assert(psl || pos <= psl->size);
	CheckCapacity(psl);
	int i;
	for (i = psl->size - 1; i >= pos; i--){
		psl->array[i + 1] = psl->array[i];
	}
	psl->array[pos] = x;
	psl->size++;
}

void SeqListErase(SeqList* psl, size_t pos){
	assert(psl || pos < psl->size);
	psl->size--;
	int i;
	for (i = 0; i < psl->size; i++){
		psl->array[i] = psl->array[i + 1];
	}
}

void SeqListRemove(SeqList* psl, SLDataType x){
	assert(psl);
	int pos = SeqListFind(psl, x);
	if (pos >= 0) {
		SeqListErase(psl, pos);
	}
}

void SeqListModify(SeqList* psl, size_t pos, SLDataType x){
	assert(psl || pos < psl->size);
	psl->array[pos] = x;
}

void SeqListPrint(SeqList* psl){
	assert(psl);
	int i;
	for (i = 0; i < psl->size; i++){
		printf("%d ", psl->array[i]);
	}
	putchar('\n');
}

void SeqListBubbleSort(SeqList* psl){
	int i, j;
	SLDataType tmp;
	for (i = 0; i < psl->size - 1; i++){
		for (j = 0; j < psl->size - 1 - i; j++) {
			if (psl->array[j]>psl->array[j + 1]) {
				tmp = psl->array[j];
				psl->array[j] = psl->array[j + 1];
				psl->array[j + 1] = tmp;
			}
		}
	}
}

int SeqListBinaryFind(SeqList* psl, SLDataType x){
	assert(psl);
	int left = 0;
	int right = psl->size - 1;
	int mid;
	while (left <= right) {
		mid = (left + right) / 2;
		if (x > psl->array[mid]) {
			left = mid + 1;
		}
		else if(x < psl->array[mid]){
			right = mid - 1;
		}
		else{
			return mid;
		}
	}
	return -1;
}

void SeqListRemoveAll(SeqList* psl, SLDataType x);