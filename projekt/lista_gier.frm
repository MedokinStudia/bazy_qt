TYPE=VIEW
query=select `projekt`.`gra`.`IDGry` AS `IDGry`,`projekt`.`gra`.`Tytuł` AS `Tytuł`,`projekt`.`gra`.`Wydawca` AS `Wydawca`,`projekt`.`gatunek`.`Gatunek` AS `Gatunek`,`projekt`.`pegi`.`PEGI` AS `PEGI`,`projekt`.`gra`.`Rok_wydania` AS `Rok_wydania` from ((`projekt`.`gra` join `projekt`.`pegi`) join `projekt`.`gatunek`) where `projekt`.`gra`.`Gatunek` = `projekt`.`gatunek`.`IDGatunku` and `projekt`.`gra`.`PEGI` = `projekt`.`pegi`.`IDPEGI`
md5=376b3ffdf3e97e950f55ca3fd4464c79
updatable=1
algorithm=0
definer_user=root
definer_host=localhost
suid=0
with_check_option=0
timestamp=2022-06-06 11:13:50
create-version=2
source=select `gra`.`IDGry` AS `IDGry`,`gra`.`Tytuł` AS `Tytuł`,`gra`.`Wydawca` AS `Wydawca`,`gatunek`.`Gatunek` AS `Gatunek`,`pegi`.`PEGI` AS `PEGI`,`gra`.`Rok_wydania` AS `Rok_wydania` from ((`gra` join `pegi`) join `gatunek`) where `gra`.`Gatunek` = `gatunek`.`IDGatunku` and `gra`.`PEGI` = `pegi`.`IDPEGI`
client_cs_name=utf8mb4
connection_cl_name=utf8mb4_unicode_ci
view_body_utf8=select `projekt`.`gra`.`IDGry` AS `IDGry`,`projekt`.`gra`.`Tytuł` AS `Tytuł`,`projekt`.`gra`.`Wydawca` AS `Wydawca`,`projekt`.`gatunek`.`Gatunek` AS `Gatunek`,`projekt`.`pegi`.`PEGI` AS `PEGI`,`projekt`.`gra`.`Rok_wydania` AS `Rok_wydania` from ((`projekt`.`gra` join `projekt`.`pegi`) join `projekt`.`gatunek`) where `projekt`.`gra`.`Gatunek` = `projekt`.`gatunek`.`IDGatunku` and `projekt`.`gra`.`PEGI` = `projekt`.`pegi`.`IDPEGI`
mariadb-version=100424
