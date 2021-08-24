'''
Given a number, our task is to generate all the possible cyclic permutations of the number. A cyclic permutation shift all
the elements of a set by a fixed offset.
For a set with the elements: a0, a1, a2, ..., an, a cyclic permutatin of one
place to the left would yield: a1, a2, ..., an, a0 and a cyclic permutation
of one place to the right would yield: an, a1, a2,...

 Input :  1234

 Output : 1234
          4123
          3412
          2341
'''

'''
Given a number, our task is to generate all the possible cyclic permutations of the number. A cyclic permutation shift all
the elements of a set by a fixed offset.
For a set with the elements: a0, a1, a2, ..., an, a cyclic permutatin of one
place to the left would yield: a1, a2, ..., an, a0 and a cyclic permutation
of one place to the right would yield: an, a1, a2,...

 Input :  1234

 Output : 1234
          4123
          3412
          2341
'''
def GetCount(n):
    cnt = 0
    while n != 0:
        cnt += 1
        n //= 10
    return cnt

def cyclic(number):

    n = GetCount(number)
    num = number

    while True:
        print(num, end = "\n")
        r = num % 10
        div = num // 10
        num = pow(10, n - 1) * r + div
        if num == number:
              break


def main():

    n = int(input("N = "))
    cyclic(n)

main()
