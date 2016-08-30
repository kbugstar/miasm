
typedef struct {
	uint32_t exception_flags;

	/* gpregs */

	uint32_t ZERO;
	uint32_t AT;
	uint32_t V0;
	uint32_t V1;
	uint32_t A0;
	uint32_t A1;
	uint32_t A2;
	uint32_t A3;
	uint32_t T0;
	uint32_t T1;
	uint32_t T2;
	uint32_t T3;
	uint32_t T4;
	uint32_t T5;
	uint32_t T6;
	uint32_t T7;
	uint32_t S0;
	uint32_t S1;
	uint32_t S2;
	uint32_t S3;
	uint32_t S4;
	uint32_t S5;
	uint32_t S6;
	uint32_t S7;
	uint32_t T8;
	uint32_t T9;
	uint32_t K0;
	uint32_t K1;
	uint32_t GP;
	uint32_t SP;
	uint32_t FP;
	uint32_t RA;
	uint32_t PC;
	uint32_t PC_FETCH;
	uint32_t R_LO;
	uint32_t R_HI;


	double F0;
	double F1;
	double F2;
	double F3;
	double F4;
	double F5;
	double F6;
	double F7;
	double F8;
	double F9;
	double F10;
	double F11;
	double F12;
	double F13;
	double F14;
	double F15;
	double F16;
	double F17;
	double F18;
	double F19;
	double F20;
	double F21;
	double F22;
	double F23;
	double F24;
	double F25;
	double F26;
	double F27;
	double F28;
	double F29;
	double F30;
	double F31;

	uint32_t INDEX;
	uint32_t CPR0_1;
	uint32_t CPR0_2;
	uint32_t CPR0_3;
	uint32_t CPR0_4;
	uint32_t CPR0_5;
	uint32_t CPR0_6;
	uint32_t CPR0_7;
	uint32_t CPR0_8;
	uint32_t CPR0_9;
	uint32_t CPR0_10;
	uint32_t CPR0_11;
	uint32_t CPR0_12;
	uint32_t CPR0_13;
	uint32_t CPR0_14;
	uint32_t CPR0_15;
	uint32_t ENTRYLO0;
	uint32_t CPR0_17;
	uint32_t CPR0_18;
	uint32_t CPR0_19;
	uint32_t CPR0_20;
	uint32_t CPR0_21;
	uint32_t CPR0_22;
	uint32_t CPR0_23;
	uint32_t ENTRYLO1;
	uint32_t CPR0_25;
	uint32_t CPR0_26;
	uint32_t CPR0_27;
	uint32_t CPR0_28;
	uint32_t CPR0_29;
	uint32_t CPR0_30;
	uint32_t CPR0_31;
	uint32_t CPR0_32;
	uint32_t CPR0_33;
	uint32_t CPR0_34;
	uint32_t CPR0_35;
	uint32_t CPR0_36;
	uint32_t CPR0_37;
	uint32_t CPR0_38;
	uint32_t CPR0_39;
	uint32_t PAGEMASK;
	uint32_t CPR0_41;
	uint32_t CPR0_42;
	uint32_t CPR0_43;
	uint32_t CPR0_44;
	uint32_t CPR0_45;
	uint32_t CPR0_46;
	uint32_t CPR0_47;
	uint32_t CPR0_48;
	uint32_t CPR0_49;
	uint32_t CPR0_50;
	uint32_t CPR0_51;
	uint32_t CPR0_52;
	uint32_t CPR0_53;
	uint32_t CPR0_54;
	uint32_t CPR0_55;
	uint32_t CPR0_56;
	uint32_t CPR0_57;
	uint32_t CPR0_58;
	uint32_t CPR0_59;
	uint32_t CPR0_60;
	uint32_t CPR0_61;
	uint32_t CPR0_62;
	uint32_t CPR0_63;
	uint32_t CPR0_64;
	uint32_t CPR0_65;
	uint32_t CPR0_66;
	uint32_t CPR0_67;
	uint32_t CPR0_68;
	uint32_t CPR0_69;
	uint32_t CPR0_70;
	uint32_t CPR0_71;
	uint32_t COUNT;
	uint32_t CPR0_73;
	uint32_t CPR0_74;
	uint32_t CPR0_75;
	uint32_t CPR0_76;
	uint32_t CPR0_77;
	uint32_t CPR0_78;
	uint32_t CPR0_79;
	uint32_t ENTRYHI;
	uint32_t CPR0_81;
	uint32_t CPR0_82;
	uint32_t CPR0_83;
	uint32_t CPR0_84;
	uint32_t CPR0_85;
	uint32_t CPR0_86;
	uint32_t CPR0_87;
	uint32_t CPR0_88;
	uint32_t CPR0_89;
	uint32_t CPR0_90;
	uint32_t CPR0_91;
	uint32_t CPR0_92;
	uint32_t CPR0_93;
	uint32_t CPR0_94;
	uint32_t CPR0_95;
	uint32_t CPR0_96;
	uint32_t CPR0_97;
	uint32_t CPR0_98;
	uint32_t CPR0_99;
	uint32_t CPR0_100;
	uint32_t CPR0_101;
	uint32_t CPR0_102;
	uint32_t CPR0_103;
	uint32_t CAUSE;
	uint32_t CPR0_105;
	uint32_t CPR0_106;
	uint32_t CPR0_107;
	uint32_t CPR0_108;
	uint32_t CPR0_109;
	uint32_t CPR0_110;
	uint32_t CPR0_111;
	uint32_t EPC;
	uint32_t CPR0_113;
	uint32_t CPR0_114;
	uint32_t CPR0_115;
	uint32_t CPR0_116;
	uint32_t CPR0_117;
	uint32_t CPR0_118;
	uint32_t CPR0_119;
	uint32_t CPR0_120;
	uint32_t CPR0_121;
	uint32_t CPR0_122;
	uint32_t CPR0_123;
	uint32_t CPR0_124;
	uint32_t CPR0_125;
	uint32_t CPR0_126;
	uint32_t CPR0_127;
	uint32_t CONFIG;
	uint32_t CPR0_129;
	uint32_t CPR0_130;
	uint32_t CPR0_131;
	uint32_t CPR0_132;
	uint32_t CPR0_133;
	uint32_t CPR0_134;
	uint32_t CPR0_135;
	uint32_t CPR0_136;
	uint32_t CPR0_137;
	uint32_t CPR0_138;
	uint32_t CPR0_139;
	uint32_t CPR0_140;
	uint32_t CPR0_141;
	uint32_t CPR0_142;
	uint32_t CPR0_143;
	uint32_t CPR0_144;
	uint32_t CPR0_145;
	uint32_t CPR0_146;
	uint32_t CPR0_147;
	uint32_t CPR0_148;
	uint32_t CPR0_149;
	uint32_t CPR0_150;
	uint32_t CPR0_151;
	uint32_t WATCHHI;
	uint32_t CPR0_153;
	uint32_t CPR0_154;
	uint32_t CPR0_155;
	uint32_t CPR0_156;
	uint32_t CPR0_157;
	uint32_t CPR0_158;
	uint32_t CPR0_159;
	uint32_t CPR0_160;
	uint32_t CPR0_161;
	uint32_t CPR0_162;
	uint32_t CPR0_163;
	uint32_t CPR0_164;
	uint32_t CPR0_165;
	uint32_t CPR0_166;
	uint32_t CPR0_167;
	uint32_t CPR0_168;
	uint32_t CPR0_169;
	uint32_t CPR0_170;
	uint32_t CPR0_171;
	uint32_t CPR0_172;
	uint32_t CPR0_173;
	uint32_t CPR0_174;
	uint32_t CPR0_175;
	uint32_t CPR0_176;
	uint32_t CPR0_177;
	uint32_t CPR0_178;
	uint32_t CPR0_179;
	uint32_t CPR0_180;
	uint32_t CPR0_181;
	uint32_t CPR0_182;
	uint32_t CPR0_183;
	uint32_t CPR0_184;
	uint32_t CPR0_185;
	uint32_t CPR0_186;
	uint32_t CPR0_187;
	uint32_t CPR0_188;
	uint32_t CPR0_189;
	uint32_t CPR0_190;
	uint32_t CPR0_191;
	uint32_t CPR0_192;
	uint32_t CPR0_193;
	uint32_t CPR0_194;
	uint32_t CPR0_195;
	uint32_t CPR0_196;
	uint32_t CPR0_197;
	uint32_t CPR0_198;
	uint32_t CPR0_199;
	uint32_t CPR0_200;
	uint32_t CPR0_201;
	uint32_t CPR0_202;
	uint32_t CPR0_203;
	uint32_t CPR0_204;
	uint32_t CPR0_205;
	uint32_t CPR0_206;
	uint32_t CPR0_207;
	uint32_t CPR0_208;
	uint32_t CPR0_209;
	uint32_t CPR0_210;
	uint32_t CPR0_211;
	uint32_t CPR0_212;
	uint32_t CPR0_213;
	uint32_t CPR0_214;
	uint32_t CPR0_215;
	uint32_t CPR0_216;
	uint32_t CPR0_217;
	uint32_t CPR0_218;
	uint32_t CPR0_219;
	uint32_t CPR0_220;
	uint32_t CPR0_221;
	uint32_t CPR0_222;
	uint32_t CPR0_223;
	uint32_t CPR0_224;
	uint32_t CPR0_225;
	uint32_t CPR0_226;
	uint32_t CPR0_227;
	uint32_t CPR0_228;
	uint32_t CPR0_229;
	uint32_t CPR0_230;
	uint32_t CPR0_231;
	uint32_t CPR0_232;
	uint32_t CPR0_233;
	uint32_t CPR0_234;
	uint32_t CPR0_235;
	uint32_t CPR0_236;
	uint32_t CPR0_237;
	uint32_t CPR0_238;
	uint32_t CPR0_239;
	uint32_t CPR0_240;
	uint32_t CPR0_241;
	uint32_t CPR0_242;
	uint32_t CPR0_243;
	uint32_t CPR0_244;
	uint32_t CPR0_245;
	uint32_t CPR0_246;
	uint32_t CPR0_247;
	uint32_t CPR0_248;
	uint32_t CPR0_249;
	uint32_t CPR0_250;
	uint32_t CPR0_251;
	uint32_t CPR0_252;
	uint32_t CPR0_253;
	uint32_t CPR0_254;
	uint32_t CPR0_255;
}vm_cpu_t;

void dump_gpregs(vm_cpu_t* vmcpu);

//#define RETURN_PC return PyLong_FromUnsignedLongLong(vmcpu->PC);
#define RETURN_PC return BlockDst;
