/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$Section
void Dino_BusSand_Cheat_CheatManager__Section (Dino_BusSand_Cheat_CheatManager_o* __this, System_String_o* name, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$Section
   void Dino_BusSand_Cheat_CheatManager__Section (Dino_BusSand_Cheat_CheatManager_o* __this,
   System_String_o* name, const MethodInfo* method); */

void Dino_BusSand_Cheat_CheatManager__Section_2363af0
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5,
               undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR_DAT_04cba558;
  if ((bRam0000000004f9c742 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cba558);
    bRam0000000004f9c742 = 1;
  }
  UnityEngine_GUILayout__Space_440f478(0x40c00000,0);
                    /* try { // try from 02463b38 to 02563b3f has its CatchHandler @ 02463c28 */
  lVar10 = *(long *)puVar1;
  lVar9 = *(long *)(param_5 + 0xb0);
  lVar8 = *(long *)(lVar10 + 0x38);
  if (lVar8 == 0) {
    FUN_0216b4cc(lVar10);
    lVar8 = *(long *)(lVar10 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_0216b470();
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar8 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
                    /* try { // try from 02463b80 to 02563b83 has its CatchHandler @ 02463c10 */
                    /* try { // try from 02463b84 to 02563b97 has its CatchHandler @ 02463c14 */
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_0216b470();
  }
  puVar1 = PTR_DAT_04cba7a0;
                    /* try { // try from 02463b98 to 02563bbb has its CatchHandler @ 02463c1c */
  uVar7 = **(undefined8 **)(lVar8 + 0xb8);
  if ((bRam0000000004fa9a92 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cba7a0,lVar9,uVar7,0);
    bRam0000000004fa9a92 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar8 = UnityEngine_GUIContent__Temp_4407e64(param_6);
  puVar1 = PTR_DAT_04cf8d40;
  if ((bRam0000000004fa9a93 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cf8d40);
    FUN_02132f7c(PTR_DAT_04cba548);
    bRam0000000004fa9a93 = 1;
  }
  puVar2 = PTR_DAT_04cba548;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  fVar14 = (float)UnityEngine_GUILayoutUtility__GetRect_440efa8(lVar8,lVar9,uVar7);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04cc1368;
  if ((bRam0000000004fa99d3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc1368);
    FUN_02132f7c(PTR_DAT_04cba548);
    bRam0000000004fa99d3 = 1;
  }
  puVar2 = PTR_DAT_04cba548;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  UnityEngine_GUIUtility__CheckOnGUI_44078c8();
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  fVar12 = param_2;
  if ((bRam0000000004fa99e0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cba540);
    FUN_02132f7c(PTR_DAT_04cba548);
    bRam0000000004fa99e0 = 1;
  }
  puVar1 = PTR_DAT_04cf4608;
  if ((bRam0000000004fa9880 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cf4608);
    bRam0000000004fa9880 = 1;
  }
  lVar10 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
  if (lVar10 != 0) {
    iVar5 = UnityEngine_Event__get_type_44039d0(lVar10);
    if (iVar5 == 7) {
      fVar11 = (float)UnityEngine_Event__get_mousePosition_4402de4(lVar10);
      bVar3 = false;
      if (((fVar14 <= fVar11) && (fVar11 < fVar14 + param_3)) && (param_2 <= fVar12)) {
        bVar3 = fVar12 < param_2 + param_4;
      }
      if ((lVar9 == 0) ||
         (UnityEngine_GUIStyle__Internal_Draw_441624c(fVar14,lVar9,lVar8,bVar3,0,0,0), lVar8 == 0))
      goto LAB_04508338;
      bVar4 = System_String__IsNullOrEmpty_46d2084(*(undefined8 *)(lVar8 + 0x20),0);
      if ((bVar3 & (bVar4 ^ 1)) == 1) {
        fVar12 = (float)UnityEngine_GUIClip__get_visibleRect_440a7ec();
        fVar14 = param_2;
        fVar11 = (float)UnityEngine_Event__get_mousePosition_4402de4(lVar10);
        puVar1 = PTR_DAT_04cba540;
        if (((fVar12 <= fVar11) && (fVar11 < fVar12 + param_3)) &&
           ((param_2 <= fVar14 && (fVar14 < param_2 + param_4)))) {
          uVar7 = *(undefined8 *)(lVar8 + 0x20);
          if (*(int *)(*(long *)PTR_DAT_04cba540 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar6 = UnityEngine_GUIStyle__IsTooltipActive_440a834(uVar7);
          if ((uVar6 & 1) == 0) {
            uVar13 = UnityEngine_Event__get_mousePosition_4402de4(lVar10);
            if (cRam0000000004f9b948 == '\0') {
              FUN_02132f7c(PTR_DAT_04cacfc0);
              cRam0000000004f9b948 = '\x01';
            }
            puVar2 = PTR_DAT_04cba548;
            lVar9 = *(long *)PTR_DAT_04cba548;
            uVar7 = **(undefined8 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
            if (*(int *)(lVar9 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar9 = *(long *)puVar2;
            }
            lVar10 = *(long *)(lVar9 + 0xb8);
            *(undefined4 *)(lVar10 + 0x40) = uVar13;
            *(float *)(lVar10 + 0x44) = fVar14;
            *(undefined8 *)(lVar10 + 0x48) = uVar7;
          }
          else {
            lVar9 = *(long *)PTR_DAT_04cba548;
          }
          lVar8 = *(long *)(lVar8 + 0x20);
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          if ((bRam0000000004fa9b64 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cba540);
            FUN_02132f7c(PTR_DAT_04cf5680);
            FUN_02132f7c(PTR_DAT_04cd5630);
            bRam0000000004fa9b64 = 1;
          }
          uStack_60 = 0;
          uStack_58 = 0;
          if (lVar8 == 0) {
            uStack_60 = 0;
            uStack_58 = 0;
          }
          else if (*(int *)(lVar8 + 0x10) == 0) {
            uVar7 = System_UIntPtr__op_Explicit_488617c(1,0);
            uVar7 = System_UIntPtr__op_Explicit_4886184(uVar7,0);
            UnityEngine_Bindings_ManagedSpanWrapper___ctor_43c6140
                      (&stack0xffffffffffffffd0,uVar7,0,0);
            uStack_58 = 0;
            uStack_60 = 0;
          }
          else {
            if (cRam0000000004fa1b52 == '\0') {
              FUN_02132f7c(PTR_DAT_04cc73d8);
              cRam0000000004fa1b52 = '\x01';
            }
            System_String__GetRawStringData_46cfab8(lVar8,0);
            uVar13 = *(undefined4 *)(lVar8 + 0x10);
            uVar7 = System_ReadOnlySpan_char___GetPinnableReference_2de139c
                              (&stack0xffffffffffffffb0,*(undefined8 *)PTR_DAT_04cf5680);
            UnityEngine_Bindings_ManagedSpanWrapper___ctor_43c6140(&uStack_60,uVar7,uVar13,0);
          }
          if (*(int *)(*(long *)PTR_DAT_04cba540 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          if (pcRam0000000004fa9cc8 == (code *)0x0) {
            pcRam0000000004fa9cc8 = (code *)FUN_02132f40(&UNK_00e24bcc);
          }
          (*pcRam0000000004fa9cc8)(&uStack_60,&stack0xffffffffffffffc0);
          return;
        }
      }
    }
    return;
  }
LAB_04508338:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

