<?php
class Test{
	
	private $my = "Brian";
	private $money = 100;
	public function __construct(){
		$my = "Brian";
	}
	public function myfun(){
		if ($this->money == 100){
			print "yes";
		 echo $this->my;
		}
		else {
			print "No";
		}
		
	}
	public function input($m ){
		$this->money = $m;
	}
	public function get(){
		return $this->money;
	}
}
?>