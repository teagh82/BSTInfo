#include <stdlib.h>
#include <stdio.h>
#include "BinSrchTree.h"

int main()
{
  BinSrchTree tree;
  BinSrchTree tree2;

  // ���� ���� �׽�Ʈ
  printf("[���Կ���] : 35 18 7 26 12 3 68 22 30 99 \n");
  tree.insert( new BinaryNode(35) );
  tree.insert( new BinaryNode(18) );
  tree.insert( new BinaryNode(7 ) );
  tree.insert( new BinaryNode(26) );
  tree.insert( new BinaryNode(12) );
  tree.insert( new BinaryNode(3 ) );
  tree.insert( new BinaryNode(68) );
  tree.insert( new BinaryNode(22) );
  tree.insert( new BinaryNode(30) );
  tree.insert( new BinaryNode(99) );

  tree2.insert(new BinaryNode(35));
  tree2.insert(new BinaryNode(18));
  tree2.insert(new BinaryNode(7));
  tree2.insert(new BinaryNode(26));
  tree2.insert(new BinaryNode(12));
  tree2.insert(new BinaryNode(3));
  tree2.insert(new BinaryNode(68));
  tree2.insert(new BinaryNode(22));
  tree2.insert(new BinaryNode(30));
  tree2.insert(new BinaryNode(99));

  tree.inorder();
  tree.preorder();
  tree.postorder();
  tree.levelorder();
  printf("\n<BST ���� ��� >\n"); 
  printf(" ����� ���� = %d\n", tree.getCount());
  printf(" �ܸ��� ���� = %d\n", tree.getLeafCount());
  printf(" Ʈ���� ���� = %d\n", tree.getHeight());

  // ���� ���� �׽�Ʈ
  printf("\n----------<< ���� ���� ���� >>----------\n");
  printf("\n <Original BST> : ");
  tree.levelorder();
  printf(" ����: case 1 ==> ���  3 ���� :");
  tree.remove( 3 );
  tree.levelorder();
  printf(" ����: case 2 ==> ��� 68 ���� : ");
  tree.remove( 68 );
  tree.levelorder();
  printf(" ����: case 3 ==> ��� 18 ���� : ");
  tree.remove( 18 );
  tree.levelorder();
  printf(" ����: case 3 ==> ��� 35 ���� (��Ʈ ��� ����) :  ");
  tree.remove( 35 );
  tree.levelorder();
    // ���� Ʈ�� ���� ���
  printf("\n <���� BST ���� ���> \n");
  printf(" ����� ���� = %d\n", tree.getCount());
  printf(" �ܸ��� ���� = %d\n", tree.getLeafCount());
  printf(" Ʈ���� ���� = %d\n", tree.getHeight());


  printf("\n----------<< ���ο� ���� ���� >>----------\n");
  printf("\n <Original BST> : ");
  tree2.levelorder();
  printf(" ����: case 1 ==> ���  3 ���� :");
  tree2.newRemove(3);
  tree2.levelorder();
  printf(" ����: case 2 ==> ��� 68 ���� : ");
  tree2.newRemove(68);
  tree2.levelorder();
  printf(" ����: case 3 ==> ��� 18 ���� : ");
  tree2.newRemove(18);
  tree2.levelorder();
  printf(" ����: case 3 ==> ��� 35 ���� (��Ʈ ��� ����) :  ");
  tree2.newRemove(35);
  tree2.levelorder();
  // ���� Ʈ�� ���� ���
  printf("\n <���� BST ���� ���> \n");
  printf(" ����� ���� = %d\n", tree2.getCount());
  printf(" �ܸ��� ���� = %d\n", tree2.getLeafCount());
  printf(" Ʈ���� ���� = %d\n", tree2.getHeight());


  system("pause");
}
