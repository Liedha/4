a = eval(input("Masukkan nilai "))
b = eval(input("Masukkan nilai "))
c = eval(input("Masukkan nilai "))

if(a<b and a<c):
    if(b<c):
        print("nilai terkecil ke terbesar = ",a,b,c)
    else:
        print("nilai terkecil ke terbesar = ",a,c,b)
elif(b<a and b<c):
    if(a<c):
        print("nilai terkecil ke terbesar = ",b,a,c)
    else:
        print("nilai terkecil ke terbesar = ",b,c,a)
else:
    if(a<b):
        print("nilai terkecil ke terbesar = ",c,a,b)
    else:
        print("nilai terkecil ke terbesar = ",c,b,a)


