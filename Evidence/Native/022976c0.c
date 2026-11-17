/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel.<Jump>d__80$$MoveNext
bool Dino_BusSand_App_UI_BattleRoyaleScenePanel__Jump_d__80__MoveNext (Dino_BusSand_App_UI_BattleRoyaleScenePanel__Jump_d__80_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel.<Jump>d__80$$MoveNext
   bool Dino_BusSand_App_UI_BattleRoyaleScenePanel__Jump_d__80__MoveNext
   (Dino_BusSand_App_UI_BattleRoyaleScenePanel__Jump_d__80_o* __this, const MethodInfo* method); */

undefined8
Dino_BusSand_App_UI_BattleRoyaleScenePanel__Jump_d__80__MoveNext_21976c0
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
                    /* try { // try from 022976d0 to 023976d7 has its CatchHandler @ 0229774c */
  if ((bRam0000000004f9b9d5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caca88);
    bRam0000000004f9b9d5 = 1;
  }
  puVar3 = PTR_DAT_04caca88;
  puVar2 = PTR_DAT_04ca9ae8;
  fVar12 = _UNK_00e207cc;
  fVar10 = _UNK_00e1fea8;
  iVar1 = *(int *)(param_4 + 0x10);
  uVar5 = 0;
  if (iVar1 < 3) {
    if (iVar1 == 0) {
      uVar8 = *(undefined4 *)(param_4 + 0x20);
      *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
      uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
      UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(uVar8,uVar5,0);
      *(undefined8 *)(param_4 + 0x18) = uVar5;
      thunk_FUN_02134474((undefined8 *)(param_4 + 0x18),uVar5);
      uVar8 = 1;
      uVar5 = 1;
      goto LAB_02297cfc;
    }
    if (iVar1 == 1) {
      uVar5 = *(undefined8 *)(param_4 + 0x28);
      *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar6 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
      if ((uVar6 & 1) != 0) {
        return 0;
      }
      if (*(long *)(param_4 + 0x28) == 0) goto LAB_02297d1c;
      uVar8 = UnityEngine_Transform__get_localScale_43d1b0c(*(long *)(param_4 + 0x28),0);
      *(undefined4 *)(param_4 + 0x3c) = uVar8;
      *(undefined4 *)(param_4 + 0x40) = param_2;
      *(undefined4 *)(param_4 + 0x44) = param_3;
      if (*(long *)(param_4 + 0x28) == 0) goto LAB_02297d1c;
      uVar8 = UnityEngine_Transform__get_localPosition_43cfce8(*(long *)(param_4 + 0x28),0);
      *(undefined4 *)(param_4 + 0x48) = uVar8;
      *(undefined4 *)(param_4 + 0x4c) = param_2;
      *(undefined4 *)(param_4 + 0x50) = param_3;
      if (*(long *)(param_4 + 0x28) == 0) goto LAB_02297d1c;
      fVar12 = *(float *)(param_4 + 0x30);
      fVar10 = (float)UnityEngine_Transform__get_position_43d0e48(*(long *)(param_4 + 0x28),0);
      if (*(long *)(param_4 + 0x28) == 0) goto LAB_02297d1c;
      fVar14 = *(float *)(param_4 + 0x30);
      fVar15 = *(float *)(param_4 + 0x48);
      fVar13 = (float)UnityEngine_Transform__get_position_43d0e48(*(long *)(param_4 + 0x28),0);
      *(undefined4 *)(param_4 + 0x58) = 0;
      fVar9 = -20.0;
      if (0.0 <= fVar12 - fVar10) {
        fVar9 = 20.0;
      }
      fVar10 = -fVar9;
      if (fVar13 <= fVar14) {
        fVar10 = fVar9;
      }
      *(float *)(param_4 + 0x54) = fVar15 + fVar10;
LAB_02297894:
      uVar5 = *(undefined8 *)(param_4 + 0x28);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
      if ((uVar6 & 1) != 0) {
        fVar9 = *(float *)(param_4 + 0x58);
        fVar10 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
        fVar9 = fVar9 + fVar10;
        fVar12 = fVar9 / _UNK_00e207cc;
        *(float *)(param_4 + 0x58) = fVar9;
        fVar10 = 1.0;
        if (fVar12 <= 1.0) {
          fVar10 = fVar12;
        }
        fVar9 = 0.0;
        if (0.0 <= fVar12) {
          fVar9 = fVar10;
        }
        fVar12 = 2.0 - (fVar9 + fVar9);
                    /* try { // try from 02297914 to 02397943 has its CatchHandler @ 02297914
                       catch(type#1 @ 00000000) { ... } // from try @ 02297914 with catch @ 02297914
                       catch(type#1 @ 00000000) { ... } // from try @ 02297994 with catch @ 02297914
                        */
        fVar10 = fVar9 * (fVar9 + fVar9);
        if (0.5 <= fVar9) {
          fVar10 = fVar12 * fVar12 * -0.5 + 1.0;
        }
        if (*(long *)(param_4 + 0x28) == 0) goto LAB_02297d1c;
                    /* try { // try from 02297944 to 0239795f has its CatchHandler @ 02297988 */
        fVar12 = 1.0;
        if (fVar10 <= 1.0) {
          fVar12 = fVar10;
        }
        fVar13 = fVar10 * 4.0 * (1.0 - fVar10);
        fVar9 = 0.0;
        if (0.0 <= fVar10) {
          fVar9 = fVar12;
        }
                    /* try { // try from 02297964 to 0239796b has its CatchHandler @ 02297984 */
        UnityEngine_Transform__set_localPosition_43cfda8
                  (*(float *)(param_4 + 0x48) +
                   fVar9 * (*(float *)(param_4 + 0x54) - *(float *)(param_4 + 0x48)),
                   fVar13 * 40.0 + *(float *)(param_4 + 0x4c),*(undefined4 *)(param_4 + 0x50),
                   *(long *)(param_4 + 0x28),0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02297964 with catch @ 02297984
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02297944 with catch @ 02297988
                        */
        lVar7 = *(long *)(param_4 + 0x28);
                    /* try { // try from 0229798c to 02397993 has its CatchHandler @ 0229799c */
        uVar5 = *(undefined8 *)(param_4 + 0x3c);
                    /* try { // try from 02297994 to 0239799f has its CatchHandler @ 02297914 */
        fVar10 = *(float *)(param_4 + 0x44);
        if (cRam0000000004f9b65e == '\0') {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0229798c with catch @ 0229799c
                        */
                    /* try { // try from 022979a0 to 023979cb has its CatchHandler @ 022979a0
                       catch(type#1 @ 00000000) { ... } // from try @ 022979a0 with catch @ 022979a0
                       catch(type#1 @ 00000000) { ... } // from try @ 02297a8c with catch @ 022979a0
                        */
          FUN_02132f7c(PTR_DAT_04caa208);
          cRam0000000004f9b65e = '\x01';
        }
        if (lVar7 == 0) goto LAB_02297d1c;
                    /* try { // try from 022979cc to 023979db has its CatchHandler @ 02297a80 */
        uVar11 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0xc);
        fVar14 = *(float *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x14);
        fVar9 = (float)uVar11;
        fVar12 = (float)((ulong)uVar11 >> 0x20);
                    /* try { // try from 022979f4 to 023979fb has its CatchHandler @ 02297a7c */
        fVar12 = (float)((ulong)uVar5 >> 0x20) *
                 (fVar12 + ((float)((ulong)_UNK_00e6a438 >> 0x20) - fVar12) * fVar13);
        UnityEngine_Transform__set_localScale_43d1be0
                  (CONCAT44(fVar12,(float)uVar5 * (fVar9 + ((float)_UNK_00e6a438 - fVar9) * fVar13))
                   ,fVar12,fVar10 * (fVar14 + fVar13 * (1.0 - fVar14)),lVar7,0);
        *(undefined8 *)(param_4 + 0x18) = 0;
        thunk_FUN_02134474((undefined8 *)(param_4 + 0x18),0);
        uVar5 = 1;
        uVar8 = 2;
        goto LAB_02297cfc;
      }
    }
    else {
                    /* try { // try from 02297724 to 0239772b has its CatchHandler @ 02297748 */
      if (iVar1 != 2) {
        return 0;
      }
      *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
      if (*(float *)(param_4 + 0x58) < fVar12) goto LAB_02297894;
    }
    uVar5 = *(undefined8 *)(param_4 + 0x28);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02297a3c with catch @ 02297a78
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022979f4 with catch @ 02297a7c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022979cc with catch @ 02297a80
                        */
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
                    /* try { // try from 02297a84 to 02397a8b has its CatchHandler @ 02297a94 */
      thunk_FUN_0218fdac();
    }
                    /* try { // try from 02297a8c to 02397a97 has its CatchHandler @ 022979a0 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02297a84 with catch @ 02297a94
                        */
    uVar6 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
    if ((uVar6 & 1) != 0) {
      return 0;
    }
    if (*(long *)(param_4 + 0x28) == 0) goto LAB_02297d1c;
    fVar10 = *(float *)(param_4 + 0x40);
    fVar12 = *(float *)(param_4 + 0x44);
    UnityEngine_Transform__set_localScale_43d1be0
              (*(undefined4 *)(param_4 + 0x3c),*(long *)(param_4 + 0x28),0);
    if (*(long *)(param_4 + 0x28) == 0) goto LAB_02297d1c;
    fVar9 = (float)UnityEngine_Transform__get_position_43d0e48(*(long *)(param_4 + 0x28),0);
    cVar4 = cRam0000000004f9b9df;
    fVar13 = *(float *)(param_4 + 0x30);
    fVar15 = *(float *)(param_4 + 0x34);
    fVar14 = *(float *)(param_4 + 0x38);
    *(float *)(param_4 + 0x5c) = fVar9;
    *(float *)(param_4 + 0x60) = fVar10;
    *(float *)(param_4 + 100) = fVar12;
    if (cVar4 == '\0') {
      FUN_02132f7c(PTR_DAT_04caa200);
      cRam0000000004f9b9df = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    fVar10 = fVar10 - fVar15;
    fVar9 = fVar9 - fVar13;
    fVar12 = fVar12 - fVar14;
    *(undefined4 *)(param_4 + 0x58) = 0;
    *(float *)(param_4 + 0x68) =
         SQRT(fVar12 * fVar12 + fVar9 * fVar9 + fVar10 * fVar10) * _UNK_00e2098c;
LAB_02297b50:
    uVar5 = *(undefined8 *)(param_4 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
    if ((uVar6 & 1) != 0) {
      fVar9 = *(float *)(param_4 + 0x58);
      fVar10 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
      fVar9 = fVar9 + fVar10;
      fVar12 = fVar9 / _UNK_00e1fea8;
      *(float *)(param_4 + 0x58) = fVar9;
      fVar10 = 1.0;
      if (fVar12 <= 1.0) {
        fVar10 = fVar12;
      }
      fVar9 = 0.0;
      if (0.0 <= fVar12) {
        fVar9 = fVar10;
      }
      fVar12 = 2.0 - (fVar9 + fVar9);
      fVar10 = fVar9 * (fVar9 + fVar9);
      if (0.5 <= fVar9) {
        fVar10 = fVar12 * fVar12 * -0.5 + 1.0;
      }
      if (*(long *)(param_4 + 0x28) == 0) goto LAB_02297d1c;
      fVar12 = 1.0;
      if (fVar10 <= 1.0) {
        fVar12 = fVar10;
      }
      fVar9 = 0.0;
      if (0.0 <= fVar10) {
        fVar9 = fVar12;
      }
      UnityEngine_Transform__set_position_43d0f1c
                (*(float *)(param_4 + 0x5c) +
                 fVar9 * (*(float *)(param_4 + 0x30) - *(float *)(param_4 + 0x5c)),
                 *(float *)(param_4 + 0x60) +
                 fVar9 * (*(float *)(param_4 + 0x34) - *(float *)(param_4 + 0x60)) +
                 (1.0 - fVar10) * fVar10 * *(float *)(param_4 + 0x68) * 4.0,
                 *(float *)(param_4 + 100) +
                 fVar9 * (*(float *)(param_4 + 0x38) - *(float *)(param_4 + 100)),
                 *(long *)(param_4 + 0x28),0);
      *(undefined8 *)(param_4 + 0x18) = 0;
      thunk_FUN_02134474((undefined8 *)(param_4 + 0x18),0);
      uVar5 = 1;
      uVar8 = 3;
      goto LAB_02297cfc;
    }
  }
  else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022976d0 with catch @ 0229774c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022976a0 with catch @ 02297750
                        */
    if (iVar1 != 3) {
                    /* try { // try from 02297754 to 0239775b has its CatchHandler @ 02297764 */
      if (iVar1 == 4) {
        *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
                    /* try { // try from 02297a3c to 02397a43 has its CatchHandler @ 02297a78 */
        uVar5 = Dino_BusSand_App_UI_BattleRoyaleScenePanel__ScaleTo_21967d4
                          (0x3f800000,_UNK_00e205f8,0x3f800000,*(undefined4 *)(param_4 + 0x3c),
                           *(undefined4 *)(param_4 + 0x40),*(undefined4 *)(param_4 + 0x44),
                           *(undefined8 *)(param_4 + 0x28));
        *(undefined8 *)(param_4 + 0x18) = uVar5;
        thunk_FUN_02134474();
        uVar5 = 1;
        uVar8 = 5;
      }
      else {
                    /* try { // try from 0229775c to 02397767 has its CatchHandler @ 02297678 */
        if (iVar1 != 5) {
          return 0;
        }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02297754 with catch @ 02297764
                        */
        uVar8 = 0xffffffff;
      }
      goto LAB_02297cfc;
    }
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if (*(float *)(param_4 + 0x58) < fVar10) goto LAB_02297b50;
  }
  uVar5 = *(undefined8 *)(param_4 + 0x28);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
  if ((uVar6 & 1) != 0) {
    return 0;
  }
  if (*(long *)(param_4 + 0x28) == 0) {
LAB_02297d1c:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  UnityEngine_Transform__set_position_43d0f1c
            (*(undefined4 *)(param_4 + 0x30),*(undefined4 *)(param_4 + 0x34),
             *(undefined4 *)(param_4 + 0x38),*(long *)(param_4 + 0x28),0);
  uVar5 = Dino_BusSand_App_UI_BattleRoyaleScenePanel__ScaleTo_21967d4
                    (_UNK_00e200fc,_UNK_00e20174,_UNK_00e205fc,*(undefined4 *)(param_4 + 0x3c),
                     *(undefined4 *)(param_4 + 0x40),*(undefined4 *)(param_4 + 0x44),
                     *(undefined8 *)(param_4 + 0x28));
  *(undefined8 *)(param_4 + 0x18) = uVar5;
  thunk_FUN_02134474();
  uVar5 = 1;
  uVar8 = 4;
LAB_02297cfc:
  *(undefined4 *)(param_4 + 0x10) = uVar8;
  return uVar5;
}

