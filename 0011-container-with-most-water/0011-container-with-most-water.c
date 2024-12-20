int maxArea(int* height, int heightSize) {
    int maxVol=0;
    int left,right, vol;
    left = 0;
    right = heightSize - 1;
    while(left < right){
        if (height[left] > height[right]){
            vol = (right - left) * height[right];
            right--;
        }
        else {
            vol = (right - left) * height[left];
            left++;
        }
        if (vol > maxVol){
            maxVol = vol;
        }
    }
      
    return maxVol;
}