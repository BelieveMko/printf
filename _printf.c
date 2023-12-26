#include "main.h"

int _printf(const char *format, ...)
{
	int i = 0;
	int o;
	char *string_char;
	va_list character;
	int counter = 0;

	va_start(character, format);

	while (format[i] != '\0')
	{
	if (format[i] == '%')
	{
		i++;

		if (format[i] == 'c')
		{
			_printchar(va_arg(character, int));
		}


			if (format[i] == 's')
			{
				o = 0;

				string_char = va_arg(character, char *);

				counter = 0;

				while (string_char[o] != '\0')
				{

					_printchar(string_char[o]);
					o++;
					counter++;
				}
				i += counter - 1;

			}

			if (format[i] == '%')
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

