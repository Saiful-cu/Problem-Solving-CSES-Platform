function solve(){
    let n, result;

    const prompt = require('prompt-sync')();

    n= parseInt(prompt());
    result = (n*(n+1))/2;

    if(result %2 !=0){
        console.log("NO");
    }
    else{
        console.log("YES");
        let arr = [];
        let arr1 = [];
        let half1 =0, half2 =0, j=0, k=0;
        
        for(let i=n;i>0;i--){
            if(half1 +1 <= result/2){
                arr[j] = parseInt(i);
                half1 +=i;
                j++;
            }
            else if(half2 + i <= result/2){
                arr1[k] = i;
                half2  += i;
                k++;
            }
        }
        if(j<k){
            console.log(k);
            for(let i=0;i<k;i++){
                process.stdout.write(arr[i]+ " ");
            }
            console.log();
            console.log(j);
            for(let i=0;i<j;i++){
                process.stdout.write(arr[i]+ ' ');
            }
        }
        else{
                console.log(k);
                for(let i=0;i<j;i++){
                    process.stdout.write(arr1[i]+ " ");
                }
                console.log();
                console.log(j);
                for(let i=0;i<k;i++){
                    process.stdout.write(arr1[i]+ ' ');
                }
                console.log();
            
        }
    }
    
}


// Main Function 

solve();