// week03-2 好玩的程式設計Processing 結合 for() + if()
void setup() {
  size(800, 100);
}
void draw() {
  background(#1BDAE3); // 用 Tool-色彩選擇器 挑色彩
  for (int x = 0; x < 800; x += 100) { // x: 0 100 200 ...
    if (x < mouseX && mouseX < x + 100) fill(255, 255, 255);
    else fill(#1BDAE3); // 依照mouseX 的位置,決定色彩
    rect(x, 0, 100, 100);
  }
}
