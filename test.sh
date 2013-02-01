#test
echo $0
until [ $# -eq 0 ]
do
	echo "第一个参数为: $1 参数个数为: $#"
	shift
done
num=3
let num2="$num+3";
echo $num2
