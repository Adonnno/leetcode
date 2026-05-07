class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int zeroOccur =0 ;
        int capacity = arr.size();
        
        for(int i = 0; i < capacity; i++){
            if( arr[i] == zeroOccur){
                for(int j = capacity - 1; j > i; j--){
                    arr[j] = arr[j-1];
                }
                i++;
            }
            
            else
                continue;
        }
    }
};