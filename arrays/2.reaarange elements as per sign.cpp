class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        
        vector<int> a(n+1/2);
        vector<int> b((n/2));
        int j=0,k=0;
        for (int i=0;i<n;i++){
            if(nums[i]<0){
                a[j]=nums[i];
                j++;
            }
            if(nums[i]>=0){
                b[k++]=nums[i];
            }
        }
        int f=0,g=0;
        for(int q=0;q<n;q=q+2){
           
            nums[q]=b[f];
            f++;
        }
 for(int i=1;i<n;i=i+2){
           
            nums[i]=a[g];
            g++;
        
    }
    return nums;}

};
