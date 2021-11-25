## M1_Application_Bus-Ticket-Reservation 

---

# Report

---

## Codiga Code Grade 
![Codiga Badge](https://api.codiga.io/project/29947/status/svg)

## Codacy Quality Badge
[![Codacy Badge](https://app.codacy.com/project/badge/Grade/eb690b54b652437cba72ec290ef535f0)](https://www.codacy.com/gh/akshunna45/M1_Application_Bus-Ticket-Reservation/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=akshunna45/M1_Application_Bus-Ticket-Reservation&amp;utm_campaign=Badge_Grade)

## Codiga Quality Score
![Codiga Badge](https://api.codiga.io/project/29947/score/svg)

## Cpp Check
[![Code Quality - Static Code - Cppcheck](https://github.com/akshunna45/M1_Application_Bus-Ticket-Reservation/actions/workflows/cppcheck.yml/badge.svg)](https://github.com/akshunna45/M1_Application_Bus-Ticket-Reservation/actions/workflows/cppcheck.yml)

## Unit Testing
[![Unit_Testing](https://github.com/akshunna45/M1_Application_Bus-Ticket-Reservation/actions/workflows/unit_testing.yml/badge.svg)](https://github.com/akshunna45/M1_Application_Bus-Ticket-Reservation/actions/workflows/unit_testing.yml)

## Bus Ticket Reservation System

A Bus Ticket Reservation System allows a potential customer to book and pay for a service directly through a website. That means from the moment a customer decides they want to book a slot for the service to choosing a date, picking a time, and paying for the booking, everything is handled online! It greatly reduces the workload on your staff and removes the opportunity for double-bookings.

## Repository Structure

| Folder             | Description                                     |
| ------------------ | ----------------------------------------------- |
| 1_Requirements     | All the requirements and research about project |
| 2_Architecture     | All the designing of Project                    |
| 3_Implementation   | All the coding related files                    |
| 4_TestPlanAndOutput| All the current possible test cases and outputs |
| 5_Report           | All the readme.md's merged as a report          |
| 6_ImagesAndVideos  | All the related images and videos               |
| 7_Other            | All other files                                 |

## Project GIF

![Running Project](https://github.com/akshunna45/M1_Application_Bus-Ticket-Reservation/blob/main/6_ImagesAndVideos/Running%20Project.gif)

---

## Requirements

### Introduction
-   This Software project is aimed at automation of Online Ticket Booking. Objective of the project is to develop customize software package for Ticket Reservation. 

### Research
-   In our daily life we have to book ticket for Bus. When we do this task manually then it becomes very hard to manage the ticket booking. So we   are developing this system to manage booking of ticket automatically. 
-   In this bus ticket booking project we develop the system that can help the user to book their ticket online. 
-   In this project we take care of every service related to travelling and online ticket booking. When you start your traveling tour you have to book ticket so we help you from the starting point to the end point. 

#### What is Ticket Reservation System
-   A Ticket Reservation System allows a potential customer to book and pay for a service directly through a website. That means from the moment a customer decides they want to book a slot for the service to choosing a date, picking a time, and paying for the booking, everything is handled online! It greatly reduces the workload on your staff and removes the opportunity for double-bookings.

#### Bus Details
##### Sleeper/Non_Sleeper Bus 
-   Sleeper Buses are those built with either 2-level or 3-level sleeping bunks, or beds, where passengers can pull a curtain or screen to get a private bed onboard the bus.
-   Non_Sleeper Buses are those built with 2-seated column and 3-seated column in each row.
##### AC/Non_AC Bus
-   AC Bus is one kind of bus type that is very comfortable for any kind of journeys. AC buses have the facilities like Push-Back & Water Bottle Holdings etc. Some of the AC buses may have Mobile Charges Facility.
-   Non_AC Bus is one kind of bus type that is more convenient for the Traveler when they are doing long journeys. Non_AC buses also have the facilities like Push-Back & Water Bottle Holdings etc. Some of the Non_AC buses may also have Mobile Charges Facility.
##### Single_Decker/Double_Decker Bus
-   A single_Decker Bus is a bus that has a single deck for passengers. Normally the use of the term single decker refers to a standard two-axled rigid bus.
-   A double_Decker Bus is a bus that has two storeys or decks. Double decker buses are used for mass transport mostly.

#### Trip Details
##### Start Point of Journey
-   Start Point is the point from where Bus journey is started.
##### Stops in the Journey 
-   Stops are the places/points where Bus stops for some time and then continue the journey.
##### End Point of Journey
-   End Point is the point where Bus journey is finished.
##### Charges of Tickets
-   Charges of Tickets are the money that a user have to pay in exchange for the confirmation of booked tickets.

#### Bus Ticket Booking
-   Bus Ticket Booking is a option where user have to fill all the details and make payment so that his/her tickets get reserved or booked.

#### Bus Ticket Canceling
-   Bus Ticket Canceling is a option where user have to select his/her booked tickets and then he/she can easily canceled the tickets and get refund.

#### Bus Status Board
-   Bus Status Board is a detailed view where a user can see all the reserved/booked seats of a selected bus.

### Cost and Features and Timeline
#### Cost
-   In the development of this project there is no major cost include because we didn't implement it on server till now and we also didn't created any eyepleasing user interface for it.
#### Feature
-   Some important feature of this project is that it is very easy and stable to implement on any old system.
#### Timeline 
-   Timeline for this project was 10 Days, but we will try to make a beautiful interface for it in future and also try to implement that on server so that user can access it online.

### SWOT Analysis
#### Strengths
-   A Bus Ticket Reservation system automates the process. After a booking is made, the platform automatically reduces the seats available in the bus. 
#### Weaknesses
-   Many online travel sites advertise low rates and offers to attract user's attention.
#### Opportunities
-   User can save time by booking tickets online without stand in a queue and cancel the reserved ticket online anywhere whenever required.
#### Threats
-   The main threat are the employees themselves or some outside hackers who wish to destroy, steal, or change the data that is in our system or server. (like Credit card details, Debit card details, Other payment details, Address, Mobile Number etc.)

### 4W's and 1H's
#### Who
-   User who have internet and device can use our system. 
#### What
-   User can book a bus ticket to any destination.
#### When
-   User can use this automated service anytime 24/7.
#### Where
-   User can access this system from any area that have internet connectivity.
#### How
-   User should have to open the system and select whatever task he/she want to do and then have to fill all the required details.

### Detail requirements
#### High Level Requirements
-   This project can be implemented by using c language in both windows and linux os.   
-   This project will require all the input from user end and then it can perform required tasks on it.                        
#### Low level Requirements
-   The details that user provide as input are fetched from database and then user can perform further tasks on it.
// For eg. Firstly user search and select the required Bus for a journey and then user input all the values to book a ticket after that he/she can able to cancel the ticket or able to check the bus seats status.

---

## Design

### High Level Design 

#### Structural Diagram

#### 1. Deployment Diagram

![HighLevelStructuralDiagram](https://github.com/akshunna45/M1_Application_Bus-Ticket-Reservation/blob/main/2_Architecture/structure%20Diagrams/Structural%20Diagram_Deployment%20Diagram.png)

#### Behavioural Diagram

#### 1. Use Case Diagram

![HighLevelBehaviouralDiagram](https://github.com/akshunna45/M1_Application_Bus-Ticket-Reservation/blob/main/2_Architecture/behavior%20Diagrams/Behavioral%20Diagram_Use%20Case%20Diagram.png)

### Low Level Design 

#### Structural Diagram

#### 2. Class Diagram

![FeaturesLevelStructuralDiagram](https://github.com/akshunna45/M1_Application_Bus-Ticket-Reservation/blob/main/2_Architecture/structure%20Diagrams/Structural%20Diagram_Class%20Diagram.png)

#### Structural Diagram

#### 3. Component Diagram

![FeaturesLevelStructuralDiagram](https://github.com/akshunna45/M1_Application_Bus-Ticket-Reservation/blob/main/2_Architecture/structure%20Diagrams/Structural%20Diagram_Component%20Diagram.png)

#### Behavioural Diagram

#### 2. Activity Diagram

![FeaturesLevelBehaviouralDiagram](https://github.com/akshunna45/M1_Application_Bus-Ticket-Reservation/blob/main/2_Architecture/behavior%20Diagrams/Behavioral%20Diagram_Activity%20Diagram.png)

#### Behavioural Diagram

#### 3. Sequence Diagram

![FeaturesLevelBehaviouralDiagram](https://github.com/akshunna45/M1_Application_Bus-Ticket-Reservation/blob/main/2_Architecture/behavior%20Diagrams/Behavioral%20Diagram_Sequence%20Diagram.png)

---

## Implementation

### Folder Structure

| Folder | Description                                  |
| ------ | -------------------------------------------- |
| inc    | All headers files                            |
| src    | Main source code                             |
| unity  | All unity files                              |
| test   | All source code and data for testing purpose |
| build  | Build output                                 |

### Login Page Details Of Bus Ticket Reservation System

#### User Name: user
#### Password: pass

---

## TEST PLAN

### High Level Test Plan

| **Test ID** | **Description**                                         | **Exp I/P** | **Exp O/P**   | **Actual Out** |**Type Of Test**  |    
|-------------|---------------------------------------------------------|-------------|---------------|----------------|------------------|
|  H_01       | Details Enter By Admin For Bus & Route                  | Total Data  | Data Stored   | Data Stored    | Requirement Based|
|  H_02       | Collect Total Number Of Buses Ready To Go               | 1           | 5             | 5              | Scenario Based   |
|  H_03       | Collect Both Bus And Route Details                      | 1           | All Buses &   | All Buses &    | Scenario Based   |
|             |                                                         |             | Route Details | Route Details  |                  |
|  H_04       | When User Wants To Book The Tickets                     | 2           | Make Payment  | Make Payment   | Scenario Based   |
|  H_05       | When User Wants To Cancel The Tickets                   | 3           | Refund        | Refund         | Scenario Based   |
|  H_06       | When User Wants To See The Bus Status Board             | 4           | Booked/Empty  | Booked/Empty   | Scenario Based   |
|             |                                                         |             |     Seats     |     Seats      |                  |
|  H_07       | When User Wants To Exit From The System                 | 5           | Thank You     | Thank You      | Scenario Based   |
|  H_08       | When User Not Used Any Of The Given Functions           |             |               |                | Boundary based   |

### Low Level Test Plan

| **Test ID** | **Description**                                         | **Exp I/P** | **Exp O/P**   | **Actual Out** |**Type Of Test**  |    
|-------------|---------------------------------------------------------|-------------|---------------|----------------|------------------|
|  L_01       | When System Open And Ask Login Details                  | User Name & | Welcome       | Welcome        | Requirement Based|
|             |                                                         | Password    |               |                |                  |
|  L_02       | Ticket Booking                                          | Bus No. &   | Pay Money     | Pay Money      | Scenario Based   |
|             |                                                         |   Seat No.  | Ticket Booked | Ticket Booked  |                  |
|  L_03       | Ticket Canceling                                        | Bus No. &   | Get Refund    | Get Refund     | Scenario Based   |
|             |                                                         |   Seat No.  | Ticket Cancel | Ticket Cancel  |                  |
|  L_04       | When User Select A Bus In Which All Seats Are Full      |             | Seats         | Seats          | Boundary based   |
|             |                                                         |             | Unavailable   | Unavailable    |                  |

## Output

-   **Below Output Shows The Login Successful Page**

![output](https://github.com/akshunna45/M1_Application_Bus-Ticket-Reservation/blob/main/4_TestPlanAndOutput/1.%20Output_Login_Success.png)

-   **Below Output Shows The Bus And Route Detailed List Page**

![output](https://github.com/akshunna45/M1_Application_Bus-Ticket-Reservation/blob/main/4_TestPlanAndOutput/2.%20Output_Bus_And_Route_Lists.png)

-   **Below Output Shows The Bus Status Board Before Booking**

![output](https://github.com/akshunna45/M1_Application_Bus-Ticket-Reservation/blob/main/4_TestPlanAndOutput/3.%20Output_Bus_Status_Board_Before_Booking.png)

-   **Below Output Shows The Bus Status Board After Booking**

![output](https://github.com/akshunna45/M1_Application_Bus-Ticket-Reservation/blob/main/4_TestPlanAndOutput/4.%20Output_Bus_Status_Board_After_Booking.png)

-   **Below Output Shows The Exit Successful Page**

![output](https://github.com/akshunna45/M1_Application_Bus-Ticket-Reservation/blob/main/4_TestPlanAndOutput/5.%20Output_Exit_Success.png)

---

