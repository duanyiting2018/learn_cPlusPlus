/*This is a dfs example,you can use it in your code.
(hdu 1312's answer)
#define CHECK(x,y) (x<Wx&&x>=0&&y>=0&&y<Hy)
void dfs(int dx,int dy){
	room[dx][dy]='#';
	//cout<<"walk:"<<dx<<dy<<endl;
	num++;
	for(int i=0;i<4;i++){
		int newx=dx+dir[i][0];
		int newy=dy+dir[i][1];
		if(CHECK(newx,newy)&&coom[newx][newy]=='.'){
			dfs(newx,newy);
			//cout<<"	back:"<<dx<<dy<<endl;
		}
	}
}*/
