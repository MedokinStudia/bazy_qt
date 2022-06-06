TYPE=VIEW
query=select `projekt`.`egzemplarz`.`IDEgzemplarza` AS `IDEgzemplarza`,`projekt`.`egzemplarz`.`IDGry` AS `IDGry`,`projekt`.`egzemplarz`.`Ilosc` AS `Ilosc`,`projekt`.`egzemplarz`.`Cena` AS `Cena`,`projekt`.`platforma`.`Platforma` AS `Platforma`,`projekt`.`stanegezmplarza`.`Stan` AS `Stan`,`projekt`.`status`.`Status` AS `Status`,`projekt`.`egzemplarz`.`Opis` AS `Opis` from (((`projekt`.`status` join `projekt`.`stanegezmplarza`) join `projekt`.`platforma`) join `projekt`.`egzemplarz`) where `projekt`.`egzemplarz`.`Platforma` = `projekt`.`platforma`.`IDPlatformy` and `projekt`.`egzemplarz`.`Stan` = `projekt`.`stanegezmplarza`.`IDStanu` and `projekt`.`egzemplarz`.`Status` = `projekt`.`status`.`IDStatusu`
md5=e4c0199371601e516c989d03c650c8bb
updatable=1
algorithm=0
definer_user=root
definer_host=localhost
suid=1
with_check_option=0
timestamp=2022-06-06 11:13:50
create-version=2
source=select `egzemplarz`.`IDEgzemplarza` AS `IDEgzemplarza`,`egzemplarz`.`IDGry` AS `IDGry`,`egzemplarz`.`Ilosc` AS `Ilosc`,`egzemplarz`.`Cena` AS `Cena`,`platforma`.`Platforma` AS `Platforma`,`stanegezmplarza`.`Stan` AS `Stan`,`status`.`Status` AS `Status`,`egzemplarz`.`Opis` AS `Opis` from (((`status` join `stanegezmplarza`) join `platforma`) join `egzemplarz`) where `egzemplarz`.`Platforma` = `platforma`.`IDPlatformy` and `egzemplarz`.`Stan` = `stanegezmplarza`.`IDStanu` and `egzemplarz`.`Status` = `status`.`IDStatusu`
client_cs_name=utf8mb4
connection_cl_name=utf8mb4_unicode_ci
view_body_utf8=select `projekt`.`egzemplarz`.`IDEgzemplarza` AS `IDEgzemplarza`,`projekt`.`egzemplarz`.`IDGry` AS `IDGry`,`projekt`.`egzemplarz`.`Ilosc` AS `Ilosc`,`projekt`.`egzemplarz`.`Cena` AS `Cena`,`projekt`.`platforma`.`Platforma` AS `Platforma`,`projekt`.`stanegezmplarza`.`Stan` AS `Stan`,`projekt`.`status`.`Status` AS `Status`,`projekt`.`egzemplarz`.`Opis` AS `Opis` from (((`projekt`.`status` join `projekt`.`stanegezmplarza`) join `projekt`.`platforma`) join `projekt`.`egzemplarz`) where `projekt`.`egzemplarz`.`Platforma` = `projekt`.`platforma`.`IDPlatformy` and `projekt`.`egzemplarz`.`Stan` = `projekt`.`stanegezmplarza`.`IDStanu` and `projekt`.`egzemplarz`.`Status` = `projekt`.`status`.`IDStatusu`
mariadb-version=100424
