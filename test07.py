Age =int(input('请输入年龄:'))
if Age<18:
    print('雇佣童工，违法！')
elif Age>60:
    print('该退休了！')
else:
    print('合法工作年龄！')
print('系统关闭')