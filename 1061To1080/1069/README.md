# [CodeUp 기초 100제](https://codeup.kr/problem.php)

## [1069 : [기초-조건/선택실행구조] 평가 입력받아 다르게 출력하기(설명)](https://codeup.kr/problem.php?id=1069)

시간 제한: 1 Sec 메모리 제한: 128 MB

## 문제 설명

    평가를 문자(A, B, C, D, ...)로 입력받아 내용을 다르게 출력해보자.

    평가 내용
    평가 : 내용
    A : best!!!
    B : good!!
    C : run!
    D : slowly~
    나머지 문자들 : what?

### 입력

    영문자 1개가 입력된다.
    (A, B, C, D 등의 한 문자가 입력된다.)

### 출력

    평가내용에 따라 다른 내용이 출력된다.

### 입력 예시

    A

### 출력 예시

    best!!!

### 참고

    조건/선택문을 복합적으로 구성해 출력할 수도 있지만,

    switch(정수값)
    {
    case 'A': //문자 'A'가 정수값 65('A'의 아스키 값)로 저장되기 때문에 가능하다.
        ...;
        break;
    case 'B':
        ...;
        break;
    case 'C':
        ...;
        break;
    default:
        ...;
    }

    위와 같은 switch( ) ... case... break; 제어문을 사용할 수 있다.

    ** break; 를 사용하지 않으면 이후의 명령들도 계속 실행된다.
    default: 는 제시된 case 를 제외한 나머지 모든 경우에 실행된다.
    switch( ) 에 주어지는 값은 “정수"값만 가능하며,
    문자도 아스키코드 정수값이기 때문에 가능하다.

</br>

[[내 풀이 보기]](https://github.com/flexboni/code_up/blob/master/1069/myCode.cpp)

---

[(정답 보기)](https://codeup.kr/showsource.php?id=425092)