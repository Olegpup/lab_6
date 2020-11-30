def fact(N):
    if N < 0:
        return 0
    if N == 0:
        return 1
    else:
        return N * fact(N - 1)


def g(x):
    sum_1 = 0
    sum_2 = 0

    for k in range(0, 11):
        add_1 = x ** (2 * k + 1) / fact(2 * k + 1)
        sum_1 += add_1

        add_2 = x ** (3 * k) / fact(3 * k)
        sum_2 += add_2

    result = sum_1 / sum_2
    return result


y = float(input("Enter your y: "))

answer = (1.7 * g(0.25) + 2 * g(1 + y)) / (6 - g(y * y - 1))

print("Answer is", answer)

