def tax_included(price, rate):
    return price * (100 + rate) // 100

X = int(input())

print(tax_included(X, 10))