def print_cross(zayne, rafa):
    if zayne > rafa:

        for i in range(zayne, rafa - 1, -1):
            print(f"{i} {zayne + rafa - i}", end="")
            if i > rafa:
                print(" - ", end="")
    else:
        for i in range(zayne, rafa + 1):
            print(f"{i} {rafa - i + zayne}", end="")
            if i < rafa:
                print(" - ", end="")
    print()

def main():
    caleb, sylus = map(int, input(" ").split())

    print_cross(caleb, sylus)
    
if __name__ == "__main__":
    main() 
 