// 1. console.log("JavaScript".substring(4, 2));
// Script
// va
// Java
// ""
// 2. console.log("hello".charAt(10));
// undefined
// ""
// null
// h
// 3. console.log("JS".repeat(2.5));
// JSJS
// JSJSJS
// Error
// JS
// 4. console.log("abc".padStart(5, "0"));
// 00abc
// abc00
// 000abc
// abc
// 5. console.log("abc".padEnd(2, "0"));
// abc
// ab
// abc0
// Error
// 6. console.log("hello".includes(""));
// false
// true
// Error
// undefined
// 7. console.log("abc".indexOf("b", 2));
// 1
// 2
// -1
// 0
// 8. console.log("aaa".replace("a", "b"));
// bbb
// baa
// abb
// aaa
// 9. console.log("aaa".replaceAll("a", "b"));
// bbb
// baa
// abb
// aaa
// 10. console.log(" hi ".trimStart().length);
// 2
// 3
// 4
// 5
// 11. console.log("abc".slice(-2));
// ab
// bc
// c
// ""
// 12. console.log("abc".substr(1, 1));
// b
// bc
// c
// Error
// 13. console.log("abc".substring(1, 1));
// a
// b
// ""
// Error
// 14. console.log("5" + 1 + 2);
// 8
// 512
// 62
// 51
// 15. console.log(1 + 2 + "5");
// 35
// 125
// 3
// 15
// 16. console.log("abc".charCodeAt(0));
// 65
// 97
// 48
// 0
// 17. console.log(String.fromCharCode(97));
// A
// a
// 97
// Error
// 18. console.log("abc".toUpperCase().toLowerCase());
// ABC
// abc
// Abc
// Error
// 19. console.log("abc".localeCompare("abd"));
// 0
// 1
// -1
// true
// 20. console.log("abc".startsWith("a", 1));
// true
// false
// Error
// undefined
// 21. console.log("abc".endsWith("b", 2));
// true
// false
// Error
// undefined
// 22. console.log("a,b,c".split(",", 2));
// ["a","b","c"]
// ["a","b"]
// ["a"]
// []
// 23. console.log(["a","b","c"].join());
// abc
// a,b,c
// a b c
// Error
// 24. console.log("abc".search("b"));
// 1
// true
// -1
// Error
// 25. console.log("abc".match(/d/));
// []
// null
// undefined
// [""]
// 26. console.log([1,2,3].push(4));
// [1,2,3,4]
// 4
// 3
// undefined
// 27. console.log([1,2,3].pop());
// [1,2]
// 3
// undefined
// Error
// 28. console.log([1,2,3].shift());
// 1
// 3
// [2,3]
// undefined
// 29. console.log([1,2,3].unshift(0));
// [0,1,2,3]
// 4
// 3
// undefined
// 30. console.log([1,2,3].slice(1));
// [1]
// [2,3]
// [1,2]
// 2
// 31. console.log([1,2,3].splice(1,1));
// [2]
// [1,3]
// 2
// [1,2,3]
// 32. let a=[1,2,3]; a.splice(1,1); console.log(a);
// [1,2,3]
// [1,3]
// [2]
// [1]
// 33. console.log([1,2].concat([3,4]));
// [1,2,3,4]
// [[1,2],[3,4]]
// [3,4]
// Error
// 34. console.log([1,2,3].indexOf(2));
// 1
// 2
// 0
// -1
// 35. console.log([1,2,3].includes(4));
// true
// false
// 0
// undefined
// 36. console.log([1,2,3].find(x=>x>1));
// 1
// 2
// 3
// true
// 37. console.log([1,2,3].findIndex(x=>x>2));
// 1
// 2
// 3
// -1
// 38. console.log([1,2,3].map(x=>x*2));
// [2,4,6]
// [1,2,3]
// [2,2,2]
// undefined
// 39. console.log([1,2,3].filter(x=>x>1));
// [1]
// [2,3]
// [3]
// true
// 40. console.log([1,2,3].reduce((a,b)=>a+b));
// 6
// 5
// 3
// NaN
// 41. console.log([1,2,3].every(x=>x>0));
// true
// false
// 3
// undefined
// 42. console.log([1,2,3].some(x=>x>2));
// true
// false
// 2
// undefined
// 43. console.log([1,2,3].reverse());
// [3,2,1]
// [1,2,3]
// undefined
// Error
// 44. console.log([3,1,2].sort());
// [1,2,3]
// [3,2,1]
// [3,1,2]
// Error
// 45. console.log([10,2,1].sort());
// [1,2,10]
// [10,2,1]
// [1,10,2]
// Error
// 46. console.log(Array.isArray([]));
// true
// false
// undefined
// Error
// 47. console.log(Array.from("abc"));
// ["abc"]
// ["a","b","c"]
// []
// Error
// 48. console.log([1,2,3].toString());
// "1,2,3"
// [1,2,3]
// "123"
// Error
// 49. console.log([1,[2,3]].flat());
// [1,2,3]
// [1,[2,3]]
// [2,3]
// Error
// 50. console.log([1,2,3].at(-1));
// 1
// 2
// 3
// undefined
// 51. console.log(typeof NaN);
// NaN
// number
// undefined
// object
// 52. Which is block scoped?
// var
// let
// const
// let & const
// 53. console.log(5 + "5");
// 10
// 55
// "10"
// NaN
// 54. Strict equality operator:
// ==
// ===
// !=
// =
// 55. Falsy value:
// "0"
// 0
// "false"
// []
// 56. Loop runs at least once:
// while
// do-while
// for
// for-in
// 57. console.log(Boolean(""));
// true
// false
// ""
// undefined
// 58. console.log(2 ** 3);
// 6
// 8
// 9
// 5
// 59. typeof null →
// null
// object
// undefined
// number
// 60. Which is NOT primitive?
// string
// number
// object
// boolean
// 61. var scope:
// block
// function
// global only
// module
// 62. console.log("5" - 2);
// 3
// "3"
// NaN
// 52
// 63. Switch uses comparison:
// ==
// ===
// !=
// =
// 64. Which stops loop:
// break
// continue
// return
// exit
// 65. console.log(0 == false);
// true
// false
// NaN
// error
// 66. console.log(0 === false);
// true
// false
// NaN
// error
// 67. console.log(typeof []);
// array
// object
// list
// undefined
// 68. Infinite loop:
// for(;;)
// while(false)
// do{}while(false)
// for(let i=0;i<0;i++)
// 69. console.log(+"5");
// "5"
// 5
// NaN
// undefined
// 70. Nullish operator:
// ||
// ??
// &&
// ?:
// 71. console.log(1 && 0);
// 1
// 0
// true
// false
// 72. console.log(1 || 0);
// 1
// 0
// true
// false
// 73. console.log(!1);
// true
// false
// 0
// NaN
// 74. Which iterates values:
// for…in
// for…of
// forEach
// map
// 75. Which iterates keys:
// for…in
// for…of
// map
// filter
// 76. console.log(parseInt("10px"));
// 10
// NaN
// 0
// undefined
// 77. console.log(Math.floor(4.9));
// 4
// 5
// 4.9
// 5.1
// 78. console.log(Math.ceil(4.1));
// 4
// 5
// 4.1
// 5.9
// 79. console.log(isNaN("abc"));
// true
// false
// NaN
// error
// 80. console.log(typeof undefined);
// undefined
// object
// null
// number
// 81. console.log(5 % 2);
// 1
// 2
// 0
// 5
// 82. console.log(!!"hello");
// true
// false
// "hello"
// NaN
// 83. console.log(1 < 2 < 3);
// true
// false
// NaN
// error
// 84. console.log(3 > 2 > 1);
// true
// false
// NaN
// error
// 85. console.log(true + true);
// 2
// 1
// true
// NaN
// 86. console.log("5" * 2);
// 10
// NaN
// 52
// 7
// 87. console.log(5 + null);
// 5
// null
// NaN
// undefined
// 88. console.log(5 + undefined);
// NaN
// 5
// undefined
// error
// 89. console.log(null == undefined);
// true
// false
// NaN
// error
// 90. console.log(null === undefined);
// true
// false
// NaN
// error
// 91. console.log(typeof function(){});
// function
// object
// callable
// undefined
// 92. console.log(1 ? "yes" : "no");
// yes
// no
// 1
// true
// 93. console.log("" ? "yes" : "no");
// yes
// no
// ""
// false
// 94. console.log(0 || "hello");
// 0
// hello
// false
// undefined
// 95. console.log(0 && "hello");
// 0
// hello
// false
// undefined
// 96. console.log("5" == 5);
// true
// false
// NaN
// error
// 97. console.log("5" === 5);
// true
// false
// NaN
// error
// 98. console.log([1,2] + [3,4]);
// "1,23,4"
// [1,2,3,4]
// 10
// NaN
// 99. console.log(typeof Infinity);
// number
// infinity
// object
// undefined
// 100. console.log(0.1 + 0.2 == 0.3);
// true
// false
// NaN
// error