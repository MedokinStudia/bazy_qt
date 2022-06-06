TYPE=VIEW
query=select `projekt`.`transakcja`.`IDTransakcji` AS `IDTransakcji`,`projekt`.`transakcja`.`IDPracownika` AS `IDPracownika`,`projekt`.`transakcja`.`IDEgzemplarza` AS `IDEgzemplarza`,`projekt`.`typtransakcji`.`Typtransakcji` AS `Typtransakcji`,`projekt`.`transakcja`.`Opis` AS `Opis` from (`projekt`.`transakcja` join `projekt`.`typtransakcji`) where `projekt`.`transakcja`.`Typtransakcji` = `projekt`.`typtransakcji`.`IDTypu`
md5=5ed0029e56045a62ff88b419f9442f94
updatable=1
algorithm=0
definer_user=root
definer_host=localhost
suid=0
with_check_option=0
timestamp=2022-06-06 11:13:50
create-version=2
source=select `transakcja`.`IDTransakcji` AS `IDTransakcji`,`transakcja`.`IDPracownika` AS `IDPracownika`,`transakcja`.`IDEgzemplarza` AS `IDEgzemplarza`,`typtransakcji`.`Typtransakcji` AS `Typtransakcji`,`transakcja`.`Opis` AS `Opis` from (`transakcja` join `typtransakcji`) where `transakcja`.`Typtransakcji` = `typtransakcji`.`IDTypu`
client_cs_name=utf8mb4
connection_cl_name=utf8mb4_unicode_ci
view_body_utf8=select `projekt`.`transakcja`.`IDTransakcji` AS `IDTransakcji`,`projekt`.`transakcja`.`IDPracownika` AS `IDPracownika`,`projekt`.`transakcja`.`IDEgzemplarza` AS `IDEgzemplarza`,`projekt`.`typtransakcji`.`Typtransakcji` AS `Typtransakcji`,`projekt`.`transakcja`.`Opis` AS `Opis` from (`projekt`.`transakcja` join `projekt`.`typtransakcji`) where `projekt`.`transakcja`.`Typtransakcji` = `projekt`.`typtransakcji`.`IDTypu`
mariadb-version=100424
