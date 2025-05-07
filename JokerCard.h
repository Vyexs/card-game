#ifndef JOKERCARD_H
#define JOKERCARD_H

// 定义一个结构来表示每张 Joker 卡define a structure to 
struct JokerCard {
    std::string name;  // Joker 卡的名称
    int pointBonus;    // Joker 卡代表的加分
};

class JokerCards {
private:
    std::vector<JokerCard> cards;  // 存储所有 Joker 卡

public:
    // 构造函数，初始化五张 Joker 卡
    JokerCards();

    // 获取指定索引的 Joker 卡
    JokerCard getCard(int index) const;

    // 获取 Joker 卡的总数（通常是 5）
    int getCardCount() const;
};

#endif
