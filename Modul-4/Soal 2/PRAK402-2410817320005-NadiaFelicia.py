def odd_even(batas) :
    odd_numbers = [i for i in range(1, batas + 1) if i % 2 != 0]
    print(" ", " ". join(map(str, odd_numbers)))
    even_numbers = [i for i in range(batas, 1, -1)if i % 2 == 0]
    print(" ", " ". join(map(str, even_numbers)))
batas = int(input(" "))
odd_even(batas)