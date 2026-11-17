/* IL2CPP: Dino.BusSand.View.ChainRig$$Tug
void Dino_BusSand_View_ChainRig__Tug (Dino_BusSand_View_VehicleView_o* b, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.ChainRig$$Tug
   void Dino_BusSand_View_ChainRig__Tug (Dino_BusSand_View_VehicleView_o* b, const MethodInfo*
   method); */

void Dino_BusSand_View_ChainRig__Tug_2394b50
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  undefined *puVar10;
  long lVar11;
  int iVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  
  puVar10 = PTR_DAT_04cad568;
  if ((bRam0000000004f9c8d5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc100);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cab238);
    bRam0000000004f9c8d5 = 1;
  }
  if (*(int *)(*(long *)puVar10 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b94e == '\0') {
    FUN_02132f7c(PTR_DAT_04cad568);
    cRam0000000004f9b94e = '\x01';
  }
  lVar11 = *(long *)puVar10;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar11 = *(long *)puVar10;
  }
  puVar10 = PTR_DAT_04cab238;
  if (**(long **)(lVar11 + 0xb8) != 0) {
    Dino_BusSand_GameAudio__Mechanic_2384944(0,0,**(long **)(lVar11 + 0xb8),0xb,0);
  }
  if (*(int *)(*(long *)puVar10 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_Haptics__Play_2388ed8(1);
  puVar10 = PTR_DAT_04cbc100;
  if (param_4 != 0) {
    fVar23 = 0.0;
    Dino_BusSand_View_VehicleView__Kick_23fd8a0(_UNK_00e20aec,param_4,0);
    if (*(int *)(*(long *)puVar10 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9c95a == '\0') {
      FUN_02132f7c(PTR_DAT_04cbc100);
      cRam0000000004f9c95a = '\x01';
    }
    lVar11 = *(long *)puVar10;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar11 = *(long *)puVar10;
    }
    lVar11 = **(long **)(lVar11 + 0xb8);
    if (lVar11 == 0) {
                    /* catch() { ... } // from try @ 02494ce0 with catch @ 02494d5c */
      return;
    }
    if (*(long *)(param_4 + 0x38) != 0) {
                    /* try { // try from 02494cac to 02594cb3 has its CatchHandler @ 02494f60 */
      fVar14 = (float)UnityEngine_Transform__get_position_43d0e48(*(long *)(param_4 + 0x38),0);
      if (*(long *)(param_4 + 0x38) != 0) {
        fVar27 = param_3;
        fVar24 = fVar23;
                    /* try { // try from 02494cbc to 02594cbf has its CatchHandler @ 02494f5c */
                    /* try { // try from 02494cc8 to 02594ccf has its CatchHandler @ 02494f58 */
        fVar15 = (float)UnityEngine_Transform__get_forward_43d17f4(*(long *)(param_4 + 0x38),0);
                    /* try { // try from 02494ce0 to 02594ce7 has its CatchHandler @ 02494d5c */
        fVar16 = (float)Dino_BusSand_View_VehicleView__get_LengthWorld_23fefbc(param_4,0);
        if (*(long *)(param_4 + 0x38) != 0) {
          fVar28 = 0.5;
                    /* try { // try from 02494cfc to 02594d0b has its CatchHandler @ 02494d58 */
          fVar25 = fVar27 * fVar16 * 0.5;
          param_3 = param_3 + fVar25;
          fVar17 = (float)UnityEngine_Transform__get_forward_43d17f4(*(long *)(param_4 + 0x38),0);
          fVar9 = _UNK_00e2098c;
                    /* try { // try from 02494d1c to 02594d2b has its CatchHandler @ 02494d54 */
          fVar25 = fVar25 * _UNK_00e2098c;
          fVar17 = fVar17 * _UNK_00e2098c;
                    /* try { // try from 02494d3c to 02594d3f has its CatchHandler @ 02494f54 */
          fVar28 = fVar28 * _UNK_00e2098c;
          iVar12 = 3;
          fVar29 = param_3;
          plVar1 = (long *)PTR_DAT_04cbc100;
          uVar2 = _UNK_00e20994;
          fVar27 = _UNK_00e2098c;
          uVar3 = _UNK_00e2094c;
          fVar4 = _UNK_00e20754;
          uVar5 = _UNK_00e20390;
          uVar6 = _UNK_00e20178;
          uVar7 = _UNK_00e20094;
          uVar8 = _UNK_00e1fefc;
                    /* try { // try from 02494d48 to 02594d4b has its CatchHandler @ 02494d50 */
                    /* try { // try from 02494d4c to 02594d7b has its CatchHandler @ 02494ac4 */
                    /* catch() { ... } // from try @ 02494d48 with catch @ 02494d50 */
                    /* catch() { ... } // from try @ 02494d1c with catch @ 02494d54 */
                    /* catch() { ... } // from try @ 02494cfc with catch @ 02494d58 */
          if ((bRam0000000004f9c8f2 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cbc100);
            bRam0000000004f9c8f2 = 1;
            plVar1 = (long *)PTR_DAT_04cbc100;
            uVar2 = _UNK_00e20994;
            fVar27 = _UNK_00e2098c;
            uVar3 = _UNK_00e2094c;
            fVar4 = _UNK_00e20754;
            uVar5 = _UNK_00e20390;
            uVar6 = _UNK_00e20178;
            uVar7 = _UNK_00e20094;
            uVar8 = _UNK_00e1fefc;
          }
          do {
            fVar18 = (float)UnityEngine_Random__Range_43b64a8(uVar8,fVar27,0);
            fVar19 = (float)UnityEngine_Random__Range_43b64a8(uVar5,uVar7,0);
            fVar26 = fVar27;
            fVar20 = (float)UnityEngine_Random__Range_43b64a8(uVar8,fVar27,0);
            fVar31 = *(float *)(lVar11 + 0x58);
            uVar13 = *(undefined8 *)(lVar11 + 0x38);
            fVar21 = (float)UnityEngine_Random__get_insideUnitSphere_43b6598(0);
            fVar30 = *(float *)(lVar11 + 0x58);
            fVar22 = (float)UnityEngine_Random__Range_43b64a8(uVar2,uVar6,0);
            UnityEngine_Random__Range_43b64a8(uVar3,0x3f400000,0);
            UnityEngine_Random__Range_43b64e8(0,0x168,0);
            if (*(int *)(*plVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*plVar1);
            }
            fVar29 = param_3 + fVar30 * fVar29 * fVar4;
            Dino_BusSand_View_Fx__Emit_23988c0
                      (fVar14 + fVar15 * fVar16 * 0.5 + fVar30 * fVar21 * fVar4,
                       fVar23 + fVar24 * fVar16 * 0.5 + fVar30 * fVar26 * fVar4,fVar29,
                       fVar17 + fVar18 * fVar31,fVar25 + fVar19 * fVar31,fVar28 + fVar20 * fVar31,
                       fVar30 * fVar9 * fVar22,uVar13);
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

