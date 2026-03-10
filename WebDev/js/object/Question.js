// Question : ek hdfc ka account hai jisme name, amount column  hai , jaha per withdrawl / deposite / balance check kr sakte ho 

let obj = {
    name: "xyz",
    amount : 5000,

    deposite : function(amt){
       return this.amount += amt
    },

    withdrawl : function(amt){
       return this.amount -= amt
    },
    
}


console.log(obj.deposite(500));

console.log(obj.withdrawl(1000));
