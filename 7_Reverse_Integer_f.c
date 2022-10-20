class Solution {
public:
    int reverse(int x) {
        int output = 0;
        int num;


        while (x){

            if(output>INT_MAX/10 || output<INT_MIN/10){
                return 0;
            }else{
                num = x % 10;
                x /= 10;
                if(output>INT_MAX/10)
                    return 0;
                output *= 10;
                cout<<num<<endl;
                output += num;
            }





        }



        cout<<"-----"<<endl;

        return output;
    }
};

//time<100.00%
//space<75.32%