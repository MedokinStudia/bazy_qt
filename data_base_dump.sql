-- MariaDB dump 10.19  Distrib 10.4.24-MariaDB, for Win64 (AMD64)
--
-- Host: localhost    Database: projekt
-- ------------------------------------------------------
-- Server version	10.4.24-MariaDB

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `egzemplarz`
--

DROP TABLE IF EXISTS `egzemplarz`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `egzemplarz` (
  `IDEgzemplarza` int(11) NOT NULL AUTO_INCREMENT,
  `IDGry` int(11) NOT NULL,
  `Cena` float(5,2) NOT NULL,
  `Platforma` int(11) NOT NULL,
  `Stan` int(11) NOT NULL,
  `Status` int(11) NOT NULL,
  `Ilosc` int(11) NOT NULL,
  `Opis` varchar(256) COLLATE utf8mb4_polish_ci NOT NULL,
  PRIMARY KEY (`IDEgzemplarza`),
  KEY `IDGry` (`IDGry`),
  KEY `Platforma` (`Platforma`),
  KEY `Stan` (`Stan`),
  KEY `Status` (`Status`),
  KEY `Cena` (`Cena`),
  CONSTRAINT `egzemplarz_ibfk_2` FOREIGN KEY (`Platforma`) REFERENCES `platforma` (`IDPlatformy`),
  CONSTRAINT `egzemplarz_ibfk_3` FOREIGN KEY (`Stan`) REFERENCES `stanegezmplarza` (`IDStanu`),
  CONSTRAINT `egzemplarz_ibfk_4` FOREIGN KEY (`Status`) REFERENCES `status` (`IDStatusu`),
  CONSTRAINT `egzemplarz_ibfk_5` FOREIGN KEY (`IDGry`) REFERENCES `gra` (`IDGry`)
) ENGINE=InnoDB AUTO_INCREMENT=12 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_polish_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `egzemplarz`
--

LOCK TABLES `egzemplarz` WRITE;
/*!40000 ALTER TABLE `egzemplarz` DISABLE KEYS */;
INSERT INTO `egzemplarz` VALUES (6,2,250.00,3,2,2,100,'Nowa'),(9,8,144.00,2,2,1,221,'Nowa'),(11,2,100.00,1,1,1,13,'nie wiem');
/*!40000 ALTER TABLE `egzemplarz` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `gatunek`
--

DROP TABLE IF EXISTS `gatunek`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `gatunek` (
  `IDGatunku` int(11) NOT NULL AUTO_INCREMENT,
  `Gatunek` varchar(32) COLLATE utf8mb4_polish_ci NOT NULL,
  PRIMARY KEY (`IDGatunku`)
) ENGINE=InnoDB AUTO_INCREMENT=11 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_polish_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `gatunek`
--

LOCK TABLES `gatunek` WRITE;
/*!40000 ALTER TABLE `gatunek` DISABLE KEYS */;
INSERT INTO `gatunek` VALUES (1,'RPG'),(2,'Gra akcji'),(3,'Ekonomiczna'),(4,'Logiczna'),(5,'FPS'),(6,'Wyścigi'),(7,'Przygodowa'),(8,'Karcianka'),(9,'Sport'),(10,'Inne');
/*!40000 ALTER TABLE `gatunek` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `gra`
--

DROP TABLE IF EXISTS `gra`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `gra` (
  `IDGry` int(11) NOT NULL AUTO_INCREMENT,
  `Tytuł` varchar(64) COLLATE utf8mb4_polish_ci NOT NULL,
  `Wydawca` varchar(64) COLLATE utf8mb4_polish_ci NOT NULL,
  `Gatunek` int(11) NOT NULL,
  `PEGI` int(11) NOT NULL,
  `Rok_wydania` int(11) NOT NULL,
  PRIMARY KEY (`IDGry`),
  KEY `PEGI` (`PEGI`),
  KEY `Gatunek` (`Gatunek`),
  KEY `Wydawca_2` (`Wydawca`),
  KEY `Tytuł` (`Tytuł`) USING BTREE,
  KEY `Wydawca` (`Wydawca`) USING BTREE,
  CONSTRAINT `gra_ibfk_2` FOREIGN KEY (`PEGI`) REFERENCES `pegi` (`IDPEGI`),
  CONSTRAINT `gra_ibfk_3` FOREIGN KEY (`Gatunek`) REFERENCES `gatunek` (`IDGatunku`)
) ENGINE=InnoDB AUTO_INCREMENT=9 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_polish_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `gra`
--

LOCK TABLES `gra` WRITE;
/*!40000 ALTER TABLE `gra` DISABLE KEYS */;
INSERT INTO `gra` VALUES (2,'Wiedźmin','RED',1,1,2010),(6,'Wiedźmin 2','RED',1,1,2016),(7,'Wiedźmin 3','RED',1,1,2020),(8,'Doom','11Bit',1,2,997);
/*!40000 ALTER TABLE `gra` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Temporary table structure for view `lista_egzemplarzy`
--

DROP TABLE IF EXISTS `lista_egzemplarzy`;
/*!50001 DROP VIEW IF EXISTS `lista_egzemplarzy`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE TABLE `lista_egzemplarzy` (
  `IDEgzemplarza` tinyint NOT NULL,
  `IDGry` tinyint NOT NULL,
  `Ilosc` tinyint NOT NULL,
  `Cena` tinyint NOT NULL,
  `Platforma` tinyint NOT NULL,
  `Stan` tinyint NOT NULL,
  `Status` tinyint NOT NULL,
  `Opis` tinyint NOT NULL
) ENGINE=MyISAM */;
SET character_set_client = @saved_cs_client;

--
-- Temporary table structure for view `lista_gatunków`
--

DROP TABLE IF EXISTS `lista_gatunków`;
/*!50001 DROP VIEW IF EXISTS `lista_gatunków`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE TABLE `lista_gatunków` (
  `IDGatunku` tinyint NOT NULL,
  `Gatunek` tinyint NOT NULL
) ENGINE=MyISAM */;
SET character_set_client = @saved_cs_client;

--
-- Temporary table structure for view `lista_gier`
--

DROP TABLE IF EXISTS `lista_gier`;
/*!50001 DROP VIEW IF EXISTS `lista_gier`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE TABLE `lista_gier` (
  `IDGry` tinyint NOT NULL,
  `Tytuł` tinyint NOT NULL,
  `Wydawca` tinyint NOT NULL,
  `Gatunek` tinyint NOT NULL,
  `PEGI` tinyint NOT NULL,
  `Rok_wydania` tinyint NOT NULL
) ENGINE=MyISAM */;
SET character_set_client = @saved_cs_client;

--
-- Temporary table structure for view `lista_pegi`
--

DROP TABLE IF EXISTS `lista_pegi`;
/*!50001 DROP VIEW IF EXISTS `lista_pegi`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE TABLE `lista_pegi` (
  `IDPEGI` tinyint NOT NULL,
  `PEGI` tinyint NOT NULL
) ENGINE=MyISAM */;
SET character_set_client = @saved_cs_client;

--
-- Temporary table structure for view `lista_platform`
--

DROP TABLE IF EXISTS `lista_platform`;
/*!50001 DROP VIEW IF EXISTS `lista_platform`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE TABLE `lista_platform` (
  `IDPlatformy` tinyint NOT NULL,
  `Platforma` tinyint NOT NULL
) ENGINE=MyISAM */;
SET character_set_client = @saved_cs_client;

--
-- Temporary table structure for view `lista_pracowników`
--

DROP TABLE IF EXISTS `lista_pracowników`;
/*!50001 DROP VIEW IF EXISTS `lista_pracowników`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE TABLE `lista_pracowników` (
  `IDPracownika` tinyint NOT NULL,
  `Imie` tinyint NOT NULL,
  `Nazwisko` tinyint NOT NULL,
  `NrTel` tinyint NOT NULL,
  `Login` tinyint NOT NULL,
  `Haslo` tinyint NOT NULL,
  `Stanowisko` tinyint NOT NULL
) ENGINE=MyISAM */;
SET character_set_client = @saved_cs_client;

--
-- Temporary table structure for view `lista_transakcji`
--

DROP TABLE IF EXISTS `lista_transakcji`;
/*!50001 DROP VIEW IF EXISTS `lista_transakcji`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE TABLE `lista_transakcji` (
  `IDTransakcji` tinyint NOT NULL,
  `IDPracownika` tinyint NOT NULL,
  `IDEgzemplarza` tinyint NOT NULL,
  `Typtransakcji` tinyint NOT NULL,
  `Opis` tinyint NOT NULL
) ENGINE=MyISAM */;
SET character_set_client = @saved_cs_client;

--
-- Table structure for table `pegi`
--

DROP TABLE IF EXISTS `pegi`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `pegi` (
  `IDPEGI` int(11) NOT NULL AUTO_INCREMENT,
  `PEGI` varchar(16) COLLATE utf8mb4_polish_ci NOT NULL,
  PRIMARY KEY (`IDPEGI`)
) ENGINE=InnoDB AUTO_INCREMENT=17 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_polish_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `pegi`
--

LOCK TABLES `pegi` WRITE;
/*!40000 ALTER TABLE `pegi` DISABLE KEYS */;
INSERT INTO `pegi` VALUES (1,'+18'),(2,'+16'),(3,'+8'),(6,'+3'),(7,'+12'),(8,'Narkotyki'),(9,'Alkohol'),(10,'Hazard'),(11,'Seks'),(12,'Strach'),(13,'Przemoc'),(14,'Online'),(15,'Dysktyminacja'),(16,'Przekleństwa');
/*!40000 ALTER TABLE `pegi` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `platforma`
--

DROP TABLE IF EXISTS `platforma`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `platforma` (
  `IDPlatformy` int(11) NOT NULL AUTO_INCREMENT,
  `Platforma` varchar(16) COLLATE utf8mb4_polish_ci NOT NULL,
  PRIMARY KEY (`IDPlatformy`)
) ENGINE=InnoDB AUTO_INCREMENT=4 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_polish_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `platforma`
--

LOCK TABLES `platforma` WRITE;
/*!40000 ALTER TABLE `platforma` DISABLE KEYS */;
INSERT INTO `platforma` VALUES (1,'XBOX'),(2,'PC'),(3,'PS3');
/*!40000 ALTER TABLE `platforma` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `pracownik`
--

DROP TABLE IF EXISTS `pracownik`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `pracownik` (
  `IDPracownika` int(11) NOT NULL AUTO_INCREMENT,
  `Imie` varchar(64) COLLATE utf8mb4_polish_ci NOT NULL,
  `Nazwisko` varchar(64) COLLATE utf8mb4_polish_ci NOT NULL,
  `NrTel` varchar(11) COLLATE utf8mb4_polish_ci NOT NULL,
  `Login` varchar(64) COLLATE utf8mb4_polish_ci NOT NULL,
  `Haslo` varchar(32) CHARACTER SET utf8mb4 COLLATE utf8mb4_persian_ci NOT NULL,
  `Stanowisko` int(11) NOT NULL,
  PRIMARY KEY (`IDPracownika`),
  KEY `Stanowisko` (`Stanowisko`),
  CONSTRAINT `pracownik_ibfk_1` FOREIGN KEY (`Stanowisko`) REFERENCES `stanowisko` (`IDStanowiska`)
) ENGINE=InnoDB AUTO_INCREMENT=40 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_polish_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `pracownik`
--

LOCK TABLES `pracownik` WRITE;
/*!40000 ALTER TABLE `pracownik` DISABLE KEYS */;
INSERT INTO `pracownik` VALUES (31,'Paweł','Random','456234234','456pgj','qwerqwe',3),(32,'Kamil','Random','+4856756756','Coups','qwerqwe',4),(33,'Kasia','Kowal','+3328928937','sdae','DASSDA',4),(36,'Paweł','Random','+4856756756','Pjks#s123','fc7d66ba42c06bb7d71f8983a070e5f8',4),(39,'Paweł','Wonsik','+4205334555','Maslo','365210398772f50ff7e70af1d2b2c69c',3);
/*!40000 ALTER TABLE `pracownik` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `stanegezmplarza`
--

DROP TABLE IF EXISTS `stanegezmplarza`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `stanegezmplarza` (
  `IDStanu` int(11) NOT NULL AUTO_INCREMENT,
  `Stan` varchar(16) COLLATE utf8mb4_polish_ci NOT NULL,
  PRIMARY KEY (`IDStanu`)
) ENGINE=InnoDB AUTO_INCREMENT=3 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_polish_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `stanegezmplarza`
--

LOCK TABLES `stanegezmplarza` WRITE;
/*!40000 ALTER TABLE `stanegezmplarza` DISABLE KEYS */;
INSERT INTO `stanegezmplarza` VALUES (1,'Nowy'),(2,'Uzywany');
/*!40000 ALTER TABLE `stanegezmplarza` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `stanowisko`
--

DROP TABLE IF EXISTS `stanowisko`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `stanowisko` (
  `IDStanowiska` int(11) NOT NULL AUTO_INCREMENT,
  `Stanowisko` varchar(16) COLLATE utf8mb4_polish_ci NOT NULL,
  PRIMARY KEY (`IDStanowiska`)
) ENGINE=InnoDB AUTO_INCREMENT=7 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_polish_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `stanowisko`
--

LOCK TABLES `stanowisko` WRITE;
/*!40000 ALTER TABLE `stanowisko` DISABLE KEYS */;
INSERT INTO `stanowisko` VALUES (3,'Kierownik'),(4,'Magazynier'),(5,'Technik'),(6,'Kasjer');
/*!40000 ALTER TABLE `stanowisko` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `status`
--

DROP TABLE IF EXISTS `status`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `status` (
  `IDStatusu` int(11) NOT NULL AUTO_INCREMENT,
  `Status` varchar(16) COLLATE utf8mb4_polish_ci NOT NULL,
  PRIMARY KEY (`IDStatusu`)
) ENGINE=InnoDB AUTO_INCREMENT=3 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_polish_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `status`
--

LOCK TABLES `status` WRITE;
/*!40000 ALTER TABLE `status` DISABLE KEYS */;
INSERT INTO `status` VALUES (1,'Jest'),(2,'Niema');
/*!40000 ALTER TABLE `status` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `transakcja`
--

DROP TABLE IF EXISTS `transakcja`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `transakcja` (
  `IDTransakcji` int(11) NOT NULL AUTO_INCREMENT,
  `IDPracownika` int(11) NOT NULL,
  `IDEgzemplarza` int(11) NOT NULL,
  `Typtransakcji` int(11) NOT NULL,
  `Opis` varchar(256) COLLATE utf8mb4_polish_ci NOT NULL,
  PRIMARY KEY (`IDTransakcji`),
  KEY `IDPracownika` (`IDPracownika`),
  KEY `IDEgzemplarza` (`IDEgzemplarza`),
  KEY `Typ transakcji` (`Typtransakcji`),
  KEY `IDEgzemplarza_2` (`IDEgzemplarza`),
  KEY `IDEgzemplarza_3` (`IDEgzemplarza`),
  CONSTRAINT `transakcja_ibfk_2` FOREIGN KEY (`Typtransakcji`) REFERENCES `typtransakcji` (`IDTypu`),
  CONSTRAINT `transakcja_ibfk_3` FOREIGN KEY (`IDEgzemplarza`) REFERENCES `egzemplarz` (`IDEgzemplarza`)
) ENGINE=InnoDB AUTO_INCREMENT=21 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_polish_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `transakcja`
--

LOCK TABLES `transakcja` WRITE;
/*!40000 ALTER TABLE `transakcja` DISABLE KEYS */;
INSERT INTO `transakcja` VALUES (11,33,11,1,'Sprzedaz'),(14,34,6,2,'Cos zniszczona ta gra'),(15,34,6,2,'Cos zniszczona ta gra'),(16,34,6,2,'Cos zniszczona ta gra'),(17,35,11,1,'XYZ'),(18,36,9,2,'YYY'),(19,33,11,1,'Cos zniszczona ta gra'),(20,33,11,1,'Cos zniszczona ta gra');
/*!40000 ALTER TABLE `transakcja` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `typtransakcji`
--

DROP TABLE IF EXISTS `typtransakcji`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `typtransakcji` (
  `IDTypu` int(11) NOT NULL AUTO_INCREMENT,
  `Typtransakcji` varchar(16) COLLATE utf8mb4_polish_ci NOT NULL,
  PRIMARY KEY (`IDTypu`)
) ENGINE=InnoDB AUTO_INCREMENT=5 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_polish_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `typtransakcji`
--

LOCK TABLES `typtransakcji` WRITE;
/*!40000 ALTER TABLE `typtransakcji` DISABLE KEYS */;
INSERT INTO `typtransakcji` VALUES (1,'Sprzedaż'),(2,'Kupno');
/*!40000 ALTER TABLE `typtransakcji` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Dumping routines for database 'projekt'
--
/*!50003 DROP PROCEDURE IF EXISTS `egzemplarz_ADD` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_unicode_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'NO_ZERO_IN_DATE,NO_ZERO_DATE,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `egzemplarz_ADD`(IN `IDGry` INT(11), IN `Cena` FLOAT(5,2), IN `Platforma` INT(11), IN `Stan` INT(11), IN `Status` INT(11), IN `Ilosc` INT(11), IN `Opis` VARCHAR(256))
    MODIFIES SQL DATA
    DETERMINISTIC
    SQL SECURITY INVOKER
INSERT INTO egzemplarz SET IDEgzemplarza = NULL, IDGry = IDGry, Cena = Cena, Platforma = Platforma, Stan = Stan, Status = Status, Ilosc = Ilosc, Opis = Opis ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `egzemplarz_DELETE` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_unicode_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'NO_ZERO_IN_DATE,NO_ZERO_DATE,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `egzemplarz_DELETE`(IN `IDEgzemplarza` INT)
    READS SQL DATA
    DETERMINISTIC
    SQL SECURITY INVOKER
DELETE FROM egzemplarz WHERE egzemplarz.IDEgzemplarza=IDEgzemplarza ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `egzemplarz_MOD` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_unicode_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'NO_ZERO_IN_DATE,NO_ZERO_DATE,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `egzemplarz_MOD`(IN `IDEgzemplarza` INT(11), IN `IDGry` INT(11), IN `Cena` FLOAT(5,2), IN `Platforma` INT(11), IN `Stan` INT(11), IN `Status` INT(11), IN `Ilosc` INT(11), IN `Opis` VARCHAR(256))
    MODIFIES SQL DATA
    DETERMINISTIC
    SQL SECURITY INVOKER
UPDATE egzemplarz SET 

egzemplarz.IDGry=IDGry,

egzemplarz.Cena=Cena,

egzemplarz.Platforma=Platforma,

egzemplarz.Stan=Stan,

egzemplarz.Status=Status,

egzemplarz.Ilosc=Ilosc,

egzemplarz.Opis=Opis WHERE egzemplarz.IDEgzemplarza=IDEgzemplarza ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `employee_ADD` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_unicode_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'NO_ZERO_IN_DATE,NO_ZERO_DATE,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `employee_ADD`(IN `Imie` VARCHAR(64), IN `Nazwisko` VARCHAR(64), IN `NrTel` VARCHAR(11), IN `Login` VARCHAR(64), IN `Haslo` VARCHAR(32), IN `Stanowisko` INT(11))
    MODIFIES SQL DATA
    DETERMINISTIC
    SQL SECURITY INVOKER
INSERT INTO pracownik SET pracownik.IDPracownika = NULL, pracownik.Imie = Imie, pracownik.Nazwisko = Nazwisko, pracownik.NrTel = NrTel, pracownik.Login = Login, pracownik.Haslo = MD5(Haslo), pracownik.Stanowisko = Stanowisko ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `employee_DELETE` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_unicode_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'NO_ZERO_IN_DATE,NO_ZERO_DATE,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `employee_DELETE`(IN `IDPracownika` INT(11))
    MODIFIES SQL DATA
    DETERMINISTIC
    SQL SECURITY INVOKER
DELETE FROM pracownik WHERE pracownik.IDPracownika=IDPracownika ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `employee_MOD` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_unicode_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'NO_ZERO_IN_DATE,NO_ZERO_DATE,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `employee_MOD`(IN `IDPracownika` INT(11), IN `Imie` VARCHAR(64), IN `Nazwisko` VARCHAR(64), IN `NrTel` VARCHAR(11), IN `Login` VARCHAR(64), IN `Haslo` VARCHAR(32), IN `Stanowisko` INT(11))
    MODIFIES SQL DATA
    DETERMINISTIC
    SQL SECURITY INVOKER
UPDATE pracownik SET

pracownik.Imie=Imie,

pracownik.Nazwisko=Nazwisko,

pracownik.NrTel=NrTel,

pracownik.Login=Login,

pracownik.Haslo=MD5(Haslo),

pracownik.Stanowisko=Stanowisko

where pracownik.IDPracownika=IDPracownika ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `gra_ADD` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_unicode_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'NO_ZERO_IN_DATE,NO_ZERO_DATE,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `gra_ADD`(IN `Tytuł` VARCHAR(64), IN `Wydawca` VARCHAR(64), IN `Gatunek` INT(11), IN `PEGI` INT(11), IN `Rok_wydania` INT(11))
    MODIFIES SQL DATA
    DETERMINISTIC
    SQL SECURITY INVOKER
INSERT INTO gra SET gra.IDGry = NULL, gra.Tytuł = Tytuł, gra.Wydawca = Wydawca, gra.Gatunek = Gatunek, gra.PEGI = PEGI, gra.Rok_wydania = Rok_wydania ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `gra_DELETE` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_unicode_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'NO_ZERO_IN_DATE,NO_ZERO_DATE,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `gra_DELETE`(IN `IDGry` INT(11))
    MODIFIES SQL DATA
    DETERMINISTIC
    SQL SECURITY INVOKER
DELETE FROM gra WHERE gra.IDGry=IDGry ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `transaction_BUY` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_unicode_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'NO_ZERO_IN_DATE,NO_ZERO_DATE,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `transaction_BUY`(IN `IDPracownika` INT(11), IN `IDEgzemplarza` INT(11), IN `Opis` VARCHAR(256))
    MODIFIES SQL DATA
    DETERMINISTIC
    SQL SECURITY INVOKER
INSERT INTO transakcja SET transakcja.IDTransakcji = NULL, transakcja.IDPracownika = IDPracownika, transakcja.IDEgzemplarza = IDEgzemplarza, transakcja.Typtransakcji = 2, transakcja.Opis = Opis ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `transaction_DELETE` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_unicode_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'NO_ZERO_IN_DATE,NO_ZERO_DATE,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `transaction_DELETE`(IN `IDTransakcji` INT(11))
    MODIFIES SQL DATA
    DETERMINISTIC
    SQL SECURITY INVOKER
DELETE FROM transakcja WHERE transakcja.IDTransakcji=IDTransakcji ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `transaction_MOD` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_unicode_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'NO_ZERO_IN_DATE,NO_ZERO_DATE,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `transaction_MOD`(IN `IDTransakcji` INT(11), IN `IDPracownika` INT(11), IN `IDEgzemplarza` INT(11), IN `Typtransakcji` INT(11), IN `Opis` VARCHAR(256))
    MODIFIES SQL DATA
    DETERMINISTIC
    SQL SECURITY INVOKER
UPDATE transakcja SET transakcja.IDPracownika=IDPracownika, transakcja.IDEgzemplarza=IDEgzemplarza, transakcja.Typtransakcji=Typtransakcji, transakcja.Opis=Opis WHERE transakcja.IDTransakcji=IDtransakcji ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `transaction_SELL` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_unicode_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'NO_ZERO_IN_DATE,NO_ZERO_DATE,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `transaction_SELL`(IN `IDPracownika` INT(11), IN `IDEgzemplarza` INT(11), IN `Opis` VARCHAR(256))
    MODIFIES SQL DATA
    DETERMINISTIC
    SQL SECURITY INVOKER
INSERT INTO transakcja SET transakcja.IDTransakcji = NULL, transakcja.IDPracownika = IDPracownika, transakcja.IDEgzemplarza = IDEgzemplarza, transakcja.Typtransakcji = 1, transakcja.Opis = Opis ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;

--
-- Final view structure for view `lista_egzemplarzy`
--

/*!50001 DROP TABLE IF EXISTS `lista_egzemplarzy`*/;
/*!50001 DROP VIEW IF EXISTS `lista_egzemplarzy`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8mb4 */;
/*!50001 SET character_set_results     = utf8mb4 */;
/*!50001 SET collation_connection      = utf8mb4_unicode_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`root`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `lista_egzemplarzy` AS select `egzemplarz`.`IDEgzemplarza` AS `IDEgzemplarza`,`egzemplarz`.`IDGry` AS `IDGry`,`egzemplarz`.`Ilosc` AS `Ilosc`,`egzemplarz`.`Cena` AS `Cena`,`platforma`.`Platforma` AS `Platforma`,`stanegezmplarza`.`Stan` AS `Stan`,`status`.`Status` AS `Status`,`egzemplarz`.`Opis` AS `Opis` from (((`status` join `stanegezmplarza`) join `platforma`) join `egzemplarz`) where `egzemplarz`.`Platforma` = `platforma`.`IDPlatformy` and `egzemplarz`.`Stan` = `stanegezmplarza`.`IDStanu` and `egzemplarz`.`Status` = `status`.`IDStatusu` */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `lista_gatunków`
--

/*!50001 DROP TABLE IF EXISTS `lista_gatunków`*/;
/*!50001 DROP VIEW IF EXISTS `lista_gatunków`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8mb4 */;
/*!50001 SET character_set_results     = utf8mb4 */;
/*!50001 SET collation_connection      = utf8mb4_unicode_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`root`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `lista_gatunków` AS select `gatunek`.`IDGatunku` AS `IDGatunku`,`gatunek`.`Gatunek` AS `Gatunek` from `gatunek` */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `lista_gier`
--

/*!50001 DROP TABLE IF EXISTS `lista_gier`*/;
/*!50001 DROP VIEW IF EXISTS `lista_gier`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8mb4 */;
/*!50001 SET character_set_results     = utf8mb4 */;
/*!50001 SET collation_connection      = utf8mb4_unicode_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`root`@`localhost` SQL SECURITY INVOKER */
/*!50001 VIEW `lista_gier` AS select `gra`.`IDGry` AS `IDGry`,`gra`.`Tytuł` AS `Tytuł`,`gra`.`Wydawca` AS `Wydawca`,`gatunek`.`Gatunek` AS `Gatunek`,`pegi`.`PEGI` AS `PEGI`,`gra`.`Rok_wydania` AS `Rok_wydania` from ((`gra` join `pegi`) join `gatunek`) where `gra`.`Gatunek` = `gatunek`.`IDGatunku` and `gra`.`PEGI` = `pegi`.`IDPEGI` */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `lista_pegi`
--

/*!50001 DROP TABLE IF EXISTS `lista_pegi`*/;
/*!50001 DROP VIEW IF EXISTS `lista_pegi`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8mb4 */;
/*!50001 SET character_set_results     = utf8mb4 */;
/*!50001 SET collation_connection      = utf8mb4_unicode_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`root`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `lista_pegi` AS select `pegi`.`IDPEGI` AS `IDPEGI`,`pegi`.`PEGI` AS `PEGI` from `pegi` */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `lista_platform`
--

/*!50001 DROP TABLE IF EXISTS `lista_platform`*/;
/*!50001 DROP VIEW IF EXISTS `lista_platform`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8mb4 */;
/*!50001 SET character_set_results     = utf8mb4 */;
/*!50001 SET collation_connection      = utf8mb4_unicode_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`root`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `lista_platform` AS select `platforma`.`IDPlatformy` AS `IDPlatformy`,`platforma`.`Platforma` AS `Platforma` from `platforma` */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `lista_pracowników`
--

/*!50001 DROP TABLE IF EXISTS `lista_pracowników`*/;
/*!50001 DROP VIEW IF EXISTS `lista_pracowników`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8mb4 */;
/*!50001 SET character_set_results     = utf8mb4 */;
/*!50001 SET collation_connection      = utf8mb4_unicode_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`root`@`localhost` SQL SECURITY INVOKER */
/*!50001 VIEW `lista_pracowników` AS select `pracownik`.`IDPracownika` AS `IDPracownika`,`pracownik`.`Imie` AS `Imie`,`pracownik`.`Nazwisko` AS `Nazwisko`,`pracownik`.`NrTel` AS `NrTel`,`pracownik`.`Login` AS `Login`,`pracownik`.`Haslo` AS `Haslo`,`stanowisko`.`Stanowisko` AS `Stanowisko` from (`pracownik` join `stanowisko`) where `pracownik`.`Stanowisko` = `stanowisko`.`IDStanowiska` */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `lista_transakcji`
--

/*!50001 DROP TABLE IF EXISTS `lista_transakcji`*/;
/*!50001 DROP VIEW IF EXISTS `lista_transakcji`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8mb4 */;
/*!50001 SET character_set_results     = utf8mb4 */;
/*!50001 SET collation_connection      = utf8mb4_unicode_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`root`@`localhost` SQL SECURITY INVOKER */
/*!50001 VIEW `lista_transakcji` AS select `transakcja`.`IDTransakcji` AS `IDTransakcji`,`transakcja`.`IDPracownika` AS `IDPracownika`,`transakcja`.`IDEgzemplarza` AS `IDEgzemplarza`,`typtransakcji`.`Typtransakcji` AS `Typtransakcji`,`transakcja`.`Opis` AS `Opis` from (`transakcja` join `typtransakcji`) where `transakcja`.`Typtransakcji` = `typtransakcji`.`IDTypu` */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2022-06-06 20:57:32
