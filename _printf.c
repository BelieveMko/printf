#include "main.h"

int _printf(const char *format, ...)
{
	int i = 0;
	int ostring = 0;
	int rrr = 0;
	int sss = 0;
	int ttt = 0;
	int uuu = 0;


	char *string_char;
	va_list character;

	va_start(character, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))

		return (-1);

	while (format[i] != '\0')
	{

	if (format[i] == '%')
	{
		i++;

		if (format[i] == 'c')
			{
			rrr = rrr + _printchar(va_arg(character, int));

			}


		else if (format[i] == 's')

			{
			string_char = va_arg(character, char *);

				if (string_char == NULL)
				{
					string_char = "(null)";
				}

				while (string_char[ostring] != '\0')
				{

				sss = sss + _printchar(string_char[ostring]);
				ostring++;
				}
			}

		else if (format[i] == '%')

			{

			uuu = uuu + _printchar(format[i]);

			}
		else
			{

			}
	}

		else

		{
			ttt = ttt + _printchar(format[i]);
		}

		i++;

	}

	va_end(character);

return (rrr + sss + ttt + uuu);
}
