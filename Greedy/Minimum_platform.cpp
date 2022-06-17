int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	int i=1,j=0;
    	int count=1;
    	while(i<n){
    	    if(arr[i]<=dep[j])
    	    count++;
    	    else
    	    j++;i++;
    	}return count;
    }