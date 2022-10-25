n = int(input("Masukkan detik : "))
hari = n % (86400*30) // 86400
jam = (n % 86400) // 3600
menit = n % 3600 // 60
detik = n % 60
print(f" {hari} hari {jam} : {menit} : {detik} ")