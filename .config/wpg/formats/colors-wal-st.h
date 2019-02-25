const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#2c2c2c", /* black   */
  [1] = "#d3d385", /* red     */
  [2] = "#fecf6b", /* green   */
  [3] = "#d3bb5b", /* yellow  */
  [4] = "#9dfeaf", /* blue    */
  [5] = "#4299df", /* magenta */
  [6] = "#fefe4a", /* cyan    */
  [7] = "#bcfafe", /* white   */

  /* 8 bright colors */
  [8]  = "#95c1fe",  /* black   */
  [9]  = "#d3d385",  /* red     */
  [10] = "#fecf6b", /* green   */
  [11] = "#d3bb5b", /* yellow  */
  [12] = "#9dfeaf", /* blue    */
  [13] = "#4299df", /* magenta */
  [14] = "#fefe4a", /* cyan    */
  [15] = "#bcfafe", /* white   */

  /* special colors */
  [256] = "#2c2c2c", /* background */
  [257] = "#bcfafe", /* foreground */
  [258] = "#bcfafe",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
