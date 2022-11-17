class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int ox1, oy1, ox2, oy2;
        ox1 = max(ax1, bx1);
        oy1 = max(ay1, by1);
        ox2 = min(ax2, bx2);
        oy2 = min(ay2, by2);

        cout<<"("<<ox1<<","<<oy1<<") , ("<<ox2<<","<<oy2<<")"<<endl;

        if (ox1 >= ox2 || oy1 >= oy2){
            return (ax2 - ax1)*(ay2 - ay1) + (bx2 - bx1)*(by2 - by1);
        }
        return (ax2 - ax1)*(ay2 - ay1) + (bx2 - bx1)*(by2 - by1) - (ox2 - ox1)*(oy2 - oy1);
    }
};

//32.97
//32