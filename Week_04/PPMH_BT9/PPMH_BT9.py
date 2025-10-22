def main ():
    N = int(input("Enter N: "))
    for n in range(1, N + 1):
        r = (n ** 3 - n) % 6
        print(r)

        if n % 6 == 0:
            print("Divisible by 3")
        elif n % 6 == 1:
            print("Remainder 1 when divided by 3")
        elif n % 6 == 2:
            print("Remainder 2 when divided by 3")
        elif n % 6 == 3:
            print("Remainder 3 when divided by 3")
        elif n % 6 == 4:
            print("Remainder 4 when divided by 3")
        elif n % 6 == 5:
            print("Remainder 5 when divided by 3")

if __name__ == "__main__":
    main()