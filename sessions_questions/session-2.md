<p dir="rtl">
سوال‌های مطرح شده در کلاس‌های گریدری هفته‌ای دوم:
<br>
نکته: در حل سوال‌ها از تابع بازگشتی استفاده نکنید.
<br>
نکته: همه‌ی سوالات را در یک فایل ولی در فانکشن‌های متفاوت بنویسید.
<br>
سوال یک:
فانکشنی به اسم my_get_str بنویسید که یک آرایه‌ی کارکتری (رشته) را به عنوان پارامتر دریافت کند و رشته‌ای را از ورودی بخواند (با استفاده از getchar) و در آرایه‌ی کارکتری دریافت شده ذخیره کند.
</p>

```
#include <stdio.h>

void my_get_str(char []); /* your function declaratoin */

int main()
{
	char inp[100];
	my_get_str(inp);
	printf("%s\n", inp);
	return 0;
}

void my_get_str(char str[]) /* your function definition */
{
	/* your code goes here */
}

```

<p dir="rtl">
سوال دو:
فانکشنی به اسم my_strlen بنویسید که یک آرایه‌ی کارکتری (رشته) را به عنوان پارامتر دریافت کند و طول آن را برگرداند.
</p>

```
#include <stdio.h>

int my_strlen(char []);

int main()
{
	char inp[100];
	my_get_str(inp);
	printf("%s\n", inp);
	printf("length of string: %s\n", my_strlen(inp));
	return 0;
}

```

<p dir="rtl">
سوال سه:
فانکشنی به اسم is_palindrome بنویسید که یک آرایه‌ی کارکتری (رشته) را به عنوان پارامتر دریافت کند و مشخص کند که string دریافت شده palindrome (متفارن) است یا خیر.
<br>
مثال: a، aba، abba متقارن هستند ولی ab، abc متقارن نیستند.
<br>
نکته: 0 را به عنوان false و 1 را به عنوان true برگردانید.
</p>

```
#include <stdio.h>

int is_palindrome(char []);

int main()
{
	char inp[100];
	my_get_str(inp);
	printf("%s\n", inp);
	printf("length of string: %s\n", my_strlen(inp));
	if (is_palindrome(inp)) {
		printf("the string is a palindrome\n");
	} else {
		printf("the string is not a palindrome\n")'
	}
	return 0;
}
```

<p dir="rtl">
سوال چهار:
فانکشنی به اسم search بنویسید که دو string را به عنوان ورودی دریافت می‌کند و دومی را در اولی پیدا می‌کند.
<br>
مثال: رشته اول mohammad و رشته دوم mad پس تابع مقدار true را بر می‌گرداند یا رشته اول mohammad و رشته دوم lazy مقدار  false را بر‌می‌گرداند.
<br>
نکته: 0 را به عنوان false و 1 را به عنوان true برگردانید.
</p>


```
#include <stdio.h>

int search(char [], char []);

int main()
{
	char inp[100];
	my_get_str(inp);
	printf("%s\n", inp);
	printf("length of string: %s\n", my_strlen(inp));
	if (is_palindrome(inp)) {
		printf("the string is a palindrome\n");
	} else {
		printf("the string is not a palindrome\n")'
	}
	
	if (search(inp, "mad")) {
		printf("congratulations! Your are a mad person.");
	} else {
		printf("Sorry! Your are not a mad person.");
	}
	return 0;
}
```

<p dir="rtl">
سوال پنج:
فانکشنی به اسم delete بنویسید که دو string را به عنوان ورودی دریافت می‌کند و دومی را در اولی پاک می‌کند.
<br>
مثال: رشته اول mohammad و رشته دوم mad پس mad از string اول حذف می شود درنتیجه string اول به moham تغییر پیدا می‌کند.

</p>


```
#include <stdio.h>

void delete(char [], char []);

int main()
{
	char inp[100];
	my_get_str(inp);
	printf("%s\n", inp);
	printf("length of string: %s\n", my_strlen(inp));
	if (is_palindrome(inp)) {
		printf("the string is a palindrome\n");
	} else {
		printf("the string is not a palindrome\n")'
	}
	
	if (search(inp, "mad")) {
		printf("congratulations! Your are a mad person.");
	} else {
		printf("Sorry! Your are not a mad person.");
	}
	delete(inp, "mad")'
	return 0;
}
```


