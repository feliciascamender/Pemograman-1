def fathi(bila):
    return -bila if bila < 0 else bila
def ega(rihan, rey):
    return fathi(rihan-rey)
def main():
    a, c, b, d = map(int, input().split())
    ipk = ega(a,b)+ega(c,d)
    print(fathi(ipk))
main()