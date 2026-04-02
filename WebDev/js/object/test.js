// Call back Hell

function first(callback){
    callback();
}
function second(callback){
    callback();
}
function third(callback){
    callback();
}

first(function (){
    second(function (){
        third(function() {
            console.log("hello world");
            
        });
    });
});



// Promise 

let a = new Promise((resolve,rject) => {
    let b = true;

    if(b){
        resolve("scuccesfully run");
    }
    else{
        reject("failed");
    }
});

a.then((res) => console.log(res))
.catch((rej) => console.log(rej))
.finally(() => console.log("Finished"));


// Async or Await

async function fetcData(){
    try{
        let response = await fetch("urlsad/.http");
        let data = await response.JSON();
        console.log(data);
    }
    catch (error){
        console.log("error",error);
        
    }
}
fetcData();
