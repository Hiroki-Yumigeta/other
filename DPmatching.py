#!/usr/bin/python
# coding: UTF-8
from math import sqrt


# (a-b)^2部分
def square(a, b):
    return (a - b) ** 2


# データ格納
class Words:
    def __init__(self):
        self.location = '\0'  # 2行目
        self.frame = 0  # 3行目
        self.data = [[]]

    def data_init(self, person_number, word_number):
        filename = 'city_mcepdata/city{x:03d}/city{x:03d}_{y:03d}.txt'\
            .format(x=person_number, y=word_number+1)
        f = open(filename)  # ファイルを開く
        file_name = f.readline()        # ファイル1行目
        self.location = f.readline()    # 2行目
        self.frame = int(f.readline())  # 3行目
        list1 = f.readline()  # 4行目
        while list1:
            # 空白で区切る
            list2 = list1.split(' ')
            list2.remove('\n')
            self.data.append(list2)
            list1 = f.readline()        # ファイル5行目以降
        self.data.pop(0)
        f.close()


# DPマッチング
class DP:
    def __init__(self):
        self.solution = 0

    def dp_matching(self, frame_a, data_a_in, frame_b, data_b_in):
        d = [[0.0 for i in range(frame_b)] for j in xrange(frame_a)]  # 局所距離
        g = [[0.0 for i in range(frame_b)] for j in xrange(frame_a)]  # 累積距離
        i = j = 0
        tmp = 0.0
        g_case = [0.0 for element in xrange(3)]

        # 局所距離算出 配列 d[[]] に格納
        for i in xrange(frame_a):
            for j in xrange(frame_b):
                # 要素の計算
                for k in xrange(15):
                    # 局所距離計算式
                    tmp += square(float(data_a_in[i][k]), float(data_b_in[j][k]))
                d[i][j] = sqrt(tmp)

        # 動的計画法計算式
        for i in xrange(frame_a):
            for j in xrange(frame_b):
                if i == j == 0:
                    g[0][0] = d[0][0]
                else:
                    if i == 0:
                        g[i][j] = g[0][j-1] + d[0][j]
                    elif j == 0:
                        g[i][j] = g[i-1][0] + d[i][0]
                    else:
                        # 各ルートの計算
                        g_case[0] = g[i][j-1] + d[i][j]
                        g_case[1] = g[i-1][j-1] + (2.0 * d[i][j])
                        g_case[2] = g[i-1][j] + d[i][j]
                        # 各ルートの比較
                        g[i][j] = min(g_case)
        self.solution = float(g[frame_a-1][frame_b-1]) / float(frame_a + frame_a)


# main関数
def main():
    # ファイル読み取り
    words_max = 20
    word_a = [Words() for i in xrange(words_max)]
    word_b = [Words() for i in xrange(words_max)]
    for files in xrange(words_max):  # 100
        word_a[files].data_init(11, files)
        word_b[files].data_init(12, files)
    # 局所距離
    process = [DP() for files in xrange(words_max)]
    minimum = 0
    o = x = 0
    for i in xrange(words_max):
        input_location = word_b[i].location
        for j in xrange(words_max):
            process[j].dp_matching(word_a[j].frame, word_a[j].data, word_b[i].frame, word_b[i].data)  # 2
            minimum = j if process[j].solution < process[minimum].solution else minimum  # 距離の最小値を更新
        # 累積距離の結果
        ans_word = word_a[minimum].location
        if ans_word == input_location:
            o += 1
        else:
            x += 1
        # DPマッチング結果出力
        #print '----- {0:d} -----'.format(i)
        #print minimum+1,
        #print ans_word,
        #print word_a[minimum].location
    print '正答率 = {0:d} %'.format(int(float(o) / float(x + o) * 100.0))

if __name__ == '__main__':
    main() # 1
