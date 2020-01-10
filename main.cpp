#include <stdlib.h>
#include <stdio.h>
#include "BinSrchTree.h"

int main()
{
  BinSrchTree tree;
  BinSrchTree tree2;

  // 삽입 연산 테스트
  printf("[삽입연산] : 35 18 7 26 12 3 68 22 30 99 \n");
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
  printf("\n<BST 정보 출력 >\n"); 
  printf(" 노드의 개수 = %d\n", tree.getCount());
  printf(" 단말의 개수 = %d\n", tree.getLeafCount());
  printf(" 트리의 높이 = %d\n", tree.getHeight());

  // 삭제 연산 테스트
  printf("\n----------<< 기존 삭제 연산 >>----------\n");
  printf("\n <Original BST> : ");
  tree.levelorder();
  printf(" 삭제: case 1 ==> 노드  3 삭제 :");
  tree.remove( 3 );
  tree.levelorder();
  printf(" 삭제: case 2 ==> 노드 68 삭제 : ");
  tree.remove( 68 );
  tree.levelorder();
  printf(" 삭제: case 3 ==> 노드 18 삭제 : ");
  tree.remove( 18 );
  tree.levelorder();
  printf(" 삭제: case 3 ==> 노드 35 삭제 (루트 노드 삭제) :  ");
  tree.remove( 35 );
  tree.levelorder();
    // 최종 트리 정보 출력
  printf("\n <최종 BST 정보 출력> \n");
  printf(" 노드의 개수 = %d\n", tree.getCount());
  printf(" 단말의 개수 = %d\n", tree.getLeafCount());
  printf(" 트리의 높이 = %d\n", tree.getHeight());


  printf("\n----------<< 새로운 삭제 연산 >>----------\n");
  printf("\n <Original BST> : ");
  tree2.levelorder();
  printf(" 삭제: case 1 ==> 노드  3 삭제 :");
  tree2.newRemove(3);
  tree2.levelorder();
  printf(" 삭제: case 2 ==> 노드 68 삭제 : ");
  tree2.newRemove(68);
  tree2.levelorder();
  printf(" 삭제: case 3 ==> 노드 18 삭제 : ");
  tree2.newRemove(18);
  tree2.levelorder();
  printf(" 삭제: case 3 ==> 노드 35 삭제 (루트 노드 삭제) :  ");
  tree2.newRemove(35);
  tree2.levelorder();
  // 최종 트리 정보 출력
  printf("\n <최종 BST 정보 출력> \n");
  printf(" 노드의 개수 = %d\n", tree2.getCount());
  printf(" 단말의 개수 = %d\n", tree2.getLeafCount());
  printf(" 트리의 높이 = %d\n", tree2.getHeight());


  system("pause");
}
