class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
    // To find Nearest point of the rectangle from the center of the circle(xi, yi)
    int xi;
    int yi;
    //To find xi
    if(x1 > xCenter) {
        xi = x1;
    } else if(x2 < xCenter) {
        xi = x2;
    } else {
        xi = xCenter;
    }   


    //To find yi
    if(y1 > yCenter) {
        yi = y1;
    } else if(y2 < yCenter) {
        yi = y2;
    } else {
        yi = yCenter;
    }  

    //To find the distance between the Nearest of the rectangle from the center of the circle ---> Center of the circle 

    int distance = sqrt((xi - xCenter)*(xi - xCenter) + (yi - yCenter)*(yi - yCenter));


    if(distance <= radius) {
        return true;
    }
    else {
        return false;
    }
    }
};