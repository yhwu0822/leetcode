class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {

        int head;
        int tail;
        vector<int> output;
        output.reserve(k);


        if(arr[0] > x){
            head = 0;
            tail = head;
        }else if(arr[arr.size() - 1] < x){
            tail = arr.size() - 1;
            head = tail;
        }else{
            head = 0;
            tail = arr.size() - 1;
            while((tail - head) > 1){
                int target = (tail + head) / 2;
                if(arr[target] > x) {
                    tail = target;
                }else if(arr[target] < x){
                    head = target;
                }else {
                    head = target;
                    tail = target;
                }
            }
        }
        if(abs(x,arr[head]) <= abs(x,arr[tail]))
            tail = head;
        else
            head = tail;


        while((tail - head + 1) != k) {
            if ((head - 1) < 0){
                tail += 1;
            }else if((tail + 1) >= arr.size()){
                head -= 1;
            }else if(abs(x,arr[head-1]) <= abs(x,arr[tail+1])){
                head -= 1;
            }else {
                tail += 1;
            }
        }


        for(int i = head; i <= tail; i++){
            output.push_back(arr[i]);
        }



        cout<<head<<","<<tail<<"/n";

        return output;

    }

    int abs(int a, int b){
        if ((a - b) < 0){
            return -(a-b);
        }
        return a-b;
    }

    int distance(int a, int b) {
        return ::abs(a - b);
    }
};

#time<59.63%
#space<86.01%