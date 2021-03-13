/*
#include <stdio.h>

char* ft_strstr(char* str, char* to_find)
{	
	if (*to_find == 0)  // tofind에 아무값이 없을때 예외처리안해주면, str[i] == to_find[i]의 조건이 맞을 일이 없으니, 최종적으로 아무값도 안나오게된다
						// 예외처리 꼭 해야함.
		return str; 

	while (*str != 0)
	{
		int i = 0;
		//while ((str + i)[0] == to_find[i])
		while (str[i] == to_find[i])  // 지금 우리가 비교 할 것은 str의 0번에서  to_find의 갯수만큼의 인덱스가 있느냐? 없다면
		{		//str 1번인덱스에서 to_find갯수만큼이 있느냐? 를 계속 돌리는거다. 그러니 str은 find 조건이 해당안되면 1씩 늘어나야되고
				//조건이 맞다면 그 해당내에서 find와 같이 +1씩 늘어나야함. 이러면 i,j를 선언해서 
					//		while (str[i + j]  == to_find[j]) j++;  처럼해야겠지만, 그건 코드가 더러워보인다. 그래서 이렇게 짰다. 
		
			//if (to_find[i + 1] == 0)   // 여기서 +1을 아낳고 to_find[i] == 0 이라고하면 어떻게 되냐면 str=123, to_find =2일때
			//	return str;					// 2,2서로 맞아서 와일들어옴. 근데 파인드가 당연히 널이 아니므로 다음 while로 넘어감.
										//근데 다음 와일에서는 str과 to_find가 다르니, 와일안으로 못들어옴
										//그렇기때문에 +1을 해서 확인을 하는것임. 와일에 애초에 못들어오니까.
				
			i++;
		}
		if (to_find[i] == 0)    // 맨처음에 find가 값이 없는지 확인하고 아닐경우만 반복문을 돌렸기에 i = 0일때 이조건이 참일수가없다.
			return str;			// 이렇게 하면 위에처럼 to_find[i +1] ==0 으로 조건 검사를 안해도 풀수있다. 와일을 빠져나와도 상관없는거니까 와일밖이니까
		str++;
	}
	return str;
}

int main()
{
	char str[100] = "0123456789";
	char to_find[20] = "45";


	printf("%s\n", ft_strstr(str, to_find));

	
	return 0;
}
*/