int guessNumber(int n) {
        
        long low =  1;
        long high = n;
        long medium = (low+high)/2;

        while(low<high){
            if(guess(medium) == 0) return medium;
            if(guess(medium) == -1) high=medium-1;
            if(guess(medium) == 1) low = medium+1;
            medium = (low+high)/2;
        }

        return medium;

}