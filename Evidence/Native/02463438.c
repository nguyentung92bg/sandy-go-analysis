/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$StatusLine
System_String_o* Dino_BusSand_Cheat_CheatManager__StatusLine (Dino_BusSand_Cheat_CheatManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$StatusLine
   System_String_o* Dino_BusSand_Cheat_CheatManager__StatusLine (Dino_BusSand_Cheat_CheatManager_o*
   __this, const MethodInfo* method); */

undefined8 Dino_BusSand_Cheat_CheatManager__StatusLine_2363438(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  puVar3 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c741 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cac868);
    FUN_02132f7c(PTR_DAT_04cacb18);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caba68);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cba818);
    FUN_02132f7c(PTR_DAT_04cba820);
    FUN_02132f7c(PTR_DAT_04cba828);
    FUN_02132f7c(PTR_DAT_04cba830);
    FUN_02132f7c(PTR_DAT_04cba838);
    FUN_02132f7c(PTR_DAT_04cba840);
    FUN_02132f7c(PTR_DAT_04cabd10);
    FUN_02132f7c(PTR_DAT_04cba2c8);
    FUN_02132f7c(PTR_DAT_04cba848);
    FUN_02132f7c(PTR_DAT_04cae4e8);
    FUN_02132f7c(PTR_DAT_04cba850);
    FUN_02132f7c(PTR_DAT_04cb4e40);
    FUN_02132f7c(PTR_DAT_04cba858);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cba860);
    bRam0000000004f9c741 = 1;
  }
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_44 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar6 = *(long *)puVar3;
  }
  puVar2 = PTR_DAT_04caba50;
  if (*(long *)(*(long *)(lVar6 + 0xb8) + 0x10) == 0) {
    return *(undefined8 *)PTR_DAT_04cba840;
  }
  if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88f == '\0') {
    FUN_02132f7c(PTR_DAT_04caba50);
    cRam0000000004f9b88f = '\x01';
  }
  puVar4 = PTR_DAT_04cac868;
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar6 = *(long *)puVar2;
  }
  lVar6 = **(long **)(lVar6 + 0xb8);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar4);
  }
  if (cRam0000000004f9bcf9 == '\0') {
    FUN_02132f7c(PTR_DAT_04cac868);
    cRam0000000004f9bcf9 = '\x01';
  }
  puVar2 = PTR_DAT_04ca9ae8;
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar4;
  }
  lVar11 = *(long *)puVar2;
  lVar7 = **(long **)(lVar7 + 0xb8);
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar11);
  }
  uVar8 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
  if ((uVar8 & 1) == 0) goto LAB_02463748;
  if (lVar6 == 0) goto LAB_02463aec;
  if (*(char *)(lVar6 + 0x38) == '\0') {
LAB_02463748:
    puVar2 = PTR_DAT_04cba820;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uStack_34 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
    uVar9 = System_Int32__ToString_482d750(&uStack_34,0);
                    /* try { // try from 02463778 to 0256377f has its CatchHandler @ 024637c0 */
                    /* try { // try from 02463780 to 025637bb has its CatchHandler @ 02463304 */
    uVar9 = System_String__Concat_46c82e0(*(undefined8 *)puVar2,uVar9,0);
  }
  else {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar8 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
    if ((uVar8 & 1) == 0) goto LAB_02463748;
    if (lVar7 == 0) goto LAB_02463aec;
    uStack_34 = *(undefined4 *)(lVar7 + 0x28);
    uVar9 = System_Int32__ToString_482d750(&uStack_34,0);
    uStack_50 = *(undefined4 *)(lVar7 + 0x20);
    uStack_60 = *(undefined8 *)PTR_DAT_04caba68;
    uStack_58 = 0xffffffffffffffff;
                    /* try { // try from 02463714 to 0256371b has its CatchHandler @ 024637c4 */
    uVar10 = System_Enum__ToString_4863070(&uStack_60,0);
    uVar9 = System_String__Concat_46d30e8
                      (*(undefined8 *)PTR_DAT_04cb4e40,uVar9,*(undefined8 *)PTR_DAT_04cba2c8,uVar10,
                       0);
  }
  lVar6 = FUN_02133068(*(undefined8 *)PTR_DAT_04caa038,0xf);
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x18) != 0) {
                    /* try { // try from 024637bc to 025637bf has its CatchHandler @ 024637c8 */
      *(undefined8 *)(lVar6 + 0x20) = uVar9;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02463778 with catch @ 024637c0
                       try { // try from 024637c0 to 025637e3 has its CatchHandler @ 02463304 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02463714 with catch @ 024637c4
                        */
      thunk_FUN_02134474((undefined8 *)(lVar6 + 0x20),uVar9);
      puVar2 = PTR_DAT_04cacb18;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024637bc with catch @ 024637c8
                        */
      if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
                    /* try { // try from 024637e4 to 025637e7 has its CatchHandler @ 02463808 */
                    /* try { // try from 024637e8 to 0256380b has its CatchHandler @ 02463304 */
        *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)PTR_DAT_04cba828;
        thunk_FUN_02134474();
        uVar5 = uStack_34;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
                    /* catch() { ... } // from try @ 024637e4 with catch @ 02463808 */
                    /* try { // try from 0246380c to 02563813 has its CatchHandler @ 0246381c */
        uStack_38 = Dino_BusSand_App_Levels_LevelDatabase__DesignLevelId_229ad40(uVar5,0);
                    /* try { // try from 02463814 to 0256381f has its CatchHandler @ 02463304 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0246380c with catch @ 0246381c
                        */
                    /* try { // try from 02463820 to 025638b7 has its CatchHandler @ 02463820
                       catch() { ... } // from try @ 02463820 with catch @ 02463820
                       catch() { ... } // from try @ 024638c0 with catch @ 02463820
                       catch() { ... } // from try @ 02463914 with catch @ 02463820
                       catch() { ... } // from try @ 02463940 with catch @ 02463820
                       catch() { ... } // from try @ 0246396c with catch @ 02463820 */
        uVar9 = System_Int32__ToString_482d750(&uStack_38,0);
        if (2 < *(uint *)(lVar6 + 0x18)) {
          *(undefined8 *)(lVar6 + 0x30) = uVar9;
          thunk_FUN_02134474((undefined8 *)(lVar6 + 0x30),uVar9);
          puVar2 = PTR_DAT_04cae4e8;
          if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar6 + 0x38) = *(undefined8 *)PTR_DAT_04cba830;
            thunk_FUN_02134474();
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uStack_40 = Dino_BusSand_App_Meta_Profile__Count_225b150(0x3e9,0);
            uVar9 = System_Int64__ToString_482ec3c(&uStack_40,*(undefined8 *)puVar2,0);
            if (4 < *(uint *)(lVar6 + 0x18)) {
              *(undefined8 *)(lVar6 + 0x40) = uVar9;
                    /* try { // try from 024638b8 to 025638bf has its CatchHandler @ 02463920 */
              thunk_FUN_02134474((undefined8 *)(lVar6 + 0x40),uVar9);
                    /* try { // try from 024638c0 to 0256390b has its CatchHandler @ 02463820 */
              if (5 < *(uint *)(lVar6 + 0x18)) {
                *(undefined8 *)(lVar6 + 0x48) = *(undefined8 *)PTR_DAT_04cba860;
                thunk_FUN_02134474((undefined8 *)(lVar6 + 0x48));
                uStack_38 = Dino_BusSand_App_Meta_Profile__get_Hearts_22724e0(0);
                uVar9 = System_Int32__ToString_482d750(&uStack_38,0);
                if (6 < *(uint *)(lVar6 + 0x18)) {
                    /* try { // try from 0246390c to 0256390f has its CatchHandler @ 0246391c */
                    /* try { // try from 02463910 to 02563913 has its CatchHandler @ 02463918 */
                    /* try { // try from 02463914 to 0256393b has its CatchHandler @ 02463820 */
                  *(undefined8 *)(lVar6 + 0x50) = uVar9;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02463910 with catch @ 02463918
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0246390c with catch @ 0246391c
                        */
                  thunk_FUN_02134474((undefined8 *)(lVar6 + 0x50),uVar9);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024638b8 with catch @ 02463920
                        */
                  if ((*(uint *)(lVar6 + 0x18) & 0xfffffff8) != 0) {
                    /* try { // try from 0246393c to 0256393f has its CatchHandler @ 02463960 */
                    *(undefined8 *)(lVar6 + 0x58) = *(undefined8 *)PTR_DAT_04cabd10;
                    /* try { // try from 02463940 to 02563963 has its CatchHandler @ 02463820 */
                    thunk_FUN_02134474((undefined8 *)(lVar6 + 0x58));
                    uStack_38 = Dino_BusSand_App_Meta_Profile__get_MaxHearts_226f4d0(0);
                    uVar9 = System_Int32__ToString_482d750(&uStack_38,0);
                    /* catch() { ... } // from try @ 0246393c with catch @ 02463960 */
                    /* try { // try from 02463964 to 0256396b has its CatchHandler @ 02463974 */
                    if (8 < *(uint *)(lVar6 + 0x18)) {
                    /* try { // try from 0246396c to 02563977 has its CatchHandler @ 02463820 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02463964 with catch @ 02463974
                        */
                      *(undefined8 *)(lVar6 + 0x60) = uVar9;
                      thunk_FUN_02134474((undefined8 *)(lVar6 + 0x60),uVar9);
                      if (9 < *(uint *)(lVar6 + 0x18)) {
                        *(undefined8 *)(lVar6 + 0x68) = *(undefined8 *)PTR_DAT_04cba858;
                        thunk_FUN_02134474((undefined8 *)(lVar6 + 0x68));
                        uStack_44 = Dino_BusSand_Cheat_CheatManager__get_Speed_236479c(param_1);
                        uVar9 = System_Single__ToString_48425d0(&uStack_44,0);
                        if (10 < *(uint *)(lVar6 + 0x18)) {
                          *(undefined8 *)(lVar6 + 0x70) = uVar9;
                          thunk_FUN_02134474((undefined8 *)(lVar6 + 0x70),uVar9);
                          puVar3 = PTR_DAT_04ca9c30;
                          if (0xb < *(uint *)(lVar6 + 0x18)) {
                            puVar1 = (undefined8 *)PTR_DAT_04ca9c30;
                            if (*(char *)(param_1 + 0x138) != '\0') {
                              puVar1 = (undefined8 *)PTR_DAT_04cba818;
                            }
                            *(undefined8 *)(lVar6 + 0x78) = *puVar1;
                            thunk_FUN_02134474((undefined8 *)(lVar6 + 0x78));
                            if (0xc < *(uint *)(lVar6 + 0x18)) {
                              puVar1 = (undefined8 *)puVar3;
                              if (*(char *)(param_1 + 0x141) != '\0') {
                                puVar1 = (undefined8 *)PTR_DAT_04cba850;
                              }
                              *(undefined8 *)(lVar6 + 0x80) = *puVar1;
                              thunk_FUN_02134474((undefined8 *)(lVar6 + 0x80));
                              if (0xd < *(uint *)(lVar6 + 0x18)) {
                                puVar1 = (undefined8 *)puVar3;
                                if (*(char *)(param_1 + 0x38) != '\0') {
                                  puVar1 = (undefined8 *)PTR_DAT_04cba838;
                                }
                    /* try { // try from 02463a74 to 02563b37 has its CatchHandler @ 02463a74
                       catch() { ... } // from try @ 02463a74 with catch @ 02463a74
                       catch() { ... } // from try @ 02463bbc with catch @ 02463a74
                       catch() { ... } // from try @ 02463c08 with catch @ 02463a74
                       catch() { ... } // from try @ 02463c10 with catch @ 02463a74
                       catch() { ... } // from try @ 02463c48 with catch @ 02463a74
                       catch() { ... } // from try @ 02463c6c with catch @ 02463a74 */
                                *(undefined8 *)(lVar6 + 0x88) = *puVar1;
                                thunk_FUN_02134474((undefined8 *)(lVar6 + 0x88));
                                uVar8 = Dino_BusSand_Cheat_CheatManager__get_Creative_235c6f4
                                                  (param_1);
                                if (0xe < *(uint *)(lVar6 + 0x18)) {
                                  puVar1 = (undefined8 *)PTR_DAT_04cba848;
                                  if ((uVar8 & 1) == 0) {
                                    puVar1 = (undefined8 *)puVar3;
                                  }
                                  *(undefined8 *)(lVar6 + 0x90) = *puVar1;
                                  thunk_FUN_02134474();
                                  uVar9 = System_String__Concat_46d31f0(lVar6,0);
                                  return uVar9;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
LAB_02463aec:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

