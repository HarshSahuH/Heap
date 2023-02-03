    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        
        
        // aditya verma method
        if(l==r) return arr[0];
        
        priority_queue<int> mxheap;
        for(int i=0;i<=r;i++){
            mxheap.push(arr[i]);
            
            if(mxheap.size()>k)
            mxheap.pop();
        } 
        return mxheap.top();
    }
