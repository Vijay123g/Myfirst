int maxProduct(int* nums, int numsSize){
    int i,j;
    int r=nums[0];
    
    for(i=0;i<numsSize;i++)
    {
        int m = nums[i];
        for(int j=i+1;j<numsSize;j++)
        {
            if (r>m)
                r=r;
            else if(m>r)
                r=m;
            m*=nums[j];
        }
        
        if(r>m)
            r=r;
        else if(m>r)
            r=m;
    }
    return r;
}
