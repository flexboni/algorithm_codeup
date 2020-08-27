# [CodeUp 기초 100제](https://codeup.kr/problem.php)

## [1078 : [기초-종합] 짝수 합 구하기(설명)](https://codeup.kr/problem.php?id=1078)

시간 제한: 1 Sec 메모리 제한: 128 MB

## 문제 설명

    정수(1 ~ 100) 1개를 입력받아 1부터 그 수까지 짝수의 합을 구해보자.

### 입력

    정수 1개가 입력된다.
    (0 ~ 100)

### 출력

    1부터 입력된 수까지 짝수의 합을 출력한다.

### 입력 예시

    5

### 출력 예시

    6

### 참고

    while( ) {...}, do {...} while( );, for(...; ...; ...) {...} 등의 반복문은 형태만 다르
    고, 똑같은 성능을 발휘한다. 필요에 따라 편리한 것으로 골라 사용하면 된다.

### 예시

    //아래의 예는 홀수일 경우만 더해 그 결과를 출력한다.
    int sum=0;
    int i, n;
    
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        if(i%2==1) sum=sum+i;
    }

</br>

[[내 풀이 보기]](https://github.com/flexboni/code_up/blob/master/1078/myCode.cpp)

---

[[정답 보기]](https://codeup.kr/showsource.php?id=425102)