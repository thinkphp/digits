'''
Se citeste un numar natural n. Sa se verifice daca suma
cifrelor diametral opuse este constanta.
n = abcd -> a + d = b + c
n = abcde -> a + e = b + d
Exemplu:
n = 4512 , avem 4 + 2 = 1 + 5
Output -> YES
n = 22422, avem 2 + 2 = 2 + 2 = 4
Output -> YES
n = 12315, avem 1 + 5 != 2 + 1 != 3
Output -> NO
'''
def main():
    n = 7381051
    n2 = n
    print(n)
    count = 0
    p = 0
    while n2 != 0:
        p = p * 10 + n2 % 10
        n2 //= 10
        count += 1

    s = n % 10 + p % 10

    if count % 2 == 0:
        print("case#1")
        flag = True
        while p != 0:
            s2 = n % 10 + p % 10
            if s != s2:
                flag = False
            n //= 10
            p //= 10
        if flag is True:
            print("Constant!")
        else:
            print("Not Constant!")

    else:
        print("case#2")
        i = 1
        flag = True
        while n != 0:
            if i == (count // 2) + 1:
                if 2 * s != (n % 10 + p % 10):
                    flag = False
            else:
                if s != n % 10 + p % 10:
                    flag = False
            n //= 10
            p //= 10
            i += 1

        if flag is True:
            print("Constant!")
        else:
            print("Not Constant!")
main()
