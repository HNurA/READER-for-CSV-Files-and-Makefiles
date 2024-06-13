[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/zBby-Al1)
# sysporg24-lab2: READER for CSV Files and Makefiles
##Learning Objectives
1. C input and output practice
2. Loops
3. Strings
4. Makefiles
### TR: Detaylar (Altta ingilizcede verildi)
1. Bir tane Makefile ekleyiniz. 
    - ``make``
    Hem compile edecek (``main.o`` ve ``reader.o`` output vermesi gerekiyor), hemde ``myreader`` isminde bir program olusturacak.
    - ``make clean``
    Tum object ve ``myreader`` program dosyalarini silecek
2. CSV tablo seklindeki datayi virgullerle ayirarak tutar; mesela:
ogrenci-no,ogrenci ismi
aradaki virgul iki sutunu ayirmakta
Yine her bir satir tablodaki farkli satiri gosterir, mesela;
    Ogrenci no,ogrenci ismi
    11,a
    22,b
Bu labda sizden Food_contents_2019.csv dosyasi uzerinde islemler yapilabilecek bir arayuz tasarlamaniz istenmektedir.
Temelde program calismaya basladiktan sonra, kullanicidan satir ve sutun indekslerini alarak asagidaki sekilde datayi gostermesi gerekmektedir.
* Satir ve sutun indeksleri *1den* baslamaktadir.
```C
./myreader
Programa hosgeldiniz seklinde bir mesaj yazdirabilirsiniz.
1 6
```

Yukaridaki 1.satir ve 5.sutunu gostermesini istemektedir. **Farkli hic bir sey yazdirmadan 1. satir ve 5.sutunu gostermesi gerekmektedir.**
Burada tam calisma su sekilde olmaktadir.
```C
./myreader
Programa hosgeldiniz seklinde bir mesaj yazdirabilirsiniz.
1 6
Comments
```
Gosterdikten sonra program sonlanmaktadir.

- Programi tamamlamak icin size verilen iki yardimci fonksiyon var onlari tamamlayarak yapiniz. Fonksiyon prototiplerini degistirmeyiniz.

- Dosya okumalarini fgets, getline vb. kullanarak yapabilirsiniz. Programinizda string array vs uzunluklarina dikkat ediniz.

## ENG: Details
1. Add a Makefile to the project: 
    - ``make``
    compiles the files (should out ``reader.o`` and ``main.o``) and build a program named ``myreader``
    - ``make clean``
       Removes all the object files and ``myreader``
2. A Comma Separated Values (CSV) file stores tabular data in plain text:
    For example;
    Student id,student name
    - And stores each row on different line (\n)
    Student Id,Student Name
    11,a
    22,b          
In this lab, you are given the file with name ``Food_contents_2019.csv`` which has data with many rows and columns. You are required to design a program that takes row and column indices from the user and outputs the corresponding data.
* **Note that indices start with 1.**
Example run
 ```C
./myreader
Welcome to the program(a welcome message)
1 6
```
In the above, 1st  row and 5th column are given as input:
Your program, without printing anything else, should print the corresponding data as follows:
```C
./myreader
Programa hosgeldiniz seklinde bir mesaj yazdirabilirsiniz.
1 6
Comments
```
It printed "Comments" because it was the entry in the first row and on the fifth column. Then it finish the execution. 


The prototypes for the helper functions are given in reader.c, you should first coplete those. Then the main function in main.c

For reading writing you can use fgets, getline and similar functions. Do NOT USE GETS or functions without checking the length of the array and input/output.


    
