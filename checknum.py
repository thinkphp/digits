'''
Se citeste de la tastatura un numar natural. Sa se verifice daca
numarul are cifrele in ordine:
- crescatoare
- descrescatoare
- unordered
'''
def main():

    # read the number from input medium standard
    num = int(input())

    # check if the numbes has multimple digits
    while num % 10 == num // 10 % 10:
        num //= 10

    # look up last digits to determine if is ascending or descending order
    if num % 10 > num // 10 % 10:
        asc = 1
    else:
        asc = 0

    # if the number has the digits in ascending order

    if(asc == 1):

        ord = 1

        while num // 10 != 0:

             if num % 10 < num // 10 % 10:

                  ord = 0

             num //= 10

        if ord == 1:

            print("Ascending Order.")

        else:

            print("Unordered")

    elif asc == 0:

        ord = 1

        while num // 10 != 0:

            if num % 10 > num // 10 % 10:

                ord = 0

            num //= 10

        if ord == 1:

            print("Descending Order.")

        else:

            print("Unordered")

main()
