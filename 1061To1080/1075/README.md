# [CodeUp 기초 100제](https://codeup.kr/problem.php)

## [1075 : [기초-반복실행구조] 정수 1개 입력받아 카운트다운 출력하기2(설명)](https://codeup.kr/problem.php?id=1075)

시간 제한: 1 Sec 메모리 제한: 128 MB

## 문제 설명

    정수(1 ~ 100) 1개가 입력되었을 때 카운트다운을 출력해보자.

### 입력

    정수 1개가 입력된다.
    (1 ~ 100)

### 출력

    1씩 줄이면서 한 줄에 하나씩 0이 될 때까지 출력한다.

### 입력 예시

    5

### 출력 예시

    4
    3
    2
    1
    0

### 예시

    int n;
    scanf("%d", &n);

    while(n!=0)
    {
        n=n-1; //n--; 와 같다.
        printf("%d", n);
    }

</br>

[[내 풀이 보기]](https://github.com/flexboni/code_up/blob/master/1075/myCode.cpp)

---

[[정답 보기]](https://codeup.kr/showsource.php?id=425099)