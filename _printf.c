#include "main.h"

int _printf(const char *format, ...)
{
	int i = 0;
	int o;
	char *string_char;
	va_list character;
	int counter = 0;

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
			_printchar(va_arg(character, int));
		}


		else if (format[i] == 's')
			{
				o = 0;

				string_char = va_arg(character, char *);
				if (string_char == NULL)
				{
					return (i);
				}
				counter = 0;

				while (string_char[o] != '\0')
				{

					_printchar(string_char[o]);
					o++;
					counter++;
				}
				i += counter - 1;

			}

		else if (format[i] == '%')
			{
				_printchar(format[i]);
			}
	}

		else

		{
			_printchar(format[i]);

		}

		i++;

	}

	va_end(character);

return (i);
}
