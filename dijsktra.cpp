void Dijkstra(int s){
	int u,v;
	for(v=1;v<=n;v++){
		d[v]=a[s][v];
		e[v]=s;
	}
	d[s]=0,e[s]=0,vs[s]=1;
	while(1){
		int u=0,min=MAX_INT;
		for(v=1;v<=n;v++){
			if(vs[v]==0 && d[v]<min){
				u=v;
				min=d[v];
			}
		}
		if(u==0) return;
		for(v=1;v<=n;v++){
			if(vs[v]==0 && d[v]>d[u]+a[u][v]){
				d[v]=d[u]+a[u][v];
				e[v]=u;
			}
		}
	}
}
