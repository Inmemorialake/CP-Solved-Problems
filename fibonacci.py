import sys

# 1. Seguridad por si el resultado supera los 4,300 dígitos al imprimir
sys.set_int_max_str_digits(100000) 

def fibonacci_iterativo(n):
    if n <= 0:
        return 0
    elif n == 1:
        return 1
    
    a, b = 0, 1
    for _ in range(2, n + 1):
        a, b = b, a + b
    return b

n = int(input("Ingrese el número de Fibonacci que desea encontrar: "))

resultado = fibonacci_iterativo(n)
print(f"El dígito {n} de Fibonacci es: {resultado}")
