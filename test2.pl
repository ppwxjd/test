#!/usr/bin/perl -w


my %hash = (1=>{1=>2, 3=>4}, 2=>[1,2,3,4,5]);

my $num = 1;
while (($key,$value) = each  %{$hash{$num}})
{
	print $key." ".$value."\n";
}

foreach (@{$hash{2}})
{
	print "$_ ";
}
print "\n";


