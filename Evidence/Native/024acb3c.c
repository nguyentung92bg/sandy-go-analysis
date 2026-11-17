/* IL2CPP: Dino.BusSand.View.GameView.<FireworkShow>d__230$$MoveNext
bool Dino_BusSand_View_GameView__FireworkShow_d__230__MoveNext (Dino_BusSand_View_GameView__FireworkShow_d__230_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GameView.<FireworkShow>d__230$$MoveNext
   bool Dino_BusSand_View_GameView__FireworkShow_d__230__MoveNext
   (Dino_BusSand_View_GameView__FireworkShow_d__230_o* __this, const MethodInfo* method); */

undefined8
Dino_BusSand_View_GameView__FireworkShow_d__230__MoveNext_23acb3c
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  float fVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  undefined4 uVar26;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
                    /* try { // try from 024acb6c to 025ace07 has its CatchHandler @ 024acb6c
                       catch() { ... } // from try @ 024acb6c with catch @ 024acb6c
                       catch() { ... } // from try @ 024aceb0 with catch @ 024acb6c
                       catch() { ... } // from try @ 024ad06c with catch @ 024acb6c
                       catch() { ... } // from try @ 024ad228 with catch @ 024acb6c
                       catch() { ... } // from try @ 024ad3dc with catch @ 024acb6c
                       catch() { ... } // from try @ 024ad560 with catch @ 024acb6c
                       catch() { ... } // from try @ 024ad68c with catch @ 024acb6c
                       catch() { ... } // from try @ 024ad868 with catch @ 024acb6c
                       catch() { ... } // from try @ 024ad890 with catch @ 024acb6c
                       catch() { ... } // from try @ 024ad8cc with catch @ 024acb6c
                       catch() { ... } // from try @ 024ad8e4 with catch @ 024acb6c
                       catch() { ... } // from try @ 024ad91c with catch @ 024acb6c
                       catch() { ... } // from try @ 024ad934 with catch @ 024acb6c
                       catch() { ... } // from try @ 024ad980 with catch @ 024acb6c
                       catch() { ... } // from try @ 024ad9d0 with catch @ 024acb6c
                       catch() { ... } // from try @ 024ada20 with catch @ 024acb6c
                       catch() { ... } // from try @ 024ada70 with catch @ 024acb6c */
  if ((bRam0000000004f9c962 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2870);
    FUN_02132f7c(PTR_DAT_04cbbf98);
    FUN_02132f7c(PTR_DAT_04cbbfa8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbc738);
    FUN_02132f7c(PTR_DAT_04cbc740);
    FUN_02132f7c(PTR_DAT_04caaa78);
    bRam0000000004f9c962 = 1;
  }
  puVar6 = PTR_DAT_04cbbfa8;
  puVar5 = PTR_DAT_04cb2870;
  iVar1 = *(int *)(param_4 + 0x10);
  uVar9 = 0;
  if (iVar1 == 2) {
    uVar16 = 0xffffffff;
LAB_024ad118:
    *(undefined4 *)(param_4 + 0x10) = uVar16;
  }
  else {
    lVar13 = *(long *)(param_4 + 0x20);
    if (iVar1 == 1) {
      *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
      goto LAB_024ad080;
    }
    if (iVar1 == 0) {
      *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
      puVar4 = PTR_DAT_04ca9ae8;
      if (lVar13 == 0) {
LAB_024ad148:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar9 = *(undefined8 *)(lVar13 + 0x38);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar10 = UnityEngine_Object__op_Equality_43c6f30(uVar9,0,0);
      if ((uVar10 & 1) == 0) {
        uVar9 = *(undefined8 *)(lVar13 + 0xb0);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar10 = UnityEngine_Object__op_Equality_43c6f30(uVar9,0,0);
        if (((uVar10 & 1) == 0) && (*(long *)(lVar13 + 0x30) != 0)) {
          lVar11 = *(long *)(lVar13 + 0x38);
          *(undefined4 *)(param_4 + 0x30) = *(undefined4 *)(lVar13 + 0x248);
          if (lVar11 != 0) {
            lVar14 = *(long *)(lVar13 + 0xb0);
            lVar11 = UnityEngine_Component__get_transform_43bcd18(lVar11,0);
            if ((lVar11 != 0) &&
               (uVar16 = UnityEngine_Transform__get_up_43d16f4(lVar11,0), lVar14 != 0)) {
              *(undefined4 *)(lVar14 + 0x180) = uVar16;
              *(undefined4 *)(lVar14 + 0x184) = param_2;
              *(undefined4 *)(lVar14 + 0x188) = param_3;
              if (*(long *)(lVar13 + 0x38) != 0) {
                lVar11 = UnityEngine_Component__get_transform_43bcd18(*(long *)(lVar13 + 0x38),0);
                fVar23 = _UNK_00e200f8;
                fVar12 = 3.4028235e+38;
                uVar15 = 0;
                do {
                  if (uVar15 < 4) {
                    fVar19 = 1.0;
                    uVar2 = 0;
                    if (uVar15 != 3) {
                      fVar19 = 0.0;
                      uVar2 = uVar15;
                    }
                    fVar22 = (float)(int)uVar2;
                    fVar25 = fVar23;
                  }
                  else {
                    fVar25 = 0.0;
                    uVar2 = (uVar15 & 0xff) / 3;
                    fVar19 = (float)uVar2;
                    fVar22 = (float)(uVar15 - (uVar2 * 2 + (uVar15 & 0xff) / 3) & 0xff);
                  }
                  if (*(long *)(lVar13 + 0x30) == 0) goto LAB_024ad148;
                  fVar19 = fVar19 * 0.5;
                  fVar22 = (float)Dino_BusSand_View_StageLayout__BoardPoint_23e89d4
                                            (fVar22 * 0.5,*(long *)(lVar13 + 0x30),0);
                  if (lVar11 == 0) goto LAB_024ad148;
                  fVar20 = fVar19;
                  fVar21 = fVar25;
                  fVar17 = (float)UnityEngine_Transform__get_position_43d0e48(lVar11,0);
                  fVar19 = fVar19 - fVar20;
                  fVar25 = fVar25 - fVar21;
                  fVar18 = (float)UnityEngine_Transform__get_forward_43d17f4(lVar11,0);
                  uVar15 = uVar15 + 1;
                  fVar19 = fVar25 * fVar21 + (fVar22 - fVar17) * fVar18 + fVar19 * fVar20;
                  if (fVar19 <= fVar12) {
                    fVar12 = fVar19;
                  }
                } while (uVar15 != 9);
                uVar9 = *(undefined8 *)PTR_DAT_04cbc738;
                *(float *)(lVar13 + 0x24c) = fVar12 * _UNK_00e1fea8;
                lVar11 = FUN_02133068(uVar9,7);
                puVar4 = PTR_DAT_04cbc740;
                uStack_a0 = 0;
                uStack_98 = 0;
                uVar9 = System_ValueTuple_float__float__float__Int32Enum____ctor_3120a50
                                  (_UNK_00e20390,_UNK_00e205e8,_UNK_00e20754,&uStack_a0,0,
                                   *(undefined8 *)PTR_DAT_04cbc740);
                uVar16 = _UNK_00e207cc;
                fVar23 = _UNK_00e200f8;
                if (lVar11 != 0) {
                  if (*(int *)(lVar11 + 0x18) != 0) {
                    /* try { // try from 024ace08 to 025ace2f has its CatchHandler @ 024ada88 */
                    *(undefined8 *)(lVar11 + 0x28) = uStack_98;
                    *(undefined8 *)(lVar11 + 0x20) = uStack_a0;
                    uStack_b0 = 0;
                    uStack_a8 = 0;
                    uVar9 = System_ValueTuple_float__float__float__Int32Enum____ctor_3120a50
                                      (fVar23,_UNK_00e1ffcc,uVar16,&uStack_b0,0,
                                       *(undefined8 *)puVar4);
                    if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0) {
                      *(undefined8 *)(lVar11 + 0x38) = uStack_a8;
                      *(undefined8 *)(lVar11 + 0x30) = uStack_b0;
                    /* try { // try from 024ace6c to 025ace93 has its CatchHandler @ 024ada84 */
                      uStack_c0 = 0;
                      uStack_b8 = 0;
                      uVar9 = System_ValueTuple_float__float__float__Int32Enum____ctor_3120a50
                                        (_UNK_00e20324,fVar23,_UNK_00e201f0,&uStack_c0,1,
                                         *(undefined8 *)puVar4);
                      if (2 < *(uint *)(lVar11 + 0x18)) {
                    /* try { // try from 024ace98 to 025aceaf has its CatchHandler @ 024ada7c */
                        *(undefined8 *)(lVar11 + 0x48) = uStack_b8;
                        *(undefined8 *)(lVar11 + 0x40) = uStack_c0;
                        uStack_d0 = 0;
                        uStack_c8 = 0;
                        uVar9 = System_ValueTuple_float__float__float__Int32Enum____ctor_3120a50
                                          (_UNK_00e20258,_UNK_00e1fe68,uVar16,&uStack_d0,2,
                                           *(undefined8 *)puVar4);
                        uVar7 = _UNK_00e20a20;
                        uVar16 = _UNK_00e2098c;
                    /* try { // try from 024aceb0 to 025acfcb has its CatchHandler @ 024acb6c */
                        if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc) != 0) {
                          *(undefined8 *)(lVar11 + 0x58) = uStack_c8;
                          *(undefined8 *)(lVar11 + 0x50) = uStack_d0;
                          uStack_e0 = 0;
                          uStack_d8 = 0;
                          uVar9 = System_ValueTuple_float__float__float__Int32Enum____ctor_3120a50
                                            (0x3f000000,uVar7,uVar16,&uStack_e0,4,
                                             *(undefined8 *)puVar4);
                          uVar16 = _UNK_00e20994;
                          if (4 < *(uint *)(lVar11 + 0x18)) {
                            *(undefined8 *)(lVar11 + 0x68) = uStack_d8;
                            *(undefined8 *)(lVar11 + 0x60) = uStack_e0;
                            uStack_f0 = 0;
                            uStack_e8 = 0;
                            uVar9 = System_ValueTuple_float__float__float__Int32Enum____ctor_3120a50
                                              (_UNK_00e1ff68,uVar16,_UNK_00e20a94,&uStack_f0,3,
                                               *(undefined8 *)puVar4);
                            if (5 < *(uint *)(lVar11 + 0x18)) {
                              *(undefined8 *)(lVar11 + 0x78) = uStack_e8;
                              *(undefined8 *)(lVar11 + 0x70) = uStack_f0;
                              uStack_100 = 0;
                              uStack_f8 = 0;
                              uVar9 = System_ValueTuple_float__float__float__Int32Enum____ctor_3120a50
                                                (_UNK_00e203ec,uVar16,0,&uStack_100,3,
                                                 *(undefined8 *)puVar4);
                              if (6 < *(uint *)(lVar11 + 0x18)) {
                                *(undefined8 *)(lVar11 + 0x88) = uStack_f8;
                                *(undefined8 *)(lVar11 + 0x80) = uStack_100;
                                *(long *)(param_4 + 0x38) = lVar11;
                                uVar9 = thunk_FUN_02134474((long *)(param_4 + 0x38),lVar11);
                                uVar15 = 0;
                                *(undefined4 *)(param_4 + 0x40) = 0;
                                while (lVar11 = *(long *)(param_4 + 0x38), lVar11 != 0) {
                                  if ((int)*(uint *)(lVar11 + 0x18) <= (int)uVar15) {
                                    uVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caaa78);
                                    UnityEngine_WaitForSeconds___ctor_43ca4f4(_UNK_00e200f8,uVar9,0)
                                    ;
                                    *(undefined8 *)(param_4 + 0x18) = uVar9;
                                    thunk_FUN_02134474((undefined8 *)(param_4 + 0x18),uVar9);
                                    uVar9 = 1;
                                    uVar16 = 2;
                                    goto LAB_024ad118;
                                  }
                                  if (lVar13 == 0) break;
                                  if (*(int *)(param_4 + 0x30) != *(int *)(lVar13 + 0x248))
                                  goto LAB_024acfb0;
                    /* try { // try from 024acfcc to 025acff3 has its CatchHandler @ 024ada38 */
                                  if (*(uint *)(lVar11 + 0x18) <= uVar15) goto LAB_024ad14c;
                                  lVar14 = *(long *)(param_4 + 0x28);
                                  if (lVar14 == 0) break;
                                  iVar1 = *(int *)(lVar14 + 0x18);
                                  lVar11 = lVar11 + (long)(int)uVar15 * 0x10;
                                  iVar3 = 0;
                                  if (iVar1 != 0) {
                                    iVar3 = (int)uVar15 / iVar1;
                                  }
                                  uVar24 = *(undefined4 *)(lVar11 + 0x20);
                                  uVar26 = *(undefined4 *)(lVar11 + 0x24);
                                  uVar16 = *(undefined4 *)(lVar11 + 0x2c);
                                  fVar23 = *(float *)(lVar11 + 0x28);
                                  uVar7 = System_Collections_Generic_List_byte___get_Item_39fa834
                                                    (lVar14,uVar15 - iVar3 * iVar1,
                                                     *(undefined8 *)puVar6);
                                  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                                    thunk_FUN_0218fdac(*(long *)puVar5);
                                  }
                                  uVar7 = Dino_BusSand_View_GameView__FireColor_23a91ac(uVar7,0);
                    /* try { // try from 024ad030 to 025ad05b has its CatchHandler @ 024ada34 */
                                  uVar7 = Dino_BusSand_View_GameView__Vivid_23a906c
                                                    (uVar7,*(undefined4 *)(param_4 + 0x40),0);
                                  uVar8 = Dino_BusSand_View_GameView__Accent_23a9a30
                                                    (uVar7,*(undefined4 *)(param_4 + 0x40),0);
                    /* try { // try from 024ad064 to 025ad06b has its CatchHandler @ 024ada2c */
                                  uVar9 = Dino_BusSand_View_GameView__ShowRocket_23a9fc4
                                                    (uVar24,uVar26,lVar13,uVar7,uVar8,uVar16,0);
                    /* try { // try from 024ad06c to 025ad17f has its CatchHandler @ 024acb6c */
                                  uVar9 = UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4
                                                    (lVar13,uVar9,0);
                                  if (0.0 < fVar23) {
                                    uVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caaa78);
                                    UnityEngine_WaitForSeconds___ctor_43ca4f4(fVar23,uVar9,0);
                                    *(undefined8 *)(param_4 + 0x18) = uVar9;
                                    thunk_FUN_02134474((undefined8 *)(param_4 + 0x18),uVar9);
                                    uVar16 = 1;
                                    uVar9 = 1;
                                    goto LAB_024ad118;
                                  }
LAB_024ad080:
                                  uVar15 = *(int *)(param_4 + 0x40) + 1;
                                  *(uint *)(param_4 + 0x40) = uVar15;
                                }
                                goto LAB_024ad148;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
LAB_024ad14c:
                    /* WARNING: Subroutine does not return */
                  FUN_0213322c(uVar9);
                }
              }
            }
          }
          goto LAB_024ad148;
        }
      }
LAB_024acfb0:
      uVar9 = 0;
    }
  }
  return uVar9;
}

