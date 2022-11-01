#include <bits/stdc++.h>
#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdlib.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data)
{
    this ->data = data;
    this->left = NULL;
    this->right = NULL;
}} ;
 void takeinput( node* &root){
    int data;
    cin>>data;
 }
 bool isBST(node *root,int min, int max){
     if (root  == NULL) {
        return true;
 }
    if (root->data>=min && root->data<=max ){
        bool left=isBST(root->left,min,root->data);
        bool right=isBST(root->right ,root->data,max);
        return left && right;

    }
    else{ 
        return false;

    }
 }
    int main()
    {
        node* root= NULL;
        cout<<"enter data";
        //INT_MIN
        //nT_MAX
        takeinput(root);
        return isBST(root, INT_MIN,INT_MAX);
    }
 
    