class Fraction{
    int num;
    int den;
    public:
        Fraction(){

        }

        Fraction(int num,int den){
            this->num = num;
            this->den = den;
        }
        int getNum() const { // we write const infront of this line becase it only reads the value
            return num;      //not changing it; or it doesnt not make chnages to any property of num and den
        }
        int getDen() const {
            return den;
        }
        void setNum(int n) {
            num = n;
        }
        void setDen(int d){
            den =d;
        }
        void print() const{
            cout<< this->num<<"/"<<den<<endl;
        }

        void simplify(){
            int gcd = 1;
            int j = min(this->num , this-> den);
            for(int i = 1;i<=j ; i++)
                if(this->num % i == 0 && this-> den % i == 0)
                    gcd = i;
            this->num = this->num/gcd;
            this->den = this->den/gcd;
        }

        void add(Fraction const &f2){
            int lcm = den * f2.den;
            int x = lcm/den;
            int y = lcm/f2.den;

            int numerator = x*num + (y*f2.num);

            num = numerator;
            den = lcm;
            simplify();
        }

        void multiply(Fraction const &f2 ){
            num = num * f2.num;
            den = den * f2.den;

            simplify();
        }
};