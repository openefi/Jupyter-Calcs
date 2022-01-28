from ctypes import *
so_file = "func/map.so"
map = CDLL("func/map.so")
tps = CDLL("func/tps.so")

print(map.calc(8))
print(map.calc(4095))
print(map.calc(4000))


print(tps.calc(8))
print(tps.calc(1500))
print(tps.calc(3000))