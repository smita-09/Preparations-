
def prime_numbers(N):
    primes = [n for n in range(1,N) if 0 not in [n % i for i in range(2, n//2)]]
    return primes

prime_numbers(100)