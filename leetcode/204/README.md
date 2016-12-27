algo: Sieve of Eratosthenes  
Memory optimization:  
		if (isPrime != NULL) {  
            if (len < n) {  
                free(isPrime);  
                isPrime = NULL;  
                isPrime = (char *) malloc (sizeof(char)*n);  
                len = n;  
            } else {  
                memset(isPrime, 0, len );  
            }  
        } else {  
            isPrime = (char *) malloc (sizeof(char)*n);  
            len = n;  
        }  
        memset(isPrime, 0, len );  