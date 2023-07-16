'''
    # 가변 매개변수
    : '가변'?   - 변화가 가능하다
     매개변수의 개수가 정해져 있지 않고
     개수의 변경이 가능하도록 지정하는 매개벼수
     
     
    - 매개변수 앞에 '*' 를 붙여서 가변 매개변수로 선언
    def 함수명 ( *매개변수 )
    
    # 디폴트 매개변수 (기본 매개변수)
    : '디폴트'? - 기본값
      인수가 없는 경우에, 기본값을 갖는 매개변수
      
    def 함수명 ( 매개변수='기본값' )

'''

def add( *args ):
    print(' {} 의 합계는 {} 입니다.'.format( args, sum(args) ))
    

add(1, 2)    
add(1, 2, 3)    
add(1, 2, 3, 4)    

def greet( name, msg='안녕하세요'):
    print('{} 님, {}'.format(name, msg) )
    
greet('김휴먼')
greet('김휴먼', '반갑습니다')
