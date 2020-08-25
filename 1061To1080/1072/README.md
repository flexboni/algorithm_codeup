# [CodeUp 기초 100제](https://codeup.kr/problem.php)

## [1072 : [기초-반복실행구조] 정수 입력받아 계속 출력하기(설명)](https://codeup.kr/problem.php?id=1072)

시간 제한: 1 Sec 메모리 제한: 128 MB

## 문제 설명

    n개의 정수가 순서대로 입력된다.
    -2147483648 ~ +2147483648, 단 n의 최대 개수는 알 수 없다.

    n개의 입력된 정수를 순서대로 출력해보자.

    while(), for(), do-while() 등의 반복문을 사용할 수 없다.

### 입력

    첫 줄에 정수의 개수 n이 입력됙,
    두 번째 줄에 n개의 정수가 공백을 두고 입력된다.
    -214783648 ~ +214783648, 단 n의 최대 개수는 알 수 없다.

### 출력

    n개의 정수를 한 개씩 줄을 바꿔 출력한다.

### 입력 예시

    5
    1 2 3 4 5

### 출력 예시

    1
    2
    3
    4
    5

### 예시

     int n, m;
     scanf("%d", &n);
    reload: // 레이블은 콜론(:)을 끝내고, 일반적으로 들여쓰기를 하지 않는다.
     scanf("%d", &m);
     printf("%d\n", m);
     if (n-- != 0) goto reload; // reload 라고 적혀있는 레이블로 실행 이동, n의 값 1만큼 감소


</br>

[[내 풀이 보기]](https://github.com/flexboni/code_up/blob/master/1072/myCode.cpp)

'내 풀이' 보다 '정답'이 맞는 풀이다.

---

[(정답 보기)](https://codeup.kr/showsource.php?id=434955)