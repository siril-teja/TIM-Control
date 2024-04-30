    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 1;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc paramMap
        ;%
        paramMap.nSections           = nTotSects;
        paramMap.sectIdxOffset       = sectIdxOffset;
            paramMap.sections(nTotSects) = dumSection; %prealloc
        paramMap.nTotData            = -1;

        ;%
        ;% Auto data (rtP)
        ;%
            section.nData     = 132;
            section.data(132)  = dumData; %prealloc

                    ;% rtP.Constant_Value
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.Constant1_Value
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.Constant10_Value
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.Constant100_Value
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.Constant101_Value
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.Constant102_Value
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.Constant103_Value
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.Constant104_Value
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.Constant105_Value
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 8;

                    ;% rtP.Constant106_Value
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 9;

                    ;% rtP.Constant107_Value
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 10;

                    ;% rtP.Constant108_Value
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 11;

                    ;% rtP.Constant109_Value
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 12;

                    ;% rtP.Constant11_Value
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 13;

                    ;% rtP.Constant110_Value
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 14;

                    ;% rtP.Constant111_Value
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 15;

                    ;% rtP.Constant112_Value
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 16;

                    ;% rtP.Constant113_Value
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 17;

                    ;% rtP.Constant114_Value
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 18;

                    ;% rtP.Constant115_Value
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 19;

                    ;% rtP.Constant116_Value
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 20;

                    ;% rtP.Constant117_Value
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 21;

                    ;% rtP.Constant118_Value
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 22;

                    ;% rtP.Constant119_Value
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 23;

                    ;% rtP.Constant12_Value
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 24;

                    ;% rtP.Constant120_Value
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 25;

                    ;% rtP.Constant121_Value
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 26;

                    ;% rtP.Constant122_Value
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 27;

                    ;% rtP.Constant123_Value
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 28;

                    ;% rtP.Constant124_Value
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 29;

                    ;% rtP.Constant125_Value
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 30;

                    ;% rtP.Constant126_Value
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 31;

                    ;% rtP.Constant127_Value
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 32;

                    ;% rtP.Constant128_Value
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 33;

                    ;% rtP.Constant129_Value
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 34;

                    ;% rtP.Constant13_Value
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 35;

                    ;% rtP.Constant130_Value
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 36;

                    ;% rtP.Constant131_Value
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 37;

                    ;% rtP.Constant14_Value
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 38;

                    ;% rtP.Constant15_Value
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 39;

                    ;% rtP.Constant16_Value
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 40;

                    ;% rtP.Constant17_Value
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 41;

                    ;% rtP.Constant18_Value
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 42;

                    ;% rtP.Constant19_Value
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 43;

                    ;% rtP.Constant2_Value
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 44;

                    ;% rtP.Constant20_Value
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 45;

                    ;% rtP.Constant21_Value
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 46;

                    ;% rtP.Constant22_Value
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 47;

                    ;% rtP.Constant23_Value
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 48;

                    ;% rtP.Constant24_Value
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 49;

                    ;% rtP.Constant25_Value
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 50;

                    ;% rtP.Constant26_Value
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 51;

                    ;% rtP.Constant27_Value
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 52;

                    ;% rtP.Constant28_Value
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 53;

                    ;% rtP.Constant29_Value
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 54;

                    ;% rtP.Constant3_Value
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 55;

                    ;% rtP.Constant30_Value
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 56;

                    ;% rtP.Constant31_Value
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 57;

                    ;% rtP.Constant32_Value
                    section.data(59).logicalSrcIdx = 58;
                    section.data(59).dtTransOffset = 58;

                    ;% rtP.Constant33_Value
                    section.data(60).logicalSrcIdx = 59;
                    section.data(60).dtTransOffset = 59;

                    ;% rtP.Constant34_Value
                    section.data(61).logicalSrcIdx = 60;
                    section.data(61).dtTransOffset = 60;

                    ;% rtP.Constant35_Value
                    section.data(62).logicalSrcIdx = 61;
                    section.data(62).dtTransOffset = 61;

                    ;% rtP.Constant36_Value
                    section.data(63).logicalSrcIdx = 62;
                    section.data(63).dtTransOffset = 62;

                    ;% rtP.Constant37_Value
                    section.data(64).logicalSrcIdx = 63;
                    section.data(64).dtTransOffset = 63;

                    ;% rtP.Constant38_Value
                    section.data(65).logicalSrcIdx = 64;
                    section.data(65).dtTransOffset = 64;

                    ;% rtP.Constant39_Value
                    section.data(66).logicalSrcIdx = 65;
                    section.data(66).dtTransOffset = 65;

                    ;% rtP.Constant4_Value
                    section.data(67).logicalSrcIdx = 66;
                    section.data(67).dtTransOffset = 66;

                    ;% rtP.Constant40_Value
                    section.data(68).logicalSrcIdx = 67;
                    section.data(68).dtTransOffset = 67;

                    ;% rtP.Constant41_Value
                    section.data(69).logicalSrcIdx = 68;
                    section.data(69).dtTransOffset = 68;

                    ;% rtP.Constant42_Value
                    section.data(70).logicalSrcIdx = 69;
                    section.data(70).dtTransOffset = 69;

                    ;% rtP.Constant43_Value
                    section.data(71).logicalSrcIdx = 70;
                    section.data(71).dtTransOffset = 70;

                    ;% rtP.Constant44_Value
                    section.data(72).logicalSrcIdx = 71;
                    section.data(72).dtTransOffset = 71;

                    ;% rtP.Constant45_Value
                    section.data(73).logicalSrcIdx = 72;
                    section.data(73).dtTransOffset = 72;

                    ;% rtP.Constant46_Value
                    section.data(74).logicalSrcIdx = 73;
                    section.data(74).dtTransOffset = 73;

                    ;% rtP.Constant47_Value
                    section.data(75).logicalSrcIdx = 74;
                    section.data(75).dtTransOffset = 74;

                    ;% rtP.Constant48_Value
                    section.data(76).logicalSrcIdx = 75;
                    section.data(76).dtTransOffset = 75;

                    ;% rtP.Constant49_Value
                    section.data(77).logicalSrcIdx = 76;
                    section.data(77).dtTransOffset = 76;

                    ;% rtP.Constant5_Value
                    section.data(78).logicalSrcIdx = 77;
                    section.data(78).dtTransOffset = 77;

                    ;% rtP.Constant50_Value
                    section.data(79).logicalSrcIdx = 78;
                    section.data(79).dtTransOffset = 78;

                    ;% rtP.Constant51_Value
                    section.data(80).logicalSrcIdx = 79;
                    section.data(80).dtTransOffset = 79;

                    ;% rtP.Constant52_Value
                    section.data(81).logicalSrcIdx = 80;
                    section.data(81).dtTransOffset = 80;

                    ;% rtP.Constant53_Value
                    section.data(82).logicalSrcIdx = 81;
                    section.data(82).dtTransOffset = 81;

                    ;% rtP.Constant54_Value
                    section.data(83).logicalSrcIdx = 82;
                    section.data(83).dtTransOffset = 82;

                    ;% rtP.Constant55_Value
                    section.data(84).logicalSrcIdx = 83;
                    section.data(84).dtTransOffset = 83;

                    ;% rtP.Constant56_Value
                    section.data(85).logicalSrcIdx = 84;
                    section.data(85).dtTransOffset = 84;

                    ;% rtP.Constant57_Value
                    section.data(86).logicalSrcIdx = 85;
                    section.data(86).dtTransOffset = 85;

                    ;% rtP.Constant58_Value
                    section.data(87).logicalSrcIdx = 86;
                    section.data(87).dtTransOffset = 86;

                    ;% rtP.Constant59_Value
                    section.data(88).logicalSrcIdx = 87;
                    section.data(88).dtTransOffset = 87;

                    ;% rtP.Constant6_Value
                    section.data(89).logicalSrcIdx = 88;
                    section.data(89).dtTransOffset = 88;

                    ;% rtP.Constant60_Value
                    section.data(90).logicalSrcIdx = 89;
                    section.data(90).dtTransOffset = 89;

                    ;% rtP.Constant61_Value
                    section.data(91).logicalSrcIdx = 90;
                    section.data(91).dtTransOffset = 90;

                    ;% rtP.Constant62_Value
                    section.data(92).logicalSrcIdx = 91;
                    section.data(92).dtTransOffset = 91;

                    ;% rtP.Constant63_Value
                    section.data(93).logicalSrcIdx = 92;
                    section.data(93).dtTransOffset = 92;

                    ;% rtP.Constant64_Value
                    section.data(94).logicalSrcIdx = 93;
                    section.data(94).dtTransOffset = 93;

                    ;% rtP.Constant65_Value
                    section.data(95).logicalSrcIdx = 94;
                    section.data(95).dtTransOffset = 94;

                    ;% rtP.Constant66_Value
                    section.data(96).logicalSrcIdx = 95;
                    section.data(96).dtTransOffset = 95;

                    ;% rtP.Constant67_Value
                    section.data(97).logicalSrcIdx = 96;
                    section.data(97).dtTransOffset = 96;

                    ;% rtP.Constant68_Value
                    section.data(98).logicalSrcIdx = 97;
                    section.data(98).dtTransOffset = 97;

                    ;% rtP.Constant69_Value
                    section.data(99).logicalSrcIdx = 98;
                    section.data(99).dtTransOffset = 98;

                    ;% rtP.Constant7_Value
                    section.data(100).logicalSrcIdx = 99;
                    section.data(100).dtTransOffset = 99;

                    ;% rtP.Constant70_Value
                    section.data(101).logicalSrcIdx = 100;
                    section.data(101).dtTransOffset = 100;

                    ;% rtP.Constant71_Value
                    section.data(102).logicalSrcIdx = 101;
                    section.data(102).dtTransOffset = 101;

                    ;% rtP.Constant72_Value
                    section.data(103).logicalSrcIdx = 102;
                    section.data(103).dtTransOffset = 102;

                    ;% rtP.Constant73_Value
                    section.data(104).logicalSrcIdx = 103;
                    section.data(104).dtTransOffset = 103;

                    ;% rtP.Constant74_Value
                    section.data(105).logicalSrcIdx = 104;
                    section.data(105).dtTransOffset = 104;

                    ;% rtP.Constant75_Value
                    section.data(106).logicalSrcIdx = 105;
                    section.data(106).dtTransOffset = 105;

                    ;% rtP.Constant76_Value
                    section.data(107).logicalSrcIdx = 106;
                    section.data(107).dtTransOffset = 106;

                    ;% rtP.Constant77_Value
                    section.data(108).logicalSrcIdx = 107;
                    section.data(108).dtTransOffset = 107;

                    ;% rtP.Constant78_Value
                    section.data(109).logicalSrcIdx = 108;
                    section.data(109).dtTransOffset = 108;

                    ;% rtP.Constant79_Value
                    section.data(110).logicalSrcIdx = 109;
                    section.data(110).dtTransOffset = 109;

                    ;% rtP.Constant8_Value
                    section.data(111).logicalSrcIdx = 110;
                    section.data(111).dtTransOffset = 110;

                    ;% rtP.Constant80_Value
                    section.data(112).logicalSrcIdx = 111;
                    section.data(112).dtTransOffset = 111;

                    ;% rtP.Constant81_Value
                    section.data(113).logicalSrcIdx = 112;
                    section.data(113).dtTransOffset = 112;

                    ;% rtP.Constant82_Value
                    section.data(114).logicalSrcIdx = 113;
                    section.data(114).dtTransOffset = 113;

                    ;% rtP.Constant83_Value
                    section.data(115).logicalSrcIdx = 114;
                    section.data(115).dtTransOffset = 114;

                    ;% rtP.Constant84_Value
                    section.data(116).logicalSrcIdx = 115;
                    section.data(116).dtTransOffset = 115;

                    ;% rtP.Constant85_Value
                    section.data(117).logicalSrcIdx = 116;
                    section.data(117).dtTransOffset = 116;

                    ;% rtP.Constant86_Value
                    section.data(118).logicalSrcIdx = 117;
                    section.data(118).dtTransOffset = 117;

                    ;% rtP.Constant87_Value
                    section.data(119).logicalSrcIdx = 118;
                    section.data(119).dtTransOffset = 118;

                    ;% rtP.Constant88_Value
                    section.data(120).logicalSrcIdx = 119;
                    section.data(120).dtTransOffset = 119;

                    ;% rtP.Constant89_Value
                    section.data(121).logicalSrcIdx = 120;
                    section.data(121).dtTransOffset = 120;

                    ;% rtP.Constant9_Value
                    section.data(122).logicalSrcIdx = 121;
                    section.data(122).dtTransOffset = 121;

                    ;% rtP.Constant90_Value
                    section.data(123).logicalSrcIdx = 122;
                    section.data(123).dtTransOffset = 122;

                    ;% rtP.Constant91_Value
                    section.data(124).logicalSrcIdx = 123;
                    section.data(124).dtTransOffset = 123;

                    ;% rtP.Constant92_Value
                    section.data(125).logicalSrcIdx = 124;
                    section.data(125).dtTransOffset = 124;

                    ;% rtP.Constant93_Value
                    section.data(126).logicalSrcIdx = 125;
                    section.data(126).dtTransOffset = 125;

                    ;% rtP.Constant94_Value
                    section.data(127).logicalSrcIdx = 126;
                    section.data(127).dtTransOffset = 126;

                    ;% rtP.Constant95_Value
                    section.data(128).logicalSrcIdx = 127;
                    section.data(128).dtTransOffset = 127;

                    ;% rtP.Constant96_Value
                    section.data(129).logicalSrcIdx = 128;
                    section.data(129).dtTransOffset = 128;

                    ;% rtP.Constant97_Value
                    section.data(130).logicalSrcIdx = 129;
                    section.data(130).dtTransOffset = 129;

                    ;% rtP.Constant98_Value
                    section.data(131).logicalSrcIdx = 130;
                    section.data(131).dtTransOffset = 130;

                    ;% rtP.Constant99_Value
                    section.data(132).logicalSrcIdx = 131;
                    section.data(132).dtTransOffset = 131;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section


            ;%
            ;% Non-auto Data (parameter)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        paramMap.nTotData = nTotData;



    ;%**************************
    ;% Create Block Output Map *
    ;%**************************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 1;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc sigMap
        ;%
        sigMap.nSections           = nTotSects;
        sigMap.sectIdxOffset       = sectIdxOffset;
            sigMap.sections(nTotSects) = dumSection; %prealloc
        sigMap.nTotData            = -1;

        ;%
        ;% Auto data (rtB)
        ;%
            section.nData     = 133;
            section.data(133)  = dumData; %prealloc

                    ;% rtB.oad25gyw43
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.gonznixple
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 4;

                    ;% rtB.lysrgdyhlm
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 8;

                    ;% rtB.fhbnd1nosw
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 12;

                    ;% rtB.b2w2zscw5t
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 16;

                    ;% rtB.muvy0sw4mb
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 20;

                    ;% rtB.m3xjxoadzp
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 24;

                    ;% rtB.nwzhtxeuoj
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 28;

                    ;% rtB.or4hd3gsyb
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 32;

                    ;% rtB.ivxzxatvco
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 36;

                    ;% rtB.jwyipkhrq1
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 40;

                    ;% rtB.gy231qw0uc
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 44;

                    ;% rtB.afufn3zcqn
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 48;

                    ;% rtB.j1ok2vvalr
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 52;

                    ;% rtB.kciciq3mto
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 56;

                    ;% rtB.kbehybme4t
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 60;

                    ;% rtB.mw0qlbsqxu
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 64;

                    ;% rtB.c5tpinttzw
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 68;

                    ;% rtB.bcar2nuls1
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 72;

                    ;% rtB.hlgykavlao
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 76;

                    ;% rtB.bf4dxa2uhh
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 80;

                    ;% rtB.k2wv5mvvax
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 84;

                    ;% rtB.hdfnz1gfie
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 88;

                    ;% rtB.o0x3hc3z1o
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 92;

                    ;% rtB.emfxspqj4b
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 96;

                    ;% rtB.bt2kcmyldc
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 100;

                    ;% rtB.ig5hnvzfap
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 104;

                    ;% rtB.id2itfbl54
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 108;

                    ;% rtB.jfi522wjk5
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 112;

                    ;% rtB.ib1ov1s2ph
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 116;

                    ;% rtB.esbd4qd5nf
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 120;

                    ;% rtB.gos502fc2o
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 124;

                    ;% rtB.pccgpw2y5a
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 128;

                    ;% rtB.ldr2ur5ut3
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 132;

                    ;% rtB.h1exh42mze
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 136;

                    ;% rtB.hzadhrl0vq
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 140;

                    ;% rtB.d3hl0nkjrc
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 144;

                    ;% rtB.hqag4lnu2u
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 148;

                    ;% rtB.ncge4grfh0
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 152;

                    ;% rtB.kjddm4iifw
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 156;

                    ;% rtB.fdfvld3joq
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 160;

                    ;% rtB.odqipcdbov
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 164;

                    ;% rtB.cppgaw4jx0
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 168;

                    ;% rtB.d5wecsezpp
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 172;

                    ;% rtB.bgjmeis20o
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 176;

                    ;% rtB.ezwzufmbxi
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 180;

                    ;% rtB.o5e4ocfci3
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 184;

                    ;% rtB.j3smoe3yee
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 188;

                    ;% rtB.nc15wgj2dj
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 192;

                    ;% rtB.gdlegmpkdm
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 196;

                    ;% rtB.lcvcw2lgqh
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 200;

                    ;% rtB.gcn2r4lpdy
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 204;

                    ;% rtB.delkzefkws
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 208;

                    ;% rtB.kjgeje3kr0
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 212;

                    ;% rtB.pg3kfd1pbb
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 216;

                    ;% rtB.djfofry33a
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 220;

                    ;% rtB.o1lyfs335t
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 224;

                    ;% rtB.ecv13ammey
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 228;

                    ;% rtB.ixqjlqogqc
                    section.data(59).logicalSrcIdx = 58;
                    section.data(59).dtTransOffset = 232;

                    ;% rtB.napao5lfpv
                    section.data(60).logicalSrcIdx = 59;
                    section.data(60).dtTransOffset = 236;

                    ;% rtB.kqteqtjleq
                    section.data(61).logicalSrcIdx = 60;
                    section.data(61).dtTransOffset = 240;

                    ;% rtB.bheezdr2hp
                    section.data(62).logicalSrcIdx = 61;
                    section.data(62).dtTransOffset = 244;

                    ;% rtB.fnfhmrlw2r
                    section.data(63).logicalSrcIdx = 62;
                    section.data(63).dtTransOffset = 248;

                    ;% rtB.arbuym2x0p
                    section.data(64).logicalSrcIdx = 63;
                    section.data(64).dtTransOffset = 252;

                    ;% rtB.hhlphr0mf3
                    section.data(65).logicalSrcIdx = 64;
                    section.data(65).dtTransOffset = 256;

                    ;% rtB.ocmzfkdk5g
                    section.data(66).logicalSrcIdx = 65;
                    section.data(66).dtTransOffset = 260;

                    ;% rtB.mdn3wksyuv
                    section.data(67).logicalSrcIdx = 66;
                    section.data(67).dtTransOffset = 264;

                    ;% rtB.noh00npri0
                    section.data(68).logicalSrcIdx = 67;
                    section.data(68).dtTransOffset = 268;

                    ;% rtB.aly4ypo3lg
                    section.data(69).logicalSrcIdx = 68;
                    section.data(69).dtTransOffset = 272;

                    ;% rtB.aex4hs235y
                    section.data(70).logicalSrcIdx = 69;
                    section.data(70).dtTransOffset = 276;

                    ;% rtB.g2tt5d40hy
                    section.data(71).logicalSrcIdx = 70;
                    section.data(71).dtTransOffset = 280;

                    ;% rtB.ef4rbhlrig
                    section.data(72).logicalSrcIdx = 71;
                    section.data(72).dtTransOffset = 284;

                    ;% rtB.ecrbw0kxik
                    section.data(73).logicalSrcIdx = 72;
                    section.data(73).dtTransOffset = 288;

                    ;% rtB.emmhvg50si
                    section.data(74).logicalSrcIdx = 73;
                    section.data(74).dtTransOffset = 292;

                    ;% rtB.lnrciz3sse
                    section.data(75).logicalSrcIdx = 74;
                    section.data(75).dtTransOffset = 296;

                    ;% rtB.fbs2nof1jj
                    section.data(76).logicalSrcIdx = 75;
                    section.data(76).dtTransOffset = 300;

                    ;% rtB.ewyo154aem
                    section.data(77).logicalSrcIdx = 76;
                    section.data(77).dtTransOffset = 304;

                    ;% rtB.kq5kxdvlfr
                    section.data(78).logicalSrcIdx = 77;
                    section.data(78).dtTransOffset = 308;

                    ;% rtB.b5rfj1p2ga
                    section.data(79).logicalSrcIdx = 78;
                    section.data(79).dtTransOffset = 312;

                    ;% rtB.ceortczatx
                    section.data(80).logicalSrcIdx = 79;
                    section.data(80).dtTransOffset = 316;

                    ;% rtB.hs0dqsfszd
                    section.data(81).logicalSrcIdx = 80;
                    section.data(81).dtTransOffset = 320;

                    ;% rtB.aagqmywvqt
                    section.data(82).logicalSrcIdx = 81;
                    section.data(82).dtTransOffset = 324;

                    ;% rtB.gut4p1zhjj
                    section.data(83).logicalSrcIdx = 82;
                    section.data(83).dtTransOffset = 328;

                    ;% rtB.jak21ihmwf
                    section.data(84).logicalSrcIdx = 83;
                    section.data(84).dtTransOffset = 332;

                    ;% rtB.gehoc3nuoq
                    section.data(85).logicalSrcIdx = 84;
                    section.data(85).dtTransOffset = 336;

                    ;% rtB.oy0ponjbuc
                    section.data(86).logicalSrcIdx = 85;
                    section.data(86).dtTransOffset = 340;

                    ;% rtB.e0oohkhsau
                    section.data(87).logicalSrcIdx = 86;
                    section.data(87).dtTransOffset = 344;

                    ;% rtB.bm5pkx213e
                    section.data(88).logicalSrcIdx = 87;
                    section.data(88).dtTransOffset = 348;

                    ;% rtB.jttxghksqy
                    section.data(89).logicalSrcIdx = 88;
                    section.data(89).dtTransOffset = 352;

                    ;% rtB.h1z3fvyhfq
                    section.data(90).logicalSrcIdx = 89;
                    section.data(90).dtTransOffset = 356;

                    ;% rtB.k3a4sseyqr
                    section.data(91).logicalSrcIdx = 90;
                    section.data(91).dtTransOffset = 360;

                    ;% rtB.mqchlezs1x
                    section.data(92).logicalSrcIdx = 91;
                    section.data(92).dtTransOffset = 364;

                    ;% rtB.ogxmtcvjjt
                    section.data(93).logicalSrcIdx = 92;
                    section.data(93).dtTransOffset = 368;

                    ;% rtB.hvlthhdxmv
                    section.data(94).logicalSrcIdx = 93;
                    section.data(94).dtTransOffset = 372;

                    ;% rtB.jsvjvlkfvf
                    section.data(95).logicalSrcIdx = 94;
                    section.data(95).dtTransOffset = 376;

                    ;% rtB.gy5qeqpikf
                    section.data(96).logicalSrcIdx = 95;
                    section.data(96).dtTransOffset = 380;

                    ;% rtB.d2ebe0y2st
                    section.data(97).logicalSrcIdx = 96;
                    section.data(97).dtTransOffset = 384;

                    ;% rtB.fsv54rct1r
                    section.data(98).logicalSrcIdx = 97;
                    section.data(98).dtTransOffset = 388;

                    ;% rtB.eno2lg4ro1
                    section.data(99).logicalSrcIdx = 98;
                    section.data(99).dtTransOffset = 392;

                    ;% rtB.btom5xbros
                    section.data(100).logicalSrcIdx = 99;
                    section.data(100).dtTransOffset = 396;

                    ;% rtB.asnaa2cqya
                    section.data(101).logicalSrcIdx = 100;
                    section.data(101).dtTransOffset = 400;

                    ;% rtB.gqqxqfxyyq
                    section.data(102).logicalSrcIdx = 101;
                    section.data(102).dtTransOffset = 404;

                    ;% rtB.g0nco02izv
                    section.data(103).logicalSrcIdx = 102;
                    section.data(103).dtTransOffset = 408;

                    ;% rtB.nmvefhf0vt
                    section.data(104).logicalSrcIdx = 103;
                    section.data(104).dtTransOffset = 412;

                    ;% rtB.ck1k1fx1ji
                    section.data(105).logicalSrcIdx = 104;
                    section.data(105).dtTransOffset = 416;

                    ;% rtB.ke0zj3nzte
                    section.data(106).logicalSrcIdx = 105;
                    section.data(106).dtTransOffset = 420;

                    ;% rtB.lbjlavvxin
                    section.data(107).logicalSrcIdx = 106;
                    section.data(107).dtTransOffset = 424;

                    ;% rtB.kp4xau101h
                    section.data(108).logicalSrcIdx = 107;
                    section.data(108).dtTransOffset = 428;

                    ;% rtB.nabnhy4rzb
                    section.data(109).logicalSrcIdx = 108;
                    section.data(109).dtTransOffset = 432;

                    ;% rtB.fjvvwaay3t
                    section.data(110).logicalSrcIdx = 109;
                    section.data(110).dtTransOffset = 436;

                    ;% rtB.dqdeods4ti
                    section.data(111).logicalSrcIdx = 110;
                    section.data(111).dtTransOffset = 440;

                    ;% rtB.akpj3aew2a
                    section.data(112).logicalSrcIdx = 111;
                    section.data(112).dtTransOffset = 444;

                    ;% rtB.oa1i2c0mkw
                    section.data(113).logicalSrcIdx = 112;
                    section.data(113).dtTransOffset = 448;

                    ;% rtB.phm2guuwcu
                    section.data(114).logicalSrcIdx = 113;
                    section.data(114).dtTransOffset = 452;

                    ;% rtB.ll1wn2tfgv
                    section.data(115).logicalSrcIdx = 114;
                    section.data(115).dtTransOffset = 456;

                    ;% rtB.k443y2iruy
                    section.data(116).logicalSrcIdx = 115;
                    section.data(116).dtTransOffset = 460;

                    ;% rtB.obn3ffl5e3
                    section.data(117).logicalSrcIdx = 116;
                    section.data(117).dtTransOffset = 464;

                    ;% rtB.c24r054xs1
                    section.data(118).logicalSrcIdx = 117;
                    section.data(118).dtTransOffset = 468;

                    ;% rtB.eqdx3b0qel
                    section.data(119).logicalSrcIdx = 118;
                    section.data(119).dtTransOffset = 472;

                    ;% rtB.g4tb1ggys3
                    section.data(120).logicalSrcIdx = 119;
                    section.data(120).dtTransOffset = 476;

                    ;% rtB.ltsc1wtz2u
                    section.data(121).logicalSrcIdx = 120;
                    section.data(121).dtTransOffset = 480;

                    ;% rtB.cer35hgkrx
                    section.data(122).logicalSrcIdx = 121;
                    section.data(122).dtTransOffset = 484;

                    ;% rtB.fc1htrcggp
                    section.data(123).logicalSrcIdx = 122;
                    section.data(123).dtTransOffset = 488;

                    ;% rtB.p0kegxq00b
                    section.data(124).logicalSrcIdx = 123;
                    section.data(124).dtTransOffset = 492;

                    ;% rtB.mq0j1u0ela
                    section.data(125).logicalSrcIdx = 124;
                    section.data(125).dtTransOffset = 496;

                    ;% rtB.cnqmlr3ffu
                    section.data(126).logicalSrcIdx = 125;
                    section.data(126).dtTransOffset = 500;

                    ;% rtB.cly5u0y5c4
                    section.data(127).logicalSrcIdx = 126;
                    section.data(127).dtTransOffset = 504;

                    ;% rtB.btc0dcjb1x
                    section.data(128).logicalSrcIdx = 127;
                    section.data(128).dtTransOffset = 508;

                    ;% rtB.glpvz3qg5j
                    section.data(129).logicalSrcIdx = 128;
                    section.data(129).dtTransOffset = 512;

                    ;% rtB.dniwgscfoa
                    section.data(130).logicalSrcIdx = 129;
                    section.data(130).dtTransOffset = 516;

                    ;% rtB.kbtvtfl01a
                    section.data(131).logicalSrcIdx = 130;
                    section.data(131).dtTransOffset = 520;

                    ;% rtB.ic4mqe03hr
                    section.data(132).logicalSrcIdx = 131;
                    section.data(132).dtTransOffset = 524;

                    ;% rtB.f1feqfkfhj
                    section.data(133).logicalSrcIdx = 132;
                    section.data(133).dtTransOffset = 528;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section


            ;%
            ;% Non-auto Data (signal)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        sigMap.nTotData = nTotData;



    ;%*******************
    ;% Create DWork Map *
    ;%*******************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 4;
        sectIdxOffset = 1;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc dworkMap
        ;%
        dworkMap.nSections           = nTotSects;
        dworkMap.sectIdxOffset       = sectIdxOffset;
            dworkMap.sections(nTotSects) = dumSection; %prealloc
        dworkMap.nTotData            = -1;

        ;%
        ;% Auto data (rtDW)
        ;%
            section.nData     = 133;
            section.data(133)  = dumData; %prealloc

                    ;% rtDW.mqik13xmg4
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.ji5diu4u4g
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 2;

                    ;% rtDW.jhhoipjxg2
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 4;

                    ;% rtDW.fgfx05dvuf
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 6;

                    ;% rtDW.emx55eihz5
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 8;

                    ;% rtDW.n4vwaarlsg
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 10;

                    ;% rtDW.ezd33ptnbw
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 12;

                    ;% rtDW.p3scr42uhg
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 14;

                    ;% rtDW.pzlsgumjbv
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 16;

                    ;% rtDW.ps1p2fwesa
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 18;

                    ;% rtDW.e0ig1knfxl
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 20;

                    ;% rtDW.dnh0jtaupx
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 22;

                    ;% rtDW.gi4qp2ipby
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 24;

                    ;% rtDW.dom4caknds
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 26;

                    ;% rtDW.dmkpkazr32
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 28;

                    ;% rtDW.ovywxjjo2i
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 30;

                    ;% rtDW.kaw3sglkdf
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 32;

                    ;% rtDW.ewyonkurbb
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 34;

                    ;% rtDW.frwoyk05lg
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 36;

                    ;% rtDW.aulq5efswf
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 38;

                    ;% rtDW.pz2e4awi1a
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 40;

                    ;% rtDW.g4sukhfkih
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 42;

                    ;% rtDW.fxtra2scsn
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 44;

                    ;% rtDW.errhdehw4g
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 46;

                    ;% rtDW.hu0lt4s4te
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 48;

                    ;% rtDW.mfce2aqn1g
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 50;

                    ;% rtDW.oluh5kzsla
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 52;

                    ;% rtDW.bha0fnk1bp
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 54;

                    ;% rtDW.jnp24i1dxf
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 56;

                    ;% rtDW.hxqrzqyb1s
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 58;

                    ;% rtDW.j4congykrk
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 60;

                    ;% rtDW.iilvawl4jp
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 62;

                    ;% rtDW.ixsx14w4f4
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 64;

                    ;% rtDW.ihfwjihiuy
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 66;

                    ;% rtDW.jktdyezrej
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 68;

                    ;% rtDW.frgulsyyx3
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 70;

                    ;% rtDW.jcjkrxvt4k
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 72;

                    ;% rtDW.bktmmnn2sc
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 74;

                    ;% rtDW.mcgfl5oxpu
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 76;

                    ;% rtDW.agtrp11wsm
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 78;

                    ;% rtDW.mld4rt4j3w
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 80;

                    ;% rtDW.jb4xr0gp5u
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 82;

                    ;% rtDW.drminip4rs
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 84;

                    ;% rtDW.eudeprncf4
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 86;

                    ;% rtDW.le0lm1z1kp
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 88;

                    ;% rtDW.g5himkdecb
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 90;

                    ;% rtDW.bg0usov4pu
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 92;

                    ;% rtDW.lnuzpkeis4
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 94;

                    ;% rtDW.g2uhxo5h5a
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 96;

                    ;% rtDW.nv2rqimbta
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 98;

                    ;% rtDW.hhn4sycqg0
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 100;

                    ;% rtDW.nhjwdkwvfo
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 102;

                    ;% rtDW.lzxill3e5b
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 104;

                    ;% rtDW.j1quql3x3o
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 106;

                    ;% rtDW.locc1ozb3q
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 108;

                    ;% rtDW.ipzwyvmcwx
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 110;

                    ;% rtDW.gnhdpueylp
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 112;

                    ;% rtDW.kt2zrp2kmg
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 114;

                    ;% rtDW.obcore1bi4
                    section.data(59).logicalSrcIdx = 58;
                    section.data(59).dtTransOffset = 116;

                    ;% rtDW.prbk3ebkoo
                    section.data(60).logicalSrcIdx = 59;
                    section.data(60).dtTransOffset = 118;

                    ;% rtDW.ihc3wvwquq
                    section.data(61).logicalSrcIdx = 60;
                    section.data(61).dtTransOffset = 120;

                    ;% rtDW.p1jx3l0k5n
                    section.data(62).logicalSrcIdx = 61;
                    section.data(62).dtTransOffset = 122;

                    ;% rtDW.ho3azwxkge
                    section.data(63).logicalSrcIdx = 62;
                    section.data(63).dtTransOffset = 124;

                    ;% rtDW.nelac1klr2
                    section.data(64).logicalSrcIdx = 63;
                    section.data(64).dtTransOffset = 126;

                    ;% rtDW.kbxgvfrlrj
                    section.data(65).logicalSrcIdx = 64;
                    section.data(65).dtTransOffset = 128;

                    ;% rtDW.oxkurz2zqp
                    section.data(66).logicalSrcIdx = 65;
                    section.data(66).dtTransOffset = 130;

                    ;% rtDW.kjetqzyvtc
                    section.data(67).logicalSrcIdx = 66;
                    section.data(67).dtTransOffset = 132;

                    ;% rtDW.jj2mxuybuq
                    section.data(68).logicalSrcIdx = 67;
                    section.data(68).dtTransOffset = 134;

                    ;% rtDW.hqqo25es3a
                    section.data(69).logicalSrcIdx = 68;
                    section.data(69).dtTransOffset = 136;

                    ;% rtDW.md3t04aiks
                    section.data(70).logicalSrcIdx = 69;
                    section.data(70).dtTransOffset = 138;

                    ;% rtDW.aktcafzebn
                    section.data(71).logicalSrcIdx = 70;
                    section.data(71).dtTransOffset = 140;

                    ;% rtDW.m2223j3tie
                    section.data(72).logicalSrcIdx = 71;
                    section.data(72).dtTransOffset = 142;

                    ;% rtDW.epyhwy1lb4
                    section.data(73).logicalSrcIdx = 72;
                    section.data(73).dtTransOffset = 144;

                    ;% rtDW.ofa5xqoroe
                    section.data(74).logicalSrcIdx = 73;
                    section.data(74).dtTransOffset = 146;

                    ;% rtDW.djgzowxvaw
                    section.data(75).logicalSrcIdx = 74;
                    section.data(75).dtTransOffset = 148;

                    ;% rtDW.brqv5coduy
                    section.data(76).logicalSrcIdx = 75;
                    section.data(76).dtTransOffset = 150;

                    ;% rtDW.mphak0hvvd
                    section.data(77).logicalSrcIdx = 76;
                    section.data(77).dtTransOffset = 152;

                    ;% rtDW.h5aqoklvy5
                    section.data(78).logicalSrcIdx = 77;
                    section.data(78).dtTransOffset = 154;

                    ;% rtDW.ncd4b3lsgp
                    section.data(79).logicalSrcIdx = 78;
                    section.data(79).dtTransOffset = 156;

                    ;% rtDW.dhznbjmile
                    section.data(80).logicalSrcIdx = 79;
                    section.data(80).dtTransOffset = 158;

                    ;% rtDW.gbrdopmnsj
                    section.data(81).logicalSrcIdx = 80;
                    section.data(81).dtTransOffset = 160;

                    ;% rtDW.ieizbqrrxp
                    section.data(82).logicalSrcIdx = 81;
                    section.data(82).dtTransOffset = 162;

                    ;% rtDW.h5rynnahc3
                    section.data(83).logicalSrcIdx = 82;
                    section.data(83).dtTransOffset = 164;

                    ;% rtDW.m3ftaa0lks
                    section.data(84).logicalSrcIdx = 83;
                    section.data(84).dtTransOffset = 166;

                    ;% rtDW.e4mk2foq1i
                    section.data(85).logicalSrcIdx = 84;
                    section.data(85).dtTransOffset = 168;

                    ;% rtDW.i010yxfdzp
                    section.data(86).logicalSrcIdx = 85;
                    section.data(86).dtTransOffset = 170;

                    ;% rtDW.aaqmzun4mr
                    section.data(87).logicalSrcIdx = 86;
                    section.data(87).dtTransOffset = 172;

                    ;% rtDW.bqbfqedlag
                    section.data(88).logicalSrcIdx = 87;
                    section.data(88).dtTransOffset = 174;

                    ;% rtDW.oachdgrpwr
                    section.data(89).logicalSrcIdx = 88;
                    section.data(89).dtTransOffset = 176;

                    ;% rtDW.ejv03dirgj
                    section.data(90).logicalSrcIdx = 89;
                    section.data(90).dtTransOffset = 178;

                    ;% rtDW.dwr21qmqs1
                    section.data(91).logicalSrcIdx = 90;
                    section.data(91).dtTransOffset = 180;

                    ;% rtDW.oy04l3y3ol
                    section.data(92).logicalSrcIdx = 91;
                    section.data(92).dtTransOffset = 182;

                    ;% rtDW.likyggsndx
                    section.data(93).logicalSrcIdx = 92;
                    section.data(93).dtTransOffset = 184;

                    ;% rtDW.afeu213ap0
                    section.data(94).logicalSrcIdx = 93;
                    section.data(94).dtTransOffset = 186;

                    ;% rtDW.nwvoc2qbhi
                    section.data(95).logicalSrcIdx = 94;
                    section.data(95).dtTransOffset = 188;

                    ;% rtDW.i4anicsdlp
                    section.data(96).logicalSrcIdx = 95;
                    section.data(96).dtTransOffset = 190;

                    ;% rtDW.dzcbloqfxn
                    section.data(97).logicalSrcIdx = 96;
                    section.data(97).dtTransOffset = 192;

                    ;% rtDW.gtnchonrqt
                    section.data(98).logicalSrcIdx = 97;
                    section.data(98).dtTransOffset = 194;

                    ;% rtDW.neu4z4k3zh
                    section.data(99).logicalSrcIdx = 98;
                    section.data(99).dtTransOffset = 196;

                    ;% rtDW.almtsxsx2x
                    section.data(100).logicalSrcIdx = 99;
                    section.data(100).dtTransOffset = 198;

                    ;% rtDW.d22nkhsvcq
                    section.data(101).logicalSrcIdx = 100;
                    section.data(101).dtTransOffset = 200;

                    ;% rtDW.jck4m5pgbr
                    section.data(102).logicalSrcIdx = 101;
                    section.data(102).dtTransOffset = 202;

                    ;% rtDW.pi4geflbil
                    section.data(103).logicalSrcIdx = 102;
                    section.data(103).dtTransOffset = 204;

                    ;% rtDW.fwwwpxbzit
                    section.data(104).logicalSrcIdx = 103;
                    section.data(104).dtTransOffset = 206;

                    ;% rtDW.b04oq4bx5u
                    section.data(105).logicalSrcIdx = 104;
                    section.data(105).dtTransOffset = 208;

                    ;% rtDW.pgyc3cwbqm
                    section.data(106).logicalSrcIdx = 105;
                    section.data(106).dtTransOffset = 210;

                    ;% rtDW.ggjxpiuipo
                    section.data(107).logicalSrcIdx = 106;
                    section.data(107).dtTransOffset = 212;

                    ;% rtDW.pupfb0ff3z
                    section.data(108).logicalSrcIdx = 107;
                    section.data(108).dtTransOffset = 214;

                    ;% rtDW.lyg0ydxsfk
                    section.data(109).logicalSrcIdx = 108;
                    section.data(109).dtTransOffset = 216;

                    ;% rtDW.ohr5hui1bl
                    section.data(110).logicalSrcIdx = 109;
                    section.data(110).dtTransOffset = 218;

                    ;% rtDW.e344jr03bi
                    section.data(111).logicalSrcIdx = 110;
                    section.data(111).dtTransOffset = 220;

                    ;% rtDW.laf2521crx
                    section.data(112).logicalSrcIdx = 111;
                    section.data(112).dtTransOffset = 222;

                    ;% rtDW.guf4m3y2dm
                    section.data(113).logicalSrcIdx = 112;
                    section.data(113).dtTransOffset = 224;

                    ;% rtDW.l2gtjhj3xf
                    section.data(114).logicalSrcIdx = 113;
                    section.data(114).dtTransOffset = 226;

                    ;% rtDW.gjpyow3o2w
                    section.data(115).logicalSrcIdx = 114;
                    section.data(115).dtTransOffset = 228;

                    ;% rtDW.mau3eoqryy
                    section.data(116).logicalSrcIdx = 115;
                    section.data(116).dtTransOffset = 230;

                    ;% rtDW.hupp4j0m4o
                    section.data(117).logicalSrcIdx = 116;
                    section.data(117).dtTransOffset = 232;

                    ;% rtDW.ld2i2uxibw
                    section.data(118).logicalSrcIdx = 117;
                    section.data(118).dtTransOffset = 234;

                    ;% rtDW.gbfwyom3pu
                    section.data(119).logicalSrcIdx = 118;
                    section.data(119).dtTransOffset = 236;

                    ;% rtDW.ko5cgda3dz
                    section.data(120).logicalSrcIdx = 119;
                    section.data(120).dtTransOffset = 238;

                    ;% rtDW.etynx02gax
                    section.data(121).logicalSrcIdx = 120;
                    section.data(121).dtTransOffset = 240;

                    ;% rtDW.cxhsztbbuk
                    section.data(122).logicalSrcIdx = 121;
                    section.data(122).dtTransOffset = 242;

                    ;% rtDW.bxdjvzwkae
                    section.data(123).logicalSrcIdx = 122;
                    section.data(123).dtTransOffset = 244;

                    ;% rtDW.k33zm0xawg
                    section.data(124).logicalSrcIdx = 123;
                    section.data(124).dtTransOffset = 246;

                    ;% rtDW.fvf5t3mulk
                    section.data(125).logicalSrcIdx = 124;
                    section.data(125).dtTransOffset = 248;

                    ;% rtDW.cd1qe3tjff
                    section.data(126).logicalSrcIdx = 125;
                    section.data(126).dtTransOffset = 250;

                    ;% rtDW.m1mthvfxm2
                    section.data(127).logicalSrcIdx = 126;
                    section.data(127).dtTransOffset = 252;

                    ;% rtDW.c4pbdtrzdg
                    section.data(128).logicalSrcIdx = 127;
                    section.data(128).dtTransOffset = 254;

                    ;% rtDW.aguvjvnwcs
                    section.data(129).logicalSrcIdx = 128;
                    section.data(129).dtTransOffset = 256;

                    ;% rtDW.dvnfith5mk
                    section.data(130).logicalSrcIdx = 129;
                    section.data(130).dtTransOffset = 258;

                    ;% rtDW.gfxt545ucq
                    section.data(131).logicalSrcIdx = 130;
                    section.data(131).dtTransOffset = 260;

                    ;% rtDW.mu1h11feuj
                    section.data(132).logicalSrcIdx = 131;
                    section.data(132).dtTransOffset = 262;

                    ;% rtDW.b3bb03oso4
                    section.data(133).logicalSrcIdx = 132;
                    section.data(133).dtTransOffset = 264;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 8;
            section.data(8)  = dumData; %prealloc

                    ;% rtDW.nyeyunwrpn
                    section.data(1).logicalSrcIdx = 133;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.dyjrad2nhz
                    section.data(2).logicalSrcIdx = 134;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.oaadel3wqa
                    section.data(3).logicalSrcIdx = 135;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.llks1f2ft3
                    section.data(4).logicalSrcIdx = 136;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.h4s4mcejgz
                    section.data(5).logicalSrcIdx = 137;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.l3cwpxdwso
                    section.data(6).logicalSrcIdx = 138;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.hvevr3t5qq
                    section.data(7).logicalSrcIdx = 139;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.maa2votoal
                    section.data(8).logicalSrcIdx = 140;
                    section.data(8).dtTransOffset = 7;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.h5n1lx5ovb
                    section.data(1).logicalSrcIdx = 141;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.ocs23gwlg2
                    section.data(1).logicalSrcIdx = 142;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section


            ;%
            ;% Non-auto Data (dwork)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        dworkMap.nTotData = nTotData;



    ;%
    ;% Add individual maps to base struct.
    ;%

    targMap.paramMap  = paramMap;
    targMap.signalMap = sigMap;
    targMap.dworkMap  = dworkMap;

    ;%
    ;% Add checksums to base struct.
    ;%


    targMap.checksum0 = 3018879780;
    targMap.checksum1 = 412162193;
    targMap.checksum2 = 3554751083;
    targMap.checksum3 = 2513192097;

