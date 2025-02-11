import random
i=random.randint(1,100)
for n in range(5):
    a=int(input('請猜一數字介於1~100(只有5次機會)'))
    if(a<i):
        print(f'第{n+1}次失敗! 答案比{a}大喔! 在猜猜~~')
    elif(a>i):
        print(f'第{n+1}次失敗! 答案比{a}小喔! 在猜猜~~')    
    elif(a==i):
        print('BINGO!猜對囉!!!')
        break
else:
    print(f'你輸囉~~~ 答案應該是{i}')