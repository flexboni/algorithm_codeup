# algorithm_codeup
Code up 사이트 기초 100제 풀면서 정리하는 저장소

사용언어 : C, C++

## 알아야 하는 내용

- -2147483648 ~ +2147483647 범위의 정수는 'int', 입*출력 타입 '%d'
  
  반면, 0 ~ 4294967295 범위의 정수는 ;unsigned int' 데이터형, 입*출력 타입 '%u'

  (참고 : https://m.blog.naver.com/PostView.nhn?blogId=dntkrl79&logNo=220911725265&proxyReferer=https:%2F%2Fwww.google.com%2F)

- 원하는 자릿수 만큼 0 채우기 예시
  
  ```  
  99.2.1 => prinf("%04d.%02d.%02d") => 0099.02.01 
  ```

- 한 번에 입력 받은 정수 자릿수 대로 분리하는 법

  ```
  scanf("%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e);
  ```
  