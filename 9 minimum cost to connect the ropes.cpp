 long long minCost(long long arr[], long long n) {
        
        priority_queue<long long,vector<long long>,greater<long long>> minh;
        long long TotalCost = 0; 
        // push all elements into minh
        for(long long i=0; i<n; i++){
            minh.push(arr[i]);
        }
        
        // minimum cost will be when we add two minimum length ropes first
        // ye hum min heap se achive karenge 
        // sbse pehle humne upr ke do element ko jodkr ek nayi rop bana li 
        // uski cost li aur nayi rope ko wapas heap mein daal diya 
        
        while(minh.size()>=2){
            long long first = minh.top();
            minh.pop();
            long long second = minh.top();
            minh.pop();
            
            long long newLenght_of_2MinRopes = first+ second;
            
            long long CurrCost = first+second;
            TotalCost = CurrCost + TotalCost;
            
            minh.push(newLenght_of_2MinRopes);
        }
       return TotalCost;
    }
