## Arhiva de probleme (Editura Niculescu)

### #1. Suma cifrelor
Se da un numar natural nr. Sa se scrie un algorithm pentru calcularea sumei cifrelor numarului dat. Variabila s ce va retine suma cifrelor se va initializa cu zero.

### #2. Numarul cifrelor
Se da un numar natural n. Sa se precizeze cate cifre are numarul.

### #3. Suma cifrelor pare
Se da un numar natural n. Sa se calculeze suma cifrelor pare din numarul dat.

### #4. Cifra minima/maxima
Se da un numar natural n. Se ce sa se calculeze cifra maxima/minima din numarul dat.

### #5. Numarul oglindit/rasturnat/inversat
Se da un numar natural nr. Se cere sa se determine numarul obtinut din inversarea cifrelor sale.

### #6. Testarea proprietatii de palindrom
Testarea proprietatii de palindrom. Se da un numar natural nr. Se cere sa se verifice daca numarul indeplineste propritatea de palindrom: numarul initial este
egal cu inversul sau.

Exemple: 

input -> nr = 12321, output -> nr = 12321 - Este palindrom!

input -> nr = 12311, output -> nr = 11321 - Nu este palindrom!
             

### #7. Construirea unui numar din cifrele altui.

Se da un numar natural nr. Se cere sa se construiasca un numar care va contine toate cifrele pare ale numarului initial in ordinea aparitiei lor in numar. 
Exemplu: 

Input -> nr = 120346 

Output -> nr' = 2046

### #8. Cifra de control
Se da un numar natural nr. Se cere sa se scrie un program care calculeaza cifra de control a unui numar intreg. Acesta
se obtine calculand in mod repetat suma cifrelor numarului pana cand acesta este format dintr-o singura cifra. Daca suma va fi o valoare
peste 9 numarul va lua valoarea acestei sume si se va repeta algoritmul.

Exemple:

Input -> nr = 399 

Output -> 3 + 9 + 9 = 21 = 2 + 1 = 3 Cifra de control va fi 3

### #9. Cifre pare/impare
Se citeste un numar natural nenul N. Sa se verifice daca cifrele pare si cifrele
impare alterneaza.

Input -> N = 1234
Output -> YES

Input -> N = 1223
Output -> NO

Input -> N = 4729
Output -> YES

Input -> N = 81
Output -> YES

Input -> N = 82
Output -> NO

### #9. Suma Cifre Constanta 

Se citeste un numar natural n. Sa se verifice daca suma cifrelor diametral opuse este constanta.

n = abcd -> a + d = b + c

n = abcde -> a + e = b + d

Exemplu:

n = 4512 , avem 4 + 2 = 1 + 5

Output -> YES

n = 22422, avem 2 + 2 = 2 + 2 = 4

Output -> YES

n = 12315, avem 1 + 5 != 2 + 1 != 3

Output -> NO

### #10. Cyclic Permutation
Given a number, our task is to generate all the possible cyclic permutations of the number. A cyclic permutation shift all the elements of a set by a fixed offset.

For a set with the elements: a0, a1, a2, ..., an, a cyclic permutatin of one place to the left would yield: a1, a2, ..., an, a0 and a cyclic permutation
of one place to the right would yield: an, a1, a2,...

     Input :  5674

     Output : 5674
              4567
              7456
              6745
### #11. Digits of number Ascending/descending/unordered. https://ideone.com/Zdrd4Z Python3 https://ideone.com/fgVuNB c++

Se citeste de la tastatura un numar natural N. Sa se verifice daca
numarul are cifrele in ordine:
- crescatoare
- descrescatoare
- unordered

   Input: N = 1234567

   Output: Ascending ordered.


   Input: N = 54321
   
   Output: Descending ordered.

   Input: N = 12313

   Output: Unordered.
