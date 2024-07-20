# C-sport-equipment-and-supplies-sales-shop
Deskripsi Program : Program ini menggambarkan penjualan di sebuah toko alat dan perlengkapan olahraga 
di dalam program ada pendaftaran identitas,daftar untuk memilih barang,diskon barang,memilih kategori barang
pembayaran barang dari total akhir dari pembelian dan komentar pembeli terhadap penjualan tersebut.
Penjelasan Syntax : 
1.) Dalam syntax menggunakan library iostream dan stdlib.h.Iostream berfungsi untuk mengakses fitur tambahan
dalam bahasa pemrograman C++,dan stdlib.h digunakan sebagai operasi pembanding dan operasi konversi
2.) Pendeklarasian integer untuk (barang,harga,jumlah,total,bayar,kembalian,total1,total2,total3,total akhir,metode
dan pilihan) ini digunakan karena,datanya tidak ada angka pecahan.
Pendelaklarasian Char untuk(nama,alamat,status,usia,pelajar,puas,lagi,daftar) sebab digunakannya karena,datanya
merupakan sebuah karakter.
Pendeklarasian float untuk(Diskon).Sebab digunakannya karena,data diskon menyimpan angka pecahan.
Pendeklarasian Void() untuk(Total,Puas,Status,Alat Fitness,Alat Olahraga,Perlengkapan,dan Pembayaran).
Sebab digunakannyakarena,sebagai jenis pengembalian fungsi. yang sudah dideklarasikan oleh void itu sendiri.
3.)Di dalam program juga menggunakan Looping agar System CLS berfungsi saat kita membuat OR Iya atau tidak.
Di dalam program ada juga pendaftaran di dalam nya ada NamaStatus dan Alamat itu semua memakai Type Data
Char dan dideklarasikan cin.ignore(untuk mengabaikan atau membuang jumlah karakter yang telah dibatasi) dan memakai 
cin.getline(untuk membaca baris teks input dan menyimpannya dalam sebuah type data).
4.)Setelah itu,ada sebuah daftar barang yang jumlah totalnya ada 10 barang dan di dalamnya ada 3 kategori barang
Pilihan,Jumlah,Banyak barang yang dibeli yang sudah dideklarasikan dan akan muncul otomatis setelah pembeli memilih 
jumlah barang yang dibeli dan ada pertanyaan yaitu pelajar/tidak.Jika,iya akan mendapatkan diskon dan sebaliknya,kalau 
selain pelajar tidak medapatkan sebuah diskon.
5.)Selanjutnya,memakai IF ELSE untuk menentukan pilihan suatu barang sesuai harga yang telah tercantum di daftar barang.
6.)Sistem Switch case untuk pemilihan kategori barang yang tersedia pada syntax.
7.)Ada proses pembuatan pembayarannya yaitu dengan cara pembeli membayar dan bila uang ada kembalian 
menggunakan Kembalian = bayar-total.
8.)Pemanggilan fungsi sudah di tempatkan pada kegunaanya masing-masing.
9.)Lalu,ada komentar untuk para pembeli untuk menilai apakah pembeli puas atau tidak,Jika,pembeli input IYA maka
muncul komentar baik dari Penjual dan sebaliknya,apabila pembeli input TIDAK maka akan muncul komentar permohonan
maaf dari Pelayan yang ada di toko untuk melayani pembeli.

Penjelasan Output :
1.)Seorang pembeli akan diminta sebuah identitas terdiri dari Nama,Alamat,Status,dan Usia.Lalu,ditawarkan apakah anda 
ingin melihat daftar barang input "IYA"akan muncul sebuah kategori.
2.)Di dalam kategori ada 3 pilihan yaitu alat fitness,alat olahraga,dan perlengkapan.apabila,memilih nomor 1 akan muncul
daftar barang alat fitness apabila,memilih nomor 2 akan muncul daftar barang alat olahraga dan apabila,memilih nomor 3 
akan muncul daftar barang perlengkapan olahraga.
3.)Jika memilih salah satunya akan muncul pertanyaan dan ada pertanyaan Apakah anda mau membeli lagi ?lalu,nanti akan
muncul kategori pilihan barang.Lalu,saat sudah tidak ingin membeli lagi akan muncul call function dari pembayaran di sistem
pemilihan metode pembayaran.
4.)Jika,membeli ketiga kategori tadi,harga seluruhnya akan dijumlahkan apabila,anda seorang pelajar akan mendapatkan sebuah
diskon.
5.Sesudah itu,ada pertanyaan Apakah anda puas belanja di Toko kami ?.Bila,mengetik i/Iya akan muncul kalimat baik dari penjual
toko dan bila,mengetik t/tidak akan muncul kalimat permohonan maaf dari penjual.
