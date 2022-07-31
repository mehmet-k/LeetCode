

int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2){
    int total = (ax2-ax1)*(ay2-ay1) + (bx2-bx1)*(by2-by1);
    int cx1,cx2,cy1,cy2;
    
    if(ax1 < bx2 && ay1 <by2 && ax2 > bx1 && ay2 > by1){
        
        if(by1>ay1) cy1 = by1;
        else cy1 = ay1;

        if(by2<ay2) cy2 = by2;
        else cy2 = ay2;

        if(bx2<ax2) cx2 = bx2;
        else cx2 = ax2;

        if(bx1>ax1) cx1 = bx1;
        else cx1 = ax1;

        total -= (cy2-cy1)*(cx2-cx1);
        
    }
    return total;
}