# Projekti 2 -- Klasat



## Kërkesa 1



Të deklarohet klasa `Drejtkendeshi` me anëtarët:



- Fushat private `gjeresia` dhe `lartesia` (nr. real).

- Konstruktorin inicializues `Drejtkendeshi(gjeresia, lartesia)`.

- Metodat `getGjeresia()`, `getLartesia()`, `setGjeresia(val)`, `setLartesia(val)`.

  Versionet `get` kthejnë fushën private, ndërsa `set` e mbishkruajnë vlerën.

- Metodat publike `siperfaqja()`, `perimetri()`.

- Në `main` të instancohen së paku 2 drejtkëndësha, ku njëri instancim bëhet me alokim statik ndërsa tjetri me alokim dinamik.

- Të përdoren nga së paku 3 metoda për secilën instancë të krijuar në `main`.



## Kerkesa 2



Të deklarohet numërimi `PjesaProvimit` me vlerat:



$$

\textrm{PjesaProvimit} = \{ \textrm{PjesaShkrim}, \textrm{PjesaTeorike} \}

$$



Të deklarohet klasa `Rezultati` me anëtarët:



- Fushat private `piketShkrim` dhe `piketTeori` si numra të plotë.

- Konstruktorin inicializues `Rezulati(piketShkrim, piketTeori)`.

- Metoda publike `piketMesatare()` e cila kthen mesataren e dy pikeve.

- Metoda publike `kaKaluar()` e cila kthen `true` nese mesatarja e pikëve është 50 ose më shumë.

- Metoda publike `pjesaMaksimale()` e cila kthen cila pjesë e provimit ka pasur më shumë pikë, pra nëse

  `piketShkrim` janë më të mëdhaja se `piketTeori`, kthehet vlera `PjesaShkrim`, përndryshe kthehet vlera `PjesaTeorike`.

- Në `main` të krijohet një instancë e tipit `Rezultati` dhe të përdoren metodat e saj.



## Kerkesa 3



Të deklarohet klasa `Data` me anëtarët:



- Fushat private `d`, `m`, `v`.

- Konstruktorin inicializues `Data(d, m, v)`.

- Konstruktorin default `Data()` i cili i vendos vlerat e datës së sotme.

- Metodat publike:

    - `dita()` - kthen ditën e datës.

    - `muaji()` - kthen muajin e datës.

    - `viti()` - kthen vitin e datës.

    - `tremujori()` - kthen tremujorin në të cilin gjendet data (1-4).

    - `shekulli()` - kthen shekullin e datës.

- Metodën publike `toString()` e cila e kthen datën ne string, psh. `06/03/2020`.

- Në `main` të krijohet një instancë e tipit `Data` dhe të përdoren metodat e saj.



## Kerkesa 4



Të deklarohet struktura `Shfrytezuesi` me anëtarët:



- Fushat private  `emri`, `mbiemri`, `email`, `fjalekalimi`,

- Konstruktorin inicializues `Shfrytezuesi(emri, mbiemri, email, fjalekalimi)`.

- Metodën publike `emriPlote()` e cila e kthen emrin dhe mbiemrin e shfrytëzuesit.

- Metodën publike `testLogin(email, fjalekalimi)` e cila kthen true nëse përputhen parametrat me vlerat aktuale.



Në `main` të deklarohet një varg me 5 shfrytëzues të instancuar.

Nga tastiera të lexohet email dhe fjalëkalimi.

Nëse vlerat përputhen me ndonjërin shfrytëzues (duke përdorur metodën `testLogin`) atëherë të shfaqet në ekran emri i plotë i shfrytëzuesit.

Në rast se vlerat nuk përputhen me asnjërin shfrytëzues atëherë të shfaqet një mesazh gabimi dhe të kërkohen të dhënat përsëri.



## Vlerësimi



Nuk jeni të obliguar të ofroni zgjidhje për të gjitha kërkesat në këtë detyrë.



Secila kërkesë mban 1/4 të pikëve totale dhe llogaritja e totalit bëhet duke i mbledhur pikët e kërkesave të zgjidhura në mënyrë korrekte.



## Dorëzimi



Dorëzimi do të bëhet në email adresën **edon.gashi@uni-pr.edu** me titull: `ASDH/P2 Emri Mbiemri` para datës **20/03/2020 23:59**.



Formati dhe mediumi i punimit nuk është i përcaktuar. Tregojeni kreativitetin tuaj.



Disa metoda të mundshme:



- Një link për një gist ([https://gist.github.com](https://gist.github.com)) me fajlla `.md` dhe/ose `.cpp`.

- Një `.pdf` dokument i formatuar sipas dëshirës tuaj i bashkëngjitur në email.

- Një link për repository në GitHub. Këtë repository mund ta ripërdorni për detyrat e ardhshme.


