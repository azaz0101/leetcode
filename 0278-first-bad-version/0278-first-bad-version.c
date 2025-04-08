// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {
    long long int left,right,mid;
    left = 0;
    right = n;
    while(left <= right){
        mid = (left + right) / 2;
        if (isBadVersion(mid)){
            if (isBadVersion(mid-1)){
                right = mid - 1;
            }
            else {
                return mid;
            }
        }
        else {
            left = mid + 1;
        }
    }
    return -1;
}