def main ():
    N = int(input("Enter N: "))
    for n in range(1, N + 1):
        r = (n ** 3 - 4 * n) % 3
        print(r)

        if n % 3 == 0:
            print("Divisible by 3")
        elif n % 3 == 1:
            print("Remainder 1 when divided by 3")
        elif n % 3 == 2:
            print("Remainder 2 when divided by 3")

if __name__ == "__main__":
    main()