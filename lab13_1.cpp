void stat(const double x[],int y,double z[]){
    double sum,max = x[0],min = x[0],SD,GM = 1,HM;
    double Y = 1/(double)y;
    for(int i = 0;i < y;i++){
        sum = sum + x[i];
        GM = GM * x[i];
        if(max < x[i]) max = x[i];
        if(min > x[i]) min = x[i];   
    }
    z[0] = sum/y;
    z[2] = pow(GM,Y);
    z[4] = max;
    z[5] = min;
    
    for(int j = 0;j < y;j++){
        SD = SD +((x[j]-z[0])*(x[j]-z[0]));
    }
    z[1] = pow(SD/y,0.5);
    
    for(int k = 0;k < y;k++){
        HM = HM + (1/x[k]);
    }
    z[3] = y/HM;
}