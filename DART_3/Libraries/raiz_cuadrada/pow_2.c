extern num, repeat;

double pow(double x, int z){
    int i;
    double y;
    y = x; 
    for(i = 1; i < z; i++){
        y *= x;
    }

    return y;
}
