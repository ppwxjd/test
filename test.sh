#test
echo $0
until [ $# -eq 0 ]
do
	echo "��һ������Ϊ: $1 ��������Ϊ: $#"
	shift
done
num=3
let num2="$num+3";
echo $num2
