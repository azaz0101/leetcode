typedef struct {
    int index;
    int value;
} Element;

int cmp(const void *a, const void *b){
    return ((Element *)a)->value - ((Element *)b)->value;
}

bool containsNearbyDuplicate(int* nums, int numsSize, int k) {
    Element *elements = (Element *)malloc(numsSize * sizeof(Element));
    for (int i=0;i<numsSize;i++){
        elements[i].index = i;
        elements[i].value = nums[i];
    }
    qsort(elements, numsSize, sizeof(Element), cmp);
    for (int i=0;i<numsSize-1;i++){
        if (elements[i].value == elements[i+1].value){
            if (abs(elements[i].index - elements[i+1].index) <= k){
                free(elements);
                return true;
            }
        }
    }
    free(elements);
    return false;
}