class Solution{
    public:
    long long kthSmallestElement(long long A[],long long N, long long k){
        priority_queue<long long> maxh;
        
        for(long long i=0; i<N; i++){
            maxh.push(A[i]);
            if(maxh.size()>k)
            maxh.pop();
        }
        return maxh.top();
    }
    
    long long sumBetweenTwoKth( long long A[], long long N, long long K1, long long K2)
    {
            // normally hum kth smallest wala element find kr lenge 
            // aur phir un dono ke beech se ans nikal denge
       long long first = kthSmallestElement(A,N,K1);
       long long second = kthSmallestElement(A,N,K2);
     
        long long ans = 0;
        
        for(long long i=0; i<N; i++){
            if(A[i]>first && A[i]<second)
            {
                ans=ans+A[i];
            }
        }
        return ans;
    }
