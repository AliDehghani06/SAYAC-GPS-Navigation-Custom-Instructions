int main()
{
    int pos_x1 = 10;
    int pos_y1 = 20;
    int pos_x2 = 40;
    int pos_y2 = 60;
    int dx = pos_x2 - pos_x1;
    int dy = pos_y2 - pos_y1;

    int squared_sum = dx * dx + dy * dy;
    int distance = 0;

    while (1)
    { //(distance + 1) * (distance + 1) <= squared_sum
        int dis2 = distance + 1;
        int dis2pow2 = dis2 * dis2;
        if(dis2pow2 <= squared_sum){
            distance = distance + 1;
        }
        else{
            break;
        }
    }

    int angle;

    if (dx == 0)
    {
        angle = 90;
    }
    else
    {
        int ratio = (dy * 100) / dx;

        if (ratio <= 8)
            angle = 5;
        else if (ratio <= 17)
            angle = 10;
        else if (ratio <= 27)
            angle = 15;
        else if (ratio <= 36)
            angle = 20;
        else if (ratio <= 47)
            angle = 25;
        else if (ratio <= 58)
            angle = 30;
        else if (ratio <= 70)
            angle = 35;
        else if (ratio <= 84)
            angle = 40;
        else if (ratio <= 100)
            angle = 45;
        else if (ratio <= 119)
            angle = 50;
        else if (ratio <= 143)
            angle = 55;
        else if (ratio <= 173)
            angle = 60;
        else if (ratio <= 214)
            angle = 65;
        else if (ratio <= 275)
            angle = 70;
        else if (ratio <= 373)
            angle = 75;
        else if (ratio <= 567)
            angle = 80;
        else
            angle = 85;
    }

    int distance_result = distance;
    int angle_result = angle;

}