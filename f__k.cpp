    public:
    void get()
    {
        cin>>lb>>ub;
    }

};
class der_prime:public find_
{
    private:
    int count=0,e;
    vector<int> v;
    int n,r,large=0;
    string str;
    int *co;
    public:
    
    void detect_prime()
        {
        
        for(int i=lb;i<=ub;i++)

             {

             for(int j=2;j<i;j++)

                {

                    if(i%j==0)

                        {

                        count=0;break; 

                        }
                    
                    count=1;
                }
            
            if(count==1)
               {

                v.push_back(i);    

               }
         
            }
        
        
        }
    
    void print_()
    {
        
            
        for(int i=0;i<v.size();i++)

            {

             n=v[i];
              
                     while(n)

                    {
                      r=n%10;

                      str.push_back('0'+r);

                      n/=10;

                     }

            }
          
        co=(int *)calloc(300,sizeof(int));
       

             for(int i=0;i<str.length();i++)
                {

                co[str[i]]++;    

                }
            
             for(int i=0;i<300;i++)

               {

                   if(co[i]>=large)

                       {

                        large=co[i];

                         e=i-48;

                       }

               }
        
            cout<<e<<endl<<large;
        
    }
    
    
};

