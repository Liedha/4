a = eval(input("\nMasukkan angka = "))

if(a<10 and a>0):
        print("Satuan\n")
if(a>10 and a<20):
        print("Belasan\n")
if(a>=20 and a<100):
        print("Puluhan\n")
if(a==0):
        print("Nol\n")
if(a>=100):
        print("Anda Menginput Melebihi Limit Bilangan\n")
