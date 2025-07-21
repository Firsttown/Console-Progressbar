#include "progressbar.h"
void Draw_ProgressBar(int progress, int total, int bar_width, std::string mm)
{
    float percent = static_cast<float>(progress) / total;
    int filled_width = static_cast<int>(bar_width * percent);
    std::string bar = "\r[";
    bar += std::string(filled_width, '#');
    bar += std::string(bar_width - filled_width, ' ');
    bar += "] ";
    bar += std:to_string(static_cast<int>(percent * 100)) + "% ";
    bar += mm;
    std::cout << bar << flush;
}
