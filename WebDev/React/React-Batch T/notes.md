Babel is a JavaScript compiler.
Converts modern JavaScript (ES6+) and JSX into plain JavaScript that older browsers can understand.

what is JSX ?
JSX (JavaScript XML) is a syntax extension for JavaScript used in React to describe UI elements in a way that looks similar to HTML but runs inside JavaScript code. It allows developers to write HTML-like markup directly in .js or .jsx files, which is then transformed into JavaScript (via tools like Babel) that React can render into the DOM.

jsx have some rules ?
it return only single parent after return statement not retrun the sibling 
But if you want to return then used React Fragment(<> </>) react fragment will coonect ypur div directly to your main file index file body 
if you want any js in jsx cover it into currly braces {}


COMPONENT
function and class Component  version 16 we get these features on react


changes between real Dom and virtual DOm called diffing algo 
but the the complete process of comparing real DOM and Virtual DOM is called react recocialation 


JSX is where You can write both html and javascript code 
after return statement we write JSX
BEFORE return we write our logica between curly braces
JSX return single parent
if you want return multiple parent or we can say sibling we used react Fragment or we have to wrap both sibling into single parent  


Compnent ::
We can export component in Two ways one when there is only one function you have in your component there we use export default and function name and where you are importing the component you can take any name but path should be correct 
Another way is when ypu have multiple function or you want to export through name not by default then where you are importing you have to use the function name inside the curly braces and then path 


Props Drilling like nested 

state is synchornus and setState is asynchronus