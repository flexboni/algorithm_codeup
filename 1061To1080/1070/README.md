# [CodeUp 기초 100제](https://codeup.kr/problem.php)

## [1070 : [기초-조건/선택실행구조] 월 입력받아 계절 출력하기(설명)](https://codeup.kr/problem.php?id=1070)

시간 제한: 1 Sec 메모리 제한: 128 MB

## 문제 설명

    월이 입력될 때 계절 이름이 출력되도록 해보자.

### 예

    월 : 계절 이름
    12, 1, 2 : winter
    3, 4, 5 : spring
    6, 7, 8 : summer
    9, 10, 11 : fall

### 입력

    월을 의미하는 1개의 정수가 입력된다.(1 ~ 12)

### 출력

    계절 이름을 출력한다.

### 입력 예시

    12

### 출력 예시

    winter

### 참고

    swtich( ).. case ... break; 제어문에서
    break;를 제거하면 멈추지 않고 다음 명령이 실행되는 특성을 이용할 수 있다.

    switch(a)
    {
    ...
    case 3:
    case 4:
    case 5:
        printf("spring");
    break;
    ...
    }
    로 작성하면, 3, 4, 5가 입력되었을 때 모두 "spring"이 출력된다.

    ** 12, 1, 2 는 어떻게 처리해야 할지 여러 가지로 생각해 보아야 한다.

</br>

[[내 풀이 보기]](https://github.com/flexboni/code_up/blob/master/1070/myCode.cpp)

---

[(정답 보기)](https://codeup.kr/showsource.php?id=425093)