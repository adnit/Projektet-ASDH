# Projekti 1 -- Pointerët dhe Referencat

## Kërkesa 1

Me fjalë tuaja, jepeni nga një përshkrim të shkurtër për së paku 5 nga konceptet në vijim.
Preferohet të ilustrohen me shembuj.

- Memoria dhe adresat fizike
- Variablat
- Pointerët
- Dereferencimi i pointerit
- L-values, R-values, operatori &
- Alokimi statik dhe dinamik
- Referencat
- Dallimi dhe ekuivalentimi i referencave me pointerët
- Thirrja dhe kthimi përmes vlerës
- Thirrja dhe kthimi përmes referencës

## Kërkesa 2

Funksionet në vijim e pranojnë një varg `v` dhe me bartje përmes referencës i llogaritin
dhe i vendosin karakteristikat e vargut (min, max, mesatarja) në parametrat përkatës.

Të shkruhen definicionet e funksioneve nëse janë dhënë këto deklarime:

```cpp
void llogarit_ref(int* v, int n, int& min, int& max, double& mes);
void llogarit_ptr(int* v, int n, int* min, int* max, double* mes);
```

Pastaj:

1. Në `main` të deklarohet dhe të inicializohet një varg sipas dëshirës.
2. Të llogariten karakteristikat e vargut duke përdorur variantin `llogarit_ref` dhe të shtypen rezultatet në ekran.
3. Të llogariten karakteristikat e vargut duke përdorur variantin `llogarit_ptr` dhe të shtypen rezultatet në ekran.

## Kërkesa 3

Të shkruhet funksioni `kopjo(*v, n)` i cili kopjon një varg dhe kthen një pointer për kopjen e vargut.
Vargu i kopjuar duhet të alokohet dinamikisht.

Në `main` të deklarohet dhe inicializohet një varg sipas dëshirës.
Pastaj të kopjohet vargu dhe të shtypen të gjitha elementet nga kopja.

Para mbylljes së programit të lirohet memoria e alokuar.

## Kërkesa 4

Të deklarohet struktura `Personi` e cila mban 3 veçori sipas dëshirës.

Të shkruhet funksioni `shtyp(Personi* p)` i cili i shtyp veçoritë e personit në ekran.

Në `main` të alokohen dy variabla të tipit `Personi`. E para alokohet në mënyrë statike, ndërsa e dyta në mënyrë dinamike.
Të shtypen të dhënat e të dy personave përmes funksionit `shtyp(Personi* p)`.