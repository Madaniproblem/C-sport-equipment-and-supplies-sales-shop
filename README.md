# Description 
The program describe the sales flow in a store
1. In the program there is identity registration,list items,items discount if user is student and also user can choosing items category.
2. Transaction in the program counted from final price that user already bought
3. User can argue about the shop service.Is the user satisfied or not satisfied ?
# void Puas()
{
	//decision Puas
	cout<<"|===============================================|"<<endl;
	cout<<" Apakah anda puas belanja di toko kami : ";
	cin>>puas;
	
    if(puas=='I'||puas=='i') {
    	
    	cout<<"|===============================================|"<<endl;
		cout<<"|  Terimakasih telah berbelanja di toko kami    |"<<endl;
		cout<<"|===============================================|"<<endl;
	}
	else 
	if(puas=='T'||puas=='t') {
		
		cout<<"|===============================================|"<<endl;
		cout<<"|   Mohon maaf bila layanan Toko kami kurang    |"<<endl;
		cout<<"|===============================================|"<<endl;
    } 
}
