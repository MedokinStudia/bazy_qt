TYPE=VIEW
query=select `projekt`.`pracownik`.`IDPracownika` AS `IDPracownika`,`projekt`.`pracownik`.`Imie` AS `Imie`,`projekt`.`pracownik`.`Nazwisko` AS `Nazwisko`,`projekt`.`pracownik`.`NrTel` AS `NrTel`,`projekt`.`pracownik`.`Login` AS `Login`,`projekt`.`pracownik`.`Haslo` AS `Haslo`,`projekt`.`stanowisko`.`Stanowisko` AS `Stanowisko` from (`projekt`.`pracownik` join `projekt`.`stanowisko`) where `projekt`.`pracownik`.`Stanowisko` = `projekt`.`stanowisko`.`IDStanowiska`
md5=c1f460b02b32f43c9e0b811b09302ef0
updatable=1
algorithm=0
definer_user=root
definer_host=localhost
suid=0
with_check_option=0
timestamp=2022-06-06 11:13:50
create-version=2
source=select `pracownik`.`IDPracownika` AS `IDPracownika`,`pracownik`.`Imie` AS `Imie`,`pracownik`.`Nazwisko` AS `Nazwisko`,`pracownik`.`NrTel` AS `NrTel`,`pracownik`.`Login` AS `Login`,`pracownik`.`Haslo` AS `Haslo`,`stanowisko`.`Stanowisko` AS `Stanowisko` from (`pracownik` join `stanowisko`) where `pracownik`.`Stanowisko` = `stanowisko`.`IDStanowiska`
client_cs_name=utf8mb4
connection_cl_name=utf8mb4_unicode_ci
view_body_utf8=select `projekt`.`pracownik`.`IDPracownika` AS `IDPracownika`,`projekt`.`pracownik`.`Imie` AS `Imie`,`projekt`.`pracownik`.`Nazwisko` AS `Nazwisko`,`projekt`.`pracownik`.`NrTel` AS `NrTel`,`projekt`.`pracownik`.`Login` AS `Login`,`projekt`.`pracownik`.`Haslo` AS `Haslo`,`projekt`.`stanowisko`.`Stanowisko` AS `Stanowisko` from (`projekt`.`pracownik` join `projekt`.`stanowisko`) where `projekt`.`pracownik`.`Stanowisko` = `projekt`.`stanowisko`.`IDStanowiska`
mariadb-version=100424
