class ECE :virtual public Student
{
	protected : float marks[6];
	public:ECE()
	       {
		       cout<<"ECE Constructor:"<<endl;
		       cout<<"Enter the marks:"<<endl;
		       for(int i=0;i<6;i++)
			       cin>>marks[i];
	       }
	       void Eprint()
	       {
		       //print();
		       for(int i=0;i<6;i++)
			       cout<<marks[i]<<" ";
		       cout<<endl;
	       }
	       ~ECE()
	       {
		       cout<<"ECE Destructor:"<<endl;
	       }
};
