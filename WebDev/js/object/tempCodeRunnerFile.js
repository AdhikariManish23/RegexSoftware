
let obj = {
    name:"manish"
}
Object.preventExtensions(obj)
console.log(Object.isExtensible(obj));