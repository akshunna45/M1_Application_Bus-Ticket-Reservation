# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                         | **Exp I/P** | **Exp O/P**   | **Actual Out** |**Type Of Test**  |    
|-------------|---------------------------------------------------------|-------------|---------------|----------------|------------------|
|  H_01       | Details Enter By Admin For Bus & Route                  | Total Data  | Data Stored   | Data Stored    | Requirement Based|
|  H_02       | Collect Total Number Of Buses Ready To Go               | 1           | 5             | 5              | Scenario Based   |
|  H_03       | Collect Both Bus And Route Details                      | 1           | 5 Lines Detail| 5 Lines Detail | Scenario Based   |
|  H_04       | When User Wants To Book The Tickets                     | 2           | Make Payment  | Make Payment   | Scenario Based   |
|  H_05       | When User Wants To Cancel The Tickets                   | 3           | Refund        | Refund         | Scenario Based   |
|  H_06       | When User Wants To See The Bus Status Board             | 4           | Booked/Empty  | Booked/Empty   | Scenario Based   |
|             |                                                         |             |     Seats     |     Seats      |                  |
|  H_07       | When User Wants To Exit From The System                 | 5           | Thank You     | Thank You      | Scenario Based   |
|  H_08       | When User Not Used Any Of The Given Functions           |             |               |                | Boundary based   |


## Table no: Low level test plan

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


# Output
