-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Jun 21, 2023 at 09:32 AM
-- Server version: 10.4.28-MariaDB
-- PHP Version: 8.2.4

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `assignment`
--

-- --------------------------------------------------------

--
-- Table structure for table `customer`
--

CREATE TABLE `customer` (
  `(PK)C_No` int(3) NOT NULL,
  `C_Name` char(10) DEFAULT NULL,
  `City` char(10) DEFAULT NULL,
  `Rating` int(3) DEFAULT NULL,
  `S_NO` int(4) DEFAULT NULL,
  `Order Rate` int(4) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `customer`
--

INSERT INTO `customer` (`(PK)C_No`, `C_Name`, `City`, `Rating`, `S_NO`, `Order Rate`) VALUES
(201, 'Hoffman', 'London', 100, 1001, 3213),
(202, 'Giovanne', 'Rome', 200, 1003, 664),
(203, 'Liu', 'San Jose', 300, 1002, 554),
(204, 'Grass', 'Barcelona', 100, 1002, 225),
(205, 'Clemens', 'London', 300, 1005, 354),
(206, 'Pereira', 'Rome', 100, 1004, 1118);

-- --------------------------------------------------------

--
-- Table structure for table `details`
--

CREATE TABLE `details` (
  `First Name` char(10) DEFAULT NULL,
  `Last Name` char(10) DEFAULT NULL,
  `Address` varchar(20) DEFAULT NULL,
  `City` char(10) DEFAULT NULL,
  `Age` int(7) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `details`
--

INSERT INTO `details` (`First Name`, `Last Name`, `Address`, `City`, `Age`) VALUES
('Tony', 'Stark', '10880 Malibu Point', 'New york', 50),
('Bruce', 'Wayne', '1007 Mountain Drive', 'Gotham', 48),
('Diana', 'Themyscira', 'Paradise Island', 'Amazons', 5000),
('Steve', 'Rogers', '569 Leaman Place', 'New York', 104),
('Micky', 'Mouse', '105 Town Square', 'Mouseton', 93),
('Donald', 'Duck', '1313 13th Street', 'DuckBurg', 89);

-- --------------------------------------------------------

--
-- Table structure for table `employee`
--

CREATE TABLE `employee` (
  `Employee_id` int(3) NOT NULL,
  `First_Name` varchar(15) DEFAULT NULL,
  `Last_Name` varchar(15) DEFAULT NULL,
  `Salary` int(8) DEFAULT NULL,
  `Joining_Date` varchar(25) DEFAULT NULL,
  `Department` varchar(20) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `employee`
--

INSERT INTO `employee` (`Employee_id`, `First_Name`, `Last_Name`, `Salary`, `Joining_Date`, `Department`) VALUES
(1, 'John', 'Abraham', 1000000, '01-JAN-13 / 12.00.00 AM', 'Banking'),
(2, 'Michael', 'Clarke', 800000, '01-JAN-13 / 12.00.00 AM', 'Insurance'),
(3, 'Roy', 'Thomas', 700000, '01-FEB-13 / 12.00.00 AM', 'Banking'),
(4, 'Tom', 'Jose', 600000, '01-FEB-13 / 12.00.00 AM', 'Insurance'),
(5, 'Jerry', 'Pinto', 650000, '01-FEB-13 / 12.00.00 AM', 'Insurance'),
(6, 'Philip', 'Mathew', 750000, '01-JAN-13 / 12.00.00 AM', 'Services'),
(7, 'TestName1', '123', 650000, '01-JAN-13 / 12.00.00 AM', 'Services'),
(8, 'TestName2', 'Lname%', 600000, '01-FEB-13 / 12.00.00 AM', 'Insurance');

--
-- Triggers `employee`
--
DELIMITER $$
CREATE TRIGGER `Trigg` AFTER INSERT ON `employee` FOR EACH ROW BEGIN
    	
        INSERT INTO `view` SET `Employee_id` = NEW.employee_id, `First_Name` = NEW.first_name,`Last_Name`= NEW.last_name,`Salary`= NEW.salary,`Joining_Date` = NEW.joining_date,`Department` = NEW.department;
                                               
    End
$$
DELIMITER ;

-- --------------------------------------------------------

--
-- Table structure for table `exam`
--

CREATE TABLE `exam` (
  `Roll_No` int(3) DEFAULT NULL,
  `Subject_Code` varchar(7) DEFAULT NULL,
  `Marks` int(3) DEFAULT NULL,
  `P_Code` char(5) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `exam`
--

INSERT INTO `exam` (`Roll_No`, `Subject_Code`, `Marks`, `P_Code`) VALUES
(1, 'CS-11', 68, 'CS'),
(1, 'CS-12', 52, 'CS'),
(2, 'BCA-46', 54, 'BCA'),
(2, 'BCA-59', 65, 'BCA'),
(3, 'BCA-46', 54, 'BCA'),
(3, 'BCA-59', 52, 'BCA'),
(4, 'BA-21', 61, 'BA'),
(4, 'BA-26', 47, 'BA');

-- --------------------------------------------------------

--
-- Table structure for table `incentive`
--

CREATE TABLE `incentive` (
  `Employee_ref_id` int(3) DEFAULT NULL,
  `Incentive_Date` varchar(15) DEFAULT NULL,
  `Incentive_Amount` int(5) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `incentive`
--

INSERT INTO `incentive` (`Employee_ref_id`, `Incentive_Date`, `Incentive_Amount`) VALUES
(1, '01-FEB-13', 5000),
(2, '01-FEB-13', 3000),
(3, '01-FEB-13', 4000),
(1, '01-JAN-13', 4500),
(2, '01-JAN-13', 3500);

-- --------------------------------------------------------

--
-- Table structure for table `salseperson`
--

CREATE TABLE `salseperson` (
  `(PK)S_No` int(4) NOT NULL,
  `SP_Name` char(10) DEFAULT NULL,
  `City` char(10) DEFAULT NULL,
  `Comm` varchar(5) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `salseperson`
--

INSERT INTO `salseperson` (`(PK)S_No`, `SP_Name`, `City`, `Comm`) VALUES
(1001, 'Robert', 'London', '.12'),
(1002, 'Jordan', 'San Jose', '.13'),
(1003, 'Mark', 'London', '.11'),
(1004, 'Joseph', 'Barcelona', '.15'),
(1005, 'Alex', 'New York', '.1');

-- --------------------------------------------------------

--
-- Table structure for table `student`
--

CREATE TABLE `student` (
  `Roll_No` int(3) NOT NULL,
  `Name` varchar(10) DEFAULT NULL,
  `Branch` varchar(10) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `student`
--

INSERT INTO `student` (`Roll_No`, `Name`, `Branch`) VALUES
(1, 'Mihir', 'CE'),
(2, 'Hitesh', 'BCA'),
(3, 'Bhagirath', 'BCA'),
(4, 'Raj', 'BA');

-- --------------------------------------------------------

--
-- Table structure for table `view`
--

CREATE TABLE `view` (
  `employee_id` int(3) DEFAULT NULL,
  `first_name` varchar(15) DEFAULT NULL,
  `last_name` varchar(15) DEFAULT NULL,
  `salary` int(8) DEFAULT NULL,
  `joining_date` varchar(25) DEFAULT NULL,
  `department` varchar(20) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `view`
--

INSERT INTO `view` (`employee_id`, `first_name`, `last_name`, `salary`, `joining_date`, `department`) VALUES
(1, 'John', 'Abraham', 100000, '01-JAN-13 / 12.00.00 AM', 'Banking'),
(2, 'Michael', 'Clarke', 800000, '01-JAN-13 / 12.00.00 AM', 'Insurance'),
(3, 'Roy', 'Thomas', 700000, '01-FEB-13 / 12.00.00 AM', 'Banking'),
(4, 'Tom', 'Jose', 600000, '01-FEB-13 / 12.00.00 AM', 'Insurance'),
(5, 'Jerry', 'Pinto', 650000, '01-FEB-13 / 12.00.00 AM', 'Insurance'),
(6, 'Philip', 'Mathew', 750000, '01-JAN-13 / 12.00.00 AM', 'Services'),
(7, 'TestName1', '123', 650000, '01-JAN-13 / 12.00.00 AM', 'Services'),
(8, 'TestName2', 'Lname%', 600000, '01-FEB-13 / 12.00.00 AM', 'Insurance');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `customer`
--
ALTER TABLE `customer`
  ADD PRIMARY KEY (`(PK)C_No`),
  ADD KEY `S_NO` (`S_NO`);

--
-- Indexes for table `employee`
--
ALTER TABLE `employee`
  ADD PRIMARY KEY (`Employee_id`);

--
-- Indexes for table `exam`
--
ALTER TABLE `exam`
  ADD KEY `Roll_No` (`Roll_No`);

--
-- Indexes for table `incentive`
--
ALTER TABLE `incentive`
  ADD KEY `Employee_ref_id` (`Employee_ref_id`);

--
-- Indexes for table `salseperson`
--
ALTER TABLE `salseperson`
  ADD PRIMARY KEY (`(PK)S_No`);

--
-- Indexes for table `student`
--
ALTER TABLE `student`
  ADD PRIMARY KEY (`Roll_No`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `customer`
--
ALTER TABLE `customer`
  MODIFY `(PK)C_No` int(3) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=214;

--
-- AUTO_INCREMENT for table `salseperson`
--
ALTER TABLE `salseperson`
  MODIFY `(PK)S_No` int(4) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=1006;

--
-- AUTO_INCREMENT for table `student`
--
ALTER TABLE `student`
  MODIFY `Roll_No` int(3) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;

--
-- Constraints for dumped tables
--

--
-- Constraints for table `customer`
--
ALTER TABLE `customer`
  ADD CONSTRAINT `customer_ibfk_1` FOREIGN KEY (`S_NO`) REFERENCES `salseperson` (`(PK)S_No`);

--
-- Constraints for table `exam`
--
ALTER TABLE `exam`
  ADD CONSTRAINT `exam_ibfk_1` FOREIGN KEY (`Roll_No`) REFERENCES `student` (`Roll_No`);

--
-- Constraints for table `incentive`
--
ALTER TABLE `incentive`
  ADD CONSTRAINT `incentive_ibfk_1` FOREIGN KEY (`Employee_ref_id`) REFERENCES `employee` (`Employee_id`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
