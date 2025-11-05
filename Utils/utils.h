static int power(int x, int y) {
    int val = 1;
    for(int i = 0; i < y; i++) {
        val *= x;
    }
    return val;
}

static int isArmstrong(int n) {
    if(n<0) return 0;
    int digit = 0;
    int temp = n, sum = 0, num;
    
    while (temp > 0)
    {
        digit++;
        temp /= 10;
    }
    
    temp = n;
    while (temp > 0)
    {
        num = temp%10;
        temp /= 10;
        sum += power(num, digit);
    }

    return sum == n;
}

static int isPrime(int n) {
    if(n < 2) return 0; 
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            return 0;
        }
    }
    return 1;
}

static int reverse(int n) {
    int num = 0, rev = 0, base, tmp =n, digit = 0;
    while (tmp > 0)
    {
        digit++;
        tmp /= 10;
    }
    while (n > 0)
    {
        num = n%10;
        rev += num * power(10, --digit);
        n /= 10;
    }
    return rev;
}

static void swap(int *x, int *y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}
