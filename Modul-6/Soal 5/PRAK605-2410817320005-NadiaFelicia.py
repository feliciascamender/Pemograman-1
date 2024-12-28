n = int(input())
print("Matriks A")
Matriks_A = [list(map(int, input().split())) for _ in range(n)]

print("Matriks B")
Matriks_B = [list(map(int, input().split())) for _ in range(n)]

# Menginisialisasi Matriks_C dengan nilai 0
Matriks_C = [[0] * n for _ in range(n)]

# Menghitung hasil perkalian matriks
for i in range(n):
    for j in range(n):
        Matriks_C[i][j] = sum(Matriks_A[i][k] * Matriks_B[k][j] for k in range(n))

# Menampilkan hasil perkalian Matriks AXB
print("Matriks AXB")
for row in Matriks_C:
    print(" ".join(map(str, row)))