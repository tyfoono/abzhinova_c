    #include <stdio.h>

    int main() {

        int n;
        scanf("%d", &n);

        for(int i = 1; i <= n; i++){
            int t = i, flag = 0;
            while (t > 0) {
                int digit = t % 10;
                t /= 10;
                if(digit == 0 || i % digit) { flag = 1; break; }
            }
            if(!flag) printf("%d ", i); 
        }

        return 0;
    }
