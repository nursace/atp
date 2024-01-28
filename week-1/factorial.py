n = int(input('Enter a number: '))

factorial = 1

i = 1
while i <= n:
    factorial = factorial * i
    i += 1

print('Factorial: ' + str(factorial))
