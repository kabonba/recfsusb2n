// Channel conversion table
// For BS/CS setting, refer to
// http://www5e.biglobe.ne.jp/~kazu_f/digital-sat/index.html
//

typedef struct _Channel_conv_table {
    char *channel;
    int freq;		// frequency no.
    int tsid;		// TS ID
    int sid;		// service ID
} Channel_conv_table;

Channel_conv_table channel_table[] = {
    {"BS01_0", 101, 16400, 151},  /* BS���� */
    {"BS01_1", 101, 16401, 161},  /* BS-TBS */
    {"BS03_0", 103, 16432, 191},  /* WOWOW�v���C�� */
    {"BS03_1", 103, 16433, 171},  /* BS�W���p�� */
    {"BS05_0", 105, 17488, 192},  /* WOWOW���C�u */
    {"BS05_1", 105, 17489, 193},  /* WOWOW�V�l�} */
    {"BS07_0", 107, 17520, 201},  /* �X�^�[�E�`�����l��2 */
    {"BS07_1", 107, 18033, 236},  /* BS�A�j�}�b�N�X */
    {"BS07_2", 107, 18034, 256},  /* �f�B�Y�j�[�E�`�����l�� */
    {"BS07_3", 107, 17520, 202},  /* �X�^�[�E�`�����l��3 */
    {"BS09_0", 109, 16528, 211},  /* BS11 */
    {"BS09_1", 109, 16529, 200},  /* �X�^�[�E�`�����l��1 */
    {"BS09_2", 109, 16530, 222},  /* TwellV */
    {"BS11_0", 111, 18096, 238},  /* FOX bs238 */
    {"BS11_1", 111, 18097, 241},  /* BS�X�J�p�[�I */
    {"BS11_2", 111, 18098, 231},  /* ������wBS1 */
    {"BS11_3", 111, 18098, 232},  /* ������wBS2 */
    {"BS11_4", 111, 18098, 233},  /* ������wBS3 */
    {"BS13_0", 113, 16592, 141},  /* BS���e�� */
    {"BS13_1", 113, 16593, 181},  /* BS�t�W */
    {"BS15_0", 115, 16625, 101},  /* NHK BS1 */
    {"BS15_1", 115, 16626, 103},  /* NHK BS�v���~�A�� */
    {"BS19_0", 119, 18224, 234},  /* �O���[���`�����l�� */
    {"BS19_1", 119, 18225, 242},  /* J SPORTS 1 */
    {"BS19_2", 119, 18226, 243},  /* J SPORTS 2 */
    {"BS21_0", 121, 18256, 252},  /* IMAGICA BS */
    {"BS21_1", 121, 18257, 244},  /* J SPORTS 3 */
    {"BS21_2", 121, 18258, 245},  /* J SPORTS 4 */
    {"BS23_0", 123, 18288, 251},  /* BS�ނ�r�W���� */
    {"BS23_1", 123, 18259, 255},  /* ���{�f����`�����l�� */
    {"BS23_2", 123, 18290, 258},  /* D-Life */

    {"CS02_0", 202, 24608, 296},  /* TBS�`�����l��1 */
    {"CS02_1", 202, 24608, 298},  /* �e�����`�����l��1 */
    {"CS02_2", 202, 24608, 299},  /* �e�����`�����l��2 */
    {"CS04_0", 204, 28736, 100},  /* �X�J�p�[�I�v���� */
    {"CS04_1", 204, 28736, 223},  /* �f��E�`�����l��NECO */
    {"CS04_2", 204, 28736, 227},  /* �U�E�V�l�} */
    {"CS04_3", 204, 28736, 250},  /* �X�J�CA */
    {"CS04_4", 204, 28736, 342},  /* �q�X�g���[�`�����l�� */
    {"CS04_5", 204, 28736, 363},  /* �͌�E�����`�����l�� */
    {"CS06_0", 206, 28768, 294},  /* �z�[���h���}�`�����l�� */
    {"CS06_1", 206, 28768, 323},  /* MTV HD */
    {"CS06_2", 206, 28768, 329},  /* �̗w�|�b�v�X�`�����l�� */
    {"CS06_3", 206, 28768, 340},  /* �f�B�X�J�o���[�`�����l�� */
    {"CS06_4", 206, 28768, 341},  /* �A�j�}���v���l�b�g */
    {"CS06_5", 206, 28768, 354},  /* CNNj */
    {"CS08_0", 208, 24704, 055},  /* �V���b�v �`�����l�� */
    {"CS08_1", 208, 24704, 218},  /* ���f�`�����l�� */
    {"CS08_2", 208, 24704, 219},  /* �q������ */
    {"CS08_3", 208, 24704, 326},  /* �~���[�W�b�N�E�G�A */
    {"CS08_4", 208, 24704, 339},  /* �f�B�Y�j�[�W���j�A */
    {"CS08_5", 208, 24704, 349},  /* ���e��NEWS24 */
    {"CS10_0", 210, 24736, 800},  /* �X�J�`����0 */
    {"CS10_1", 210, 24736, 801},  /* �X�J�`����1 */
    {"CS10_2", 210, 24736, 802},  /* �X�J�`����2 */
    {"CS10_3", 210, 24736, 805},  /* �X�J�`����3 */
    {"CS12_0", 212, 28864, 254},  /* GAORA */
    {"CS12_1", 212, 28864, 325},  /* MUSIC ON! TV�i�G���I���I�jHD */
    {"CS12_2", 212, 28864, 330},  /* �L�b�Y�X�e�[�V���� */
    {"CS14_0", 214, 28896, 292},  /* ���㌀���`�����l��HD H */
    {"CS14_1", 214, 28896, 293},  /* �t�@�~���[����HD */
    {"CS14_2", 214, 28896, 310},  /* �X�[�p�[�I�h���}TV HD */
    {"CS16_0", 216, 28928, 290},  /* TAKARAZUKA SKY STAGE */
    {"CS16_1", 216, 28928, 305},  /* �`�����l����� */
    {"CS16_2", 216, 28928, 311},  /* AXN */
    {"CS16_3", 216, 28928, 333},  /* �A�j���V�A�^�[X (AT-X) */
    {"CS16_4", 216, 28928, 343},  /* �i�V���i�� �W�I�O���t�B�b�N */
    {"CS16_5", 216, 28928, 353},  /* BBC���[���h�j���[�X */
    {"CS18_0", 218, 28960, 240},  /* ���[�r�[�v���XHD  */
    {"CS18_1", 218, 28960, 262},  /* �S���t�l�b�g���[�NHD  */
    {"CS18_2", 218, 28960, 314},  /* �����`�����l����LaLa TV */
    {"CS20_0", 220, 28992, 307},  /* �t�W�e���rONE */
    {"CS20_1", 220, 28992, 308},  /* �t�W�e���rTWO */
    {"CS20_2", 220, 28992, 309},  /* �t�W�e���rNEXT */
    {"CS22_0", 222, 29024, 161},  /* QVC */
    {"CS22_1", 222, 29024, 297},  /* TBS�`�����l��2 */
    {"CS22_2", 222, 29024, 312},  /* TBS�j���[�X�o�[�h */
    {"CS22_3", 222, 29024, 322},  /* FOX */
    {"CS22_4", 222, 29024, 331},  /* �X�y�[�X�V�����[TV */
    {"CS22_5", 222, 29024, 351},  /* �J�[�g�D�[�� �l�b�g���[�N */
    {"CS24_0", 224, 29056, 257},  /* ���e���W�[�^�X */
    {"CS24_1", 224, 29056, 300},  /* ���e���v���X */
    {"CS24_2", 224, 29056, 316},  /* AXN�~�X�e���[ */
    {"CS24_3", 224, 29056, 321},  /* �X�y�[�X�V�����[TV�v���X */
    {"CS24_4", 224, 29056, 362},  /* ���`�����l�� */

    {"" , 0, 0, 0} /* terminate */
};

int channel_conv(char* channel);