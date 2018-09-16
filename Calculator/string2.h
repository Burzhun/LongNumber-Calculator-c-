const int length=3000;
const int flength=35;
class vlongint
{

public:
	 int l;
	 
	 int numbers[length];
	 vlongint()
	 {
		 l=1;
		
	 }
	 vlongint(int n)
	 {
		 l=n;
	 }
	 vlongint operator+(vlongint t){
		 int i;
		 for(i=l+1;i<l+t.l;i++){numbers[i]=t.numbers[i-l];}
		 l+=t.l;
	 };
	 vlongint operator=(vlongint t)
	 {
		 l=t.l;
		 for(int i=1;i<l+1;i++){numbers[i]=t.numbers[i];}
		 return *this;
	 }
	 void add(int t)
	 {
		 l+=1;
		 numbers[l]=t;
	 }
	 void add(vlongint t)
	 {
		 int i;
		 for(i=l+1;i<l+t.l+1;i++){numbers[i]=t.numbers[i-l];}
		 l+=t.l;
	 }
	 void delete2(int n)
	 {
		 for(int i=l;i>l-n;i--){numbers[i]=0;}
		 l--;
	 }
	 void addz(int n)
	 {
		 int t=l+n;
		 if(l+n>2950){t=length;}
		 for(int i=t;i>n;i--){numbers[i]=numbers[i-n];}
		 for(int i=1;i<=n;i++){numbers[i]=0;}
		 l+=n;
	 }	 
	 bool vlongint::operator==(vlongint v2)
	 {
		 bool b=true;
		 if(l!=v2.l){return false;}
		 else
		 {
			 for(int i=1;i<=l;i++){if(numbers[i]!=v2.numbers[i]){b=false;}}
		 }
		 return b;
	 }
	 bool vlongint::operator<(vlongint t)
	 {
		 if(t.l>l){return true;}
		 if(t.l<l){return false;} 
		 int i=1;
		 while((i<=l)&&(numbers[i]==t.numbers[i])){i++;}
		 if(i==l+1){return false;}
		 if(numbers[i]<t.numbers[i]){return true;}
		 if(numbers[i]>t.numbers[i]){return false;}
		
	 }
	 bool vlongint::operator>(vlongint t)
	 {
		 if(t.l>l){return false;}
		 if(t.l<l){return true;} 
		 int i=1;
		 while((i<=l)&&(numbers[i]==t.numbers[i])){i++;}
		 if(i==l+1){return false;}
		 if(numbers[i]<t.numbers[i]){return false;}
		 if(numbers[i]>t.numbers[i]){return true;}
	 }
	 void power10(int a)
	 {
		 if(a){
		 l+=a;
		 for(int i=l+1;i<l+a+1;i++){numbers[i]=0;}
		 }
	 }
	 void sum1(int n);
	 void dif1(int n);
	 void dif(int n,int m);
	 void zero(){l=1;for(int i=1;i<=l;i++){numbers[i]=0;}}
	 void deletefirst()
	 {
		 for(int i=1;i<l;i++){numbers[i]=numbers[i+1];}
		 l--;
	 }
	 void delf(int n)
	 {
		 for(int i=1;i<=l-n;i++)
		 {
			 numbers[i]=numbers[i+n];
		 }
		 l-=n;
	 }
	 void delzero()
	 {
		 int n=0;int i=1;
		 while(numbers[i]==0&&i<l)
		 {
			 n++;i++;
		 }
		 if(l-n)
		 {
			delf(n);
		 }
		 else
		 {
			 l=1;
		 }
	 }
	 void addfirst(int n)
	 {
		 l+=1;
		 for(int i=l;i>1;i--){numbers[i]=numbers[i-1];}
		 numbers[1]=n;
	 }
	 int toint();
	 ~vlongint(){}
	 
};

int max(int a,int b)
			{
				if(a>b){return a;}return b;
			};
void vlongint::sum1(int n)
	 {
		 n=0;
		 int i=l;
		 while(numbers[i]==9){n++;i--;}
		 if(n)
		 {
			 if(n==l)
			 {
				 l+=1;
				 numbers[1]=1;
				 for(int i=2;i<l+1;i++){numbers[i]=0;}
			 }
			 else
			 {
				 numbers[l-n]+=1;
				 for(int i=l-n+1;i<l+1;i++){numbers[i]=0;}
			 }
		 }
		 else
		 {
			 numbers[l]+=1;
		 }
	 };
void vlongint::dif1(int m)
{
	int l2=l;
	if(m<10)
	{
		if(numbers[l]<m)
		{
			if(l>2)
			{
				int i=l-1;
				int n=0;
				while(numbers[i]==0)
				{
					n++;
					i--;
				}
				if(n)
				{
					if((n==l-2)&&(numbers[1]==1))
					{
						for(int i=1;i<l-1;i++){numbers[i]=9;}
						numbers[l-1]=numbers[l]+10-m;
						l-=1;						
					}
					else if(n==l-2)
					{
						for(int i=2;i<l;i++){numbers[i]=9;}
						numbers[l]=numbers[l]+10-m;
						numbers[1]-=1;
					}
					else
					{
						numbers[l-1-n]-=1;
						for(int i=l-n;i<l;i++){numbers[i]=9;}
						numbers[l]+=10-m;
					}
				}
				else
				{
					numbers[l]+=10-m;
					numbers[l-1]-=1;
				}
				
			}
			else if(l==2)
			{
				if(numbers[1]==1){l=1;numbers[1]=10+numbers[2]-m;}
				else{numbers[1]-=1;numbers[2]+=10-m;}
			}
		}
		else
		{
			numbers[l]-=m;
		}
	}
	
	
}
void deletezero(vlongint &t)
	 {
		 int n=0;
		 int i=1;
		 while(t.numbers[i]==0){n++;i++;}
		 if(n)
		 {
			for(i=1;i<=t.l;i++){t.numbers[i]=t.numbers[i+n];}
			for(i=t.l+1;i<t.l+n;i++){t.numbers[i]=0;}
			t.l-=n;
		 }
	 }

vlongint Sum(vlongint v1,vlongint v2)
{
	int l;
	l=max(v1.l,v2.l);
	v1.addz(l-v1.l+1);
	v2.addz(l-v2.l+1);
	vlongint t;
	for(int i=0;i<l+4;i++){t.numbers[i]=0;}
	int a1,a2;
	a1=v1.numbers[l+1]+v2.numbers[l+1];
	for(int i=l+1;i>0;i--)
	{
		
		if(i==l+1){a1=v1.numbers[i]+v2.numbers[i];t.numbers[i]=a1%10;a2=a1;continue;}
		else{a1=v1.numbers[i]+v2.numbers[i]+a2/10;t.numbers[i]=a1%10;}
		a2=a1;
	}
	t.l=l+1;
	deletezero(t);
	return t;
};
vlongint Multi(vlongint v1,vlongint v2)
{
	vlongint t,t2,t3;
	t.l=1;
	t.numbers[1]=1;
	t2=v1;
	while(!(t==v2)){t2=Sum(t2,v1);t.sum1(0);}
	return t2;
};
vlongint Multiint(vlongint v1,int n)
{
	vlongint t;
	t=v1;
	for(int i=1;i<n;i++)
	{
		t=Sum(t,v1);
	}
	return t;
}
vlongint Multi2(vlongint v1,vlongint v2)
{
	vlongint t2,t3;
	for(int i=1;i<v2.l+1;i++)
	{
		
		if(v2.numbers[i]){
		t2=Multiint(v1,v2.numbers[i]);
		t2.power10(v2.l-i);t3=Sum(t3,t2);}
		
	}
	return t3;
};
vlongint Power(vlongint v1,vlongint v2)
{
	vlongint t,t2(v1.l);
	t2=v1;
	t.numbers[1]=1;
	t.l=1;
	while(!(t==v2)){t2=Multi2(t2,v1);t.sum1(0);}
	return t2;
}

vlongint Fib(int n)
{
	vlongint v1,v2;
	v1.l=v2.l=1;
	v1.numbers[1]=v2.numbers[1]=1;
	if(n<3){return v1;}
	else
	{
		vlongint v;
		int i=2;
		while(i<=n)
		{
			v=Sum(v1,v2);
			v1=v2;
			v2=v;
			i++;
		}
		return v2;
	}
}
void vlongint::dif(int n, int m)
{
	if(m){
	vlongint v;
	v.l=m;
	for(int i=1;i<=m;i++){v.numbers[i]=numbers[l-m+i];}
	l-=m;
	dif1(n);
	add(v);
	}
	else{dif1(n);}
}
vlongint Dif(vlongint v1,vlongint v2)
{
	vlongint v;
	
	if(v2<v1)
	{
		for(int i=v2.l;i>=0;i--)
		{
			v1.dif(v2.numbers[i],v2.l-i);
		}
		return v1;
	}
	if(v2==v1){v.zero();return v;}
	
}

vlongint Div(vlongint v1,vlongint v2)
{
	vlongint v,t;
	v.l=0;
	t.l=v2.l;
	int n=v2.l;
	for(int i=1;i<=t.l;i++){t.numbers[i]=v1.numbers[i];}
	while(n<=v1.l)
	{
		if(t==v2)
		{
			v.add(1);n+=1;t.l=0;
			if(n<=v1.l){t.add(v1.numbers[n]);}
			continue;
		}
		
		if(t<v2)
		{
			v.add(0);
			n+=1;			
		    if(n<=v1.l){t.add(v1.numbers[n]);}
			t.delzero();
			continue;
		}
		if(t>v2)
		{
			vlongint k;
			k=v2;
			int m=1;
			while(!(k>t))
			{
				k=Multiint(v2,m+1);
				m++;
			}
			m--;
			k=Dif(k,v2);
			if(!(k==t))
			{
				t=Dif(t,k);	
				n+=1;
				t.delzero();
				v.add(m);
				if(n<=v1.l){t.add(v1.numbers[n]);}
			}
			else
			{
				v.add(m);
				t.zero();
				n++;
				if((n<=v1.l)){t.numbers[1]=v1.numbers[n];}
			}
			continue;
		}
	}
	v.delzero();
	return v;
}

vlongint strtovlongint(System::String^ s)
				 {
					 vlongint v;
					 int l=s->Length;
					 v.l=l;
					 for(int i=1;i<l+1;i++)
					 {
						 v.numbers[i]=s[i-1]-'0';
					 }
					 return v;
				 }
 System::String^ vlonginttostr(vlongint v)
				 {
					 System::String^ s="";
					 for(int i=1;i<=v.l;i++)
					 {
						s=System::String::Concat(s,v.numbers[i]);
					 }
					 return s;
				 }

 int vlongint::toint()
 {
	  int i;
	  i=System::Convert::ToInt32(vlonginttostr(*this));
	  return i;
 }
class vlongfloat
{
 public:
	vlongint t;
	bool natural;
	int lfloat;
	vlongfloat()
	{
		t.l=0;natural=true;lfloat=0;
		for(int i=0;i<length;i++){t.numbers[i]=0;}
	}
	
	vlongfloat operator=(vlongfloat m){natural=m.natural;t=m.t;lfloat=m.lfloat;return *this;}
	bool vlongfloat::operator ==(vlongfloat v2);
	bool vlongfloat::operator ==(int n);
	bool vlongfloat::operator <(vlongfloat v2);
	bool vlongfloat::operator >(vlongfloat v2);
	vlongfloat operator+(vlongfloat t);
	vlongfloat operator+(int n);
	vlongfloat operator+(double n);
	vlongfloat operator-(vlongfloat t);
	vlongfloat operator-(int n);
	vlongfloat operator-(double n);
	vlongfloat operator*(vlongfloat t);
	vlongfloat operator*(int n);
	vlongfloat operator*(double n);
	vlongfloat operator/(vlongfloat t);
	vlongfloat operator/(int n);
	vlongfloat operator/(double n);
	vlongint pint()
	{vlongint m;m.l=t.l-lfloat;
	for(int i=0;i<m.l+1;i++){m.numbers[i]=t.numbers[i];}return m;
	}
	vlongint pfloat()
	{
		vlongint m;m.l=lfloat;
		for(int i=1;i<=m.l;i++){m.numbers[i]=t.numbers[t.l-lfloat+i];}
		return m;
	}
	void cint(vlongint m){this->t=m;this->lfloat=0;}
	void cfloat(vlongint m)
	{
		if(!lfloat)
		{
			if(m.l+t.l>=length){m.l-=m.l+t.l-length-2;}
			t.add(m);
			lfloat=m.l;
		}
	}
	void power10(int n)
	{
		if(lfloat)
		{
			vlongint k=this->pint();
			vlongint f=this->pfloat();
			k.power10(n);
			this->cint(k);
			this->cfloat(f);

		}
		else this->t.power10(n);
	}

	void addzf(int n){this->t.power10(n);lfloat+=n;}
	void delz()
	{
		int i=t.l;
		int n=0;
		while((t.numbers[i]==0)&&(lfloat))
		{
			t.delete2(1);
			lfloat--;i--;
		}
		
	}
	void setfloat(int n)
	{
		if(lfloat>n)
		{
			t.l-=lfloat-n;
			lfloat=n;
		}
		if(lfloat<n)
		{		
			
				t.power10(n-lfloat);
				lfloat=n;
		}
	}
	void zero(){natural=true;lfloat=0;t.zero();}
	void one(){zero();t.numbers[1]=1;}	
	void delzf()
	{
		int i=1;
		int l=t.l;
		while(t.numbers[i]==0){t.deletefirst();}
		for(int i=t.l+1;i<=l;i++){t.numbers[i]=0;}
	}
	System::String^ tostring()
	{
		System::String^ s="";System::String^ s2="";
		System::String^ c=".";
		this->delz();
		if(!this->natural){s2="-";}
		s=vlonginttostr(this->t);
		int i=s->Length;int j=i;
		if(this->lfloat)
		{
			if(this->lfloat<i)
			{
				s=s->Insert(j-1-this->lfloat+1,c);
			}
			else
			{
				s="0.";
				for(int i=0;i<this->lfloat-j;i++){s=s+"0";}
				s+=vlonginttostr(this->t);
			}
		}
		s=s2+s;
		return s;
	}

	int toint()
	{
		int i=System::Convert::ToInt32(this->tostring());
		return i;
	}
	double todouble()
	{
		double f;
		this->setfloat(4);
		long int i=this->toint();
		f=i*1.0;
		for(int j=1;j<=4;j++){f/=10;}
		return f;
	}
};
void equal(vlongfloat &v1,vlongfloat &v2)
{
	int l1=v1.lfloat;
	int l2=v2.lfloat;
	int l=max(l1,l2);
	v1.setfloat(l);
	v2.setfloat(l);

}
vlongfloat Sumf(vlongfloat v1,vlongfloat v2)
{
	vlongfloat v0;
	v0.zero();
	if(v1==v2)
	{
		if(v1==v0){return v0;}
	}
	if(v1==v0){return v2;}
	if(v2==v0){return v1;}
	int l=max(v1.lfloat,v2.lfloat);
	equal(v1,v2);
	vlongfloat m;
	vlongint t,t1,t2;
	t1=v1.t;t2=v2.t;
	if(v1.natural&&v2.natural)
	{
		m.t=Sum(t1,t2);
	}
	else if(v1.natural)
	{
		if(t1>t2)
		{
			m.t=Dif(t1,t2);
			m.natural=true;
		}
		if(t1==t2)
		{
			m.t.zero();
			m.natural=true;
		}
		if(t1<t2)
		{
			m.t=Dif(t2,t1);
			m.natural=false;
		}
	}
	else if(v2.natural)
	{
		if(t1<t2)
		{
			m.t=Dif(t2,t1);
			m.natural=true;
		}
		if(t1==t2)
		{
			m.t.zero();
			m.natural=true;
		}
		if(t1>t2)
		{
			m.t=Dif(t1,t2);
			m.natural=false;
		}
	}
	else{m.t=Sum(t1,t2);m.natural=false;}
	m.lfloat=l;
	deletezero(m.t);
	if(m.t.l==m.lfloat){m.t.addz(1);}
	return m;
}

vlongfloat strtolf(System::String^ s)
{
	if(s==""||s=="0"){vlongfloat v;v.t.zero();return v;}
	vlongfloat v;
	vlongint k;
	System::String^ c;
	c=s;
	int i=0;
	v.natural=true;
	int m=c->Length;
	if(c[0]=='-'){v.natural=false;c=c->Remove(0,1);}
	while(c[i]=='0'&&!(c[i]=='.')){c=c->Remove(0,1);}
	i=0;
	while((i<c->Length)&&(c[i]!='.')){i++;}
	if(i==c->Length){v.lfloat=0;}
	else
	{
		c=c->Remove(i,1);
		v.lfloat=c->Length-i;
	}
		
		v.t=strtovlongint(c);
		v.delz();
		return v;
 
	
}

vlongfloat Multif(vlongfloat v1,vlongfloat v2)
{
	if(v1==0||v2==0){vlongfloat v;v.zero();return v;}
	vlongfloat v;
	int l=max(v1.lfloat,v2.lfloat);
	equal(v1,v2);
	vlongint t,t1,t2;
	t1=v1.t;t2=v2.t;
	v.t=Multi2(t1,t2);
	v.lfloat=l+l;
	v.delz();
	v.setfloat(100);
	if(v1.natural==v2.natural){v.natural=true;}else{v.natural=false;}
	return v;
}
vlongfloat Dif(vlongfloat v1,vlongfloat v2)
{
	int l=max(v1.lfloat,v2.lfloat);
	equal(v1,v2);
	vlongfloat m;
	vlongint t,t1,t2;
	if(v1==v2){vlongfloat v;v.zero();return v;}
	v2.natural=!v2.natural;
	m=Sumf(v1,v2);
	m.lfloat=l;
	deletezero(m.t);
	if(m.t.l==m.lfloat){m.t.addz(1);}
	return m;
}

vlongfloat Div(vlongfloat v1,vlongfloat v2)
{
	vlongfloat v0;v0.zero();
	if(v1==v0){return v0;}
	if(!(v2==v0))
	{
		v1.setfloat(flength+v2.lfloat);
		vlongint t,t1,t2;
		t1=v1.t;t2=v2.t;
		t=Div(t1,t2);
		vlongfloat v;
		v.t=t;
		v.lfloat=flength;
		if(v.lfloat==v.t.l){v.t.addfirst(0);}
		v.delz();
		if(v1.natural==v2.natural){v.natural=true;}else{v.natural=false;}
		return v;
	}
}
bool vlongfloat::operator <(vlongfloat v2)
{
		vlongfloat v3=*this;
		equal(v2,v3);
		if(v3.natural&&v2.natural){return (v3.t<v2.t);}
		if(!v3.natural&&v2.natural){return true;}
		if(v3.natural&&!v2.natural){return false;}
		if(!(v3.natural&&v2.natural)){return (v2.t<v3.t);}
}

bool vlongfloat::operator >(vlongfloat v2)
{
	vlongfloat v3=*this;
	equal(v2,v3);
	if(v3.natural&&v2.natural){return (v3.t>v2.t);}
	if(!v3.natural&&v2.natural){return false;}
	if(v3.natural&&!v2.natural){return true;}
	if(!(v3.natural&&v2.natural)){return (v2.t>v3.t);}
}
bool vlongfloat::operator ==(vlongfloat v2)
{
	vlongfloat v3=*this;
	equal(v2,v3);
	if(v3.natural==v2.natural){return (v3.t==v2.t);}
	else{return false;}
}
bool vlongfloat::operator ==(int n)
{
	return (*this==strtolf(n.ToString()));
}
void Delz(System::String^ &s)
{
	int i=0;
	while(i<s->Length-1&&s[i]!=','){i++;}
	if(i<s->Length-1){s=s->Remove(i,1);s=s->Insert(i,".");}
	
}
vlongfloat vlongfloat::operator +(vlongfloat t)
{
	return Sumf(*this,t);
}
vlongfloat vlongfloat::operator +(int n)
{
	vlongfloat v=strtolf(n.ToString());
	v.lfloat=0;
	return (*this+v);
}
vlongfloat vlongfloat::operator +(double n)
{
	System::String^s=n.ToString();
	Delz(s);
	vlongfloat v=strtolf(s);
	return (*this+v);
}
vlongfloat vlongfloat::operator -(vlongfloat t)
{
	return Dif(*this,t);
}
vlongfloat vlongfloat::operator -(int n)
{
	vlongfloat v=strtolf(n.ToString());
	v.lfloat=0;
	return (*this-v);
}
vlongfloat vlongfloat::operator -(double n)
{
	System::String^s=n.ToString();
	Delz(s);
	vlongfloat v=strtolf(s);
	return (*this-v);
}
vlongfloat vlongfloat::operator *(vlongfloat t)
{
	return Multif(*this,t);
}
vlongfloat vlongfloat::operator *(int n)
{
	vlongfloat v=strtolf(n.ToString());
	v.lfloat=0;
	return (*this*v);
}
vlongfloat vlongfloat::operator *(double n)
{
	System::String^s=n.ToString();
	Delz(s);
	vlongfloat v=strtolf(s);
	return (*this*v);
}
vlongfloat vlongfloat::operator /(vlongfloat t)
{
	return Div(*this,t);
}
vlongfloat vlongfloat::operator /(int n)
{
	vlongfloat v=strtolf(n.ToString());
	v.lfloat=0;
	v=*this/v;
	return (v);
}
vlongfloat vlongfloat::operator /(double n)
{
	System::String^s=n.ToString();
	Delz(s);
	vlongfloat v=strtolf(s);
	return (*this/v);
}


vlongfloat div1(vlongfloat v)
{
	vlongfloat v2;
	v2.t.l=flength+1;
	v2.one();
	v2.setfloat(flength);
	v2=v2/v;
	v2.delz();
	return v2;
}
vlongfloat Pi(int n)
{
	vlongfloat v,v1,vn;
	v.zero();
	v1.one();
	int k=1;
	for(int i=1;i<=n;i+=2)
	{
		vn=v1/i;
		if(k>0){v=v+vn;}else{v=v-vn;}
		k=1-k;
	}
	return v*4;
}
vlongfloat Power(vlongfloat v1,int n)
{
	vlongfloat v;
	v.one();
	for(int i=1;i<=n;i++)
	{
		v=v*v1;
		if(v.lfloat>60)
		v.setfloat(80);
	}
	return v;
}

vlongfloat exp(vlongfloat v)
{
	int n=40;
	vlongfloat v2=(v/(n*n))+1;
	v.setfloat(80);
	v2=Power(v2,n);
	v2=Power(v2,n);
	v2.setfloat(80);
	return(v2);
}

vlongfloat ln(vlongfloat v1)
{
	vlongfloat v,vln,v11;
	int n=0;
	v11.one();
	v.zero();
	if(v1==v11){return v;}
	vln=strtolf("2.302585092994");
	while(v1.t.l>v1.lfloat)
	{
		v1=v1/10;
		v1.delzf();
		n++;
	}
	double f=v1.todouble();
	f=System::Math::Log(f);
	v=vln*n;
	v=v+f;
	if(v1.natural){return v;}
}

vlongfloat Power(vlongfloat v1,vlongfloat v2)
{
	if(v2.lfloat==0&&v2.t.l<5)
	{
		return Power(v1,v2.toint());
	}
	vlongfloat v=ln(v1);
	v=v*v2;
	v.setfloat(80);
	return exp(v);
}



vlongfloat lnf(vlongfloat v1)
{
	double f=v1.todouble();
	f=System::Math::Log(f);
	System::String^s=f.ToString();
	Delz(s);
	return strtolf(s);
}


vlongfloat sqroot(vlongfloat v1)
{
	vlongfloat v2;
	v2.one();
	v2=v2/2;
	return Power(v1,v2);
}