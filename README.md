## 2024 South Korean legislative election proportional representation seat calculator (대한민국 제22대 국회의원 선거 준연동형 비례대표제 의석수 계산기)

#### About proportional representation seat calculator (비례대표제 의석수 계산기에 대하여)

+ Aimed to make a program that calculates seats that are elected by proportional representation via the additional member system and largest remainder method. (기존의 병립형 선거제 대신에 제 21대 국회의원 선거부터 도입된 준연동형 비례대표제를 적용하여 각 당의 예상 비례의석수를 산출해내는 프로그램.)
+ Type in each party's constituency seats and proportional votes to calculate the proportional representation seats (각 정당의 예상 지역구 의석수, 비례득표율을 입력받아 비례대표 의석수를 계산함.)
+ Started the project on 29MAR24. (2024년 3월 29일에 이 프로젝트를 시작함.)

#### Development Environment (개발환경)

+ C++

#### Allocation of Seats of Proportional Representation Members

1) A political party which has obtained at least 3/100 of the total valid votes nationwide in an election of proportional representation or A political party which has won at least five seats in the election of constituency members of the National Assembly is eligible for allocation.
2) The number of seats to be distributed to each seat-allocated party (hereafter in this Article, referred to as “number of proportionally distributed seats”) shall be computed by rounding off the value calculated by the following formula to the nearest tenth. In such cases, where the number of proportionally distributed seats is less than 1, it shall be deemed 0.
3) Number of proportionally distributed seats = [(Fixed number of members of the National Assembly - Number of the elected constituency members of the National Assembly who were not nominated by seat-allocated parties) x Percentage of votes obtained by the relevant party in the election of proportional representation members of the National Assembly - Number of the elected constituency members of the National Assembly of the relevant party]÷ 2
4) Where the sum of the numbers of proportionally distributed seats by political party under subparagraph 1 falls short of the fixed number of seats of proportional representation members of the National Assembly, the number of remaining seats to be distributed to each seat-allocated party (hereafter in this Article referred to as “number of remaining distributed seats”) shall be computed by the following formula; and in such cases, an integral number of seats shall be allotted first and the remaining seats shall be distributed one by one to each seat-allocated party in descending order of the number after the decimal point, and when the said number is equal, the seats shall be distributed by lot among the relevant political parties.
5) Number of remaining distributed seats = (Fixed number of seats of proportional representation members of the National Assembly - Sum of the numbers of proportionally distributed seats by political party) x Percentage of votes obtained in the election of proportional representation members of the National Assembly.
6) Where the sum of the numbers of proportionally distributed seats by political party under subparagraph 1 exceeds the fixed number of seats of proportional representation members of the National Assembly, the number computed by the following formula (hereafter in this Article referred to as “number of adjusted seats”) shall be calculated as the seats of each political party to which proportionally distributed seats are allocated, notwithstanding subparagraphs 1 and 2. In such cases, the latter part of subparagraph 2 shall apply mutatis mutandis to the calculation method.
7) Number of adjusted seats = Fixed number of seats of proportional representation members of the National Assembly x Number of proportionally distributed seats ÷ Sum of the numbers of proportionally distributed seats by political party.


#### 준연동형 비례대표제 의석 산출 방식

1) 지역구 의석이 5석 이상이거나, 비례대표 득표율이 3% 이상이 되면 의석 할당 정당 요건 충족.
2) 의석 할당 정당 요건을 충족하는 정당만을 대상으로 그 득표율이 100%가 되도록 재조정.
3) 연동 배분 의석수 산출.
   
<p align="center">
  <img src="Images/new3.png"
   width="70%"
   height="50%"
    >
</p>

4) 조정 의석수 산출.
   
<p align="center">
  <img src="Images/new2.png"
   width="30%"
   height="10%"
    >
</p>

5) 조정 의석수 소수점을 버림한 정수부가 1차 의석수.
6) 잔여 의석은 버림한 소수점이 큰 순서대로 배분한뒤 1차 의석수와 합한 것이 최종 비례대표 의석수.

#### How to use (사용방법)

<p align="center">
  <img src="Images/use1.png"
   width="70%"
   height="50%"
    >
</p>

1) Type in the number of constituency seats for each party (지역구 의석의 전체 합이 254석이 되도록 정당별로 값을 입력.) 

<p align="center">
  <img src="Images/use2.png"
   width="70%"
   height="50%"
    >
</p>

2) Type in proportional votes for each party (비례 득표율이 100%를 넘지 않도록 정당별로 값을 입력.)

<p align="center">
  <img src="Images/use3.png"
   width="70%"
   height="50%"
    >
</p>

3) calculates the proportional representation seats for each party (정당별 비례 의석수 산출.)

#### Notes (기타)

+ How I made the program (프로그램 개발 과정): https://blog.naver.com/motorpoolpmcs/223400134071 (in Korean)

#### Reference (참조)

+ What to Know About South Korea's 2024 Parliament Election, The New York Times: https://www.nytimes.com/2024/03/28/world/asia/south-korea-parliament-election-2024.html
+ Republic of Korea Public Official Election Act, Korean Law Translation Center: https://elaw.klri.re.kr/kor_service/lawView.do?hseq=60172&lang=ENG
+ 공직선거법 189조, 국가법령정보센터: https://www.law.go.kr/%EB%B2%95%EB%A0%B9/%EA%B3%B5%EC%A7%81%EC%84%A0%EA%B1%B0%EB%B2%95/%EC%A0%9C189%EC%A1%B0
+ 준연동형비례대표제, 그게 뭔가요?, 중앙선거관리위원회: https://www.nec.go.kr/site/nec/ex/bbs/View.do?cbIdx=1147&bcIdx=17218
+ 셈법 더 복잡해졌다…野 유지한다는 '준연동형 비례제' 뭐길래, 중앙일보: https://www.joongang.co.kr/article/25227020
