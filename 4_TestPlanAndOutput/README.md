# TEST PLAN :)
## Table : High Level Test Plan
| Test ID | Description | Exp I/P | Exp O/P | Actual Output | Type Of Test |
| ------- | ----------- | ------- | ------- | ------------- | ------------ |
| H_01    | Choose Options from Main Menu | Input value in between 0 and 4 | Calling Functions | Opens function | Requirement based |
| H_02 | Have to Choose Movies | Choose Movie Codes | Movie List | Records Found for selected Movie | Requirement based |
| H_03 | Admin Privilages | User id and Password | If credentials entered were right logged in else fail to login in . | Login Page | Requirement based |
| H_04 | Customer Details for Booking | Customer Details | Name, Mobile Number. | Details of customer | Requirement based

## Table : Low Level Test Plan
| Test ID | Description | Exp I/P | Exp O/P | Actual Output | Type Of Test |
| ------- | ----------- | ------- | ------- | ------------- | ------------ |
| L_01 | Main Menu | Choise of main menu | Main Menu |H_01 | Requirement based |
| L_02 | Admin Credentials | Correct details while signing up | Credentials | H_02 | Requirement based |
| L_03 | Details | Customer Details | Mobile Number | H_04 | Requirement based |