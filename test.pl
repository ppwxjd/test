#!/usr/bin/perl
my @array = ('1',$2,$3,$4);

if ("kate is a dog" =~ /(d.g)/)
{
	print $1."\n";
	print eval('$'.$array[0]),"\n";
}

