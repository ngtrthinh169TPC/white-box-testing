# Homework for Software Testing 2022

This program is meant to test a "sumOdd" function, which receive 2 parameters as 2 integer numbers, and add to the result value of the number if it's an odd number.
This homework is about white box testing. Precisely it's control flow testing.

### File structure

1. sumOdd.cpp : contains the "sumOdd" function, which needs to be tested.
Control flow:
- if (firstNum is even)
  - if (secondNum is even) -> return 0
  - else -> return secondNum
- else
  - if (secondNum is even) -> return firstNum
  - else -> return firstNum + secondNum

2. ControlFlow.cpp: contains the tests using the control flow testing method.
- 1st test: firstNum is even, secondNum is even
- 2nd test: firstNum is even, secondNum is odd
- 3rd test: firstNum is odd, secondNum is even
- 4th test: firstnum is odd, secondNum is odd


### How to use
Just run the 2nd file (ControlFlow.cpp), results of the tests will be printed into the screen.

---

# Bài tập Kiểm thử Phần mềm 2022

Chương trình này được viết ra nhằm kiểm thử hàm "sumOdd" - hàm nhận vào 2 số integer và tính tổng các số lẻ trong 2 số integer từ đầu vào.
Bài tập này làm về kiểm thử hộp trắng, cụ thể là kiểm thử luồng điều khiển.

### Cấu trúc thư mục

1. sumOdd.cpp : chứa hàm "sumOdd" cần được kiểm thử.
Luồng điều khiển:
- if (firstNum is even)
  - -> if (secondNum is even) -> return 0
  - else -> return secondNum
- else 
  - if (secondNum is even) -> return firstNum
  - else -> return firstNum + secondNum
2. ControlFlowcpp: chứa các ca kiểm thử sử dụng phương pháp kiểm thử luồng điều khiển
- Test 1: firstNum chẵn, secondNum chẵn
- Test 2: firstNum chẵn, secondNum lẻ
- Test 3: firstNum lẻ, secondNum chẵn
- Test 4: firstNum lẻ, secondNum lẻ

### Sử dụng
Chỉ cần chạy thư mục ở mục 2 nêu trên (ControlFlow.cpp), kết quả của các test sẽ được in ra màn hình.
