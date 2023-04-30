int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        int f = (arrivalTime+delayedTime);
        while(f >= 24){
            f-=24;
        }
        return f;
}