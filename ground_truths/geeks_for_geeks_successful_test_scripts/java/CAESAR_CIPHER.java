Nodes
1;special;;
2;statement;StringBuffer result = new StringBuffer();
3;statement;int i = 0;
4;conditional;foo_1 < foo_2.fun_1();
5;conditional;Character.fun_1(foo_1.fun_2(foo_2));
6;statement;char ch = ((char) (((int) (foo_1.fun_1(foo_2))) + foo_3));
7;statement;fun_1(foo_1);
8;statement;char ch = ((char) (((int) (foo_1.fun_1(foo_2))) + foo_3));
9;statement;fun_1(foo_1);
10;statement;i++;
11;statement;return foo_1;
12;exit;;
Edges
0;2;
1;3;
2;4;
3;5;11;
4;6;8;
5;7;
6;10;
7;9;
8;10;
9;4;
10;12;
11;
