int maxArea(vector<int>& height) {
      int i = 0;
      int n = height.size()-1;
      int max = 0;

      while(i < n){
          if(height[i] < height[n]){
              if(max < (min(height[i], height[n]) * (n-i))){
                  max = (min(height[i], height[n]) * (n-i));
              }
              i++;
          }else if(height[i] >= height[n]){
              if(max < (min(height[i], height[n]) * (n-i))){
                  max = (min(height[i], height[n]) * (n-i));
              }else{
                n--;
              }
          }
      }

    return max;

}