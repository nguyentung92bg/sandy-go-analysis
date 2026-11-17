/* IL2CPP: Dino.BusSand.App.UI.GuideDimHoles$$LateUpdate
void Dino_BusSand_App_UI_GuideDimHoles__LateUpdate (Dino_BusSand_App_UI_GuideDimHoles_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.GuideDimHoles$$LateUpdate
   void Dino_BusSand_App_UI_GuideDimHoles__LateUpdate (Dino_BusSand_App_UI_GuideDimHoles_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_GuideDimHoles__LateUpdate_22c6920(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  bool bVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c35c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb68f0);
    FUN_02132f7c(PTR_DAT_04cad708);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb6960);
                    /* catch() { ... } // from try @ 023c681c with catch @ 023c6988 */
    FUN_02132f7c(PTR_DAT_04cb68b8);
                    /* try { // try from 023c698c to 024c6993 has its CatchHandler @ 023c699c */
                    /* try { // try from 023c6994 to 024c699f has its CatchHandler @ 023c6654 */
    FUN_02132f7c(PTR_DAT_04cb6968);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 023c698c with catch @ 023c699c
                        */
    FUN_02132f7c(PTR_DAT_04cb6970);
    FUN_02132f7c(PTR_DAT_04cb6978);
    bRam0000000004f9c35c = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  uStack_50 = 0;
  uStack_48 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    fVar16 = *(float *)(param_1 + 0x48);
    fVar12 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
    fVar16 = fVar16 - fVar12;
    *(float *)(param_1 + 0x48) = fVar16;
    if (fVar16 <= 0.0) {
      *(undefined4 *)(param_1 + 0x48) = 0x3e800000;
      Dino_BusSand_App_UI_GuideDimHoles__ClearTargets_22c5e74(param_1);
      lVar6 = *(long *)(param_1 + 0x38);
      if (lVar6 == 0) goto LAB_023c6ca8;
      uVar7 = (**(code **)(lVar6 + 0x18))
                        (*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
      Dino_BusSand_App_UI_GuideDimHoles__AddTargets_22c5f54(param_1,uVar7);
    }
  }
  fVar18 = *(float *)(param_1 + 0x40);
  fVar16 = *(float *)(param_1 + 0x44);
  fVar12 = fVar16;
  if (cRam0000000004f9c305 == '\0') {
    FUN_02132f7c(PTR_DAT_04cb5bf8);
    fVar12 = *(float *)(param_1 + 0x44);
    cRam0000000004f9c305 = '\x01';
  }
  fVar13 = ABS(fVar18);
  fVar17 = ABS(fVar16);
  if (ABS(fVar16) <= fVar13) {
    fVar17 = fVar13;
  }
  fVar14 = **(float **)(*(long *)PTR_DAT_04cb5bf8 + 0xb8) * 8.0;
  fVar13 = fVar17 * _UNK_00e20900;
  if (fVar17 * _UNK_00e20900 <= fVar14) {
    fVar13 = fVar14;
  }
  if (fVar13 <= ABS(fVar18 - fVar16)) {
    fVar17 = *(float *)(param_1 + 0x40);
    fVar18 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
    fVar18 = fVar18 / _UNK_00e207cc;
    fVar16 = -fVar18;
    if (0.0 <= fVar17 - fVar12) {
      fVar16 = fVar18;
    }
    fVar16 = fVar12 + fVar16;
    if (ABS(fVar17 - fVar12) <= fVar18) {
      fVar16 = fVar17;
    }
    *(float *)(param_1 + 0x44) = fVar16;
    if (*(long *)(param_1 + 0x50) == 0) goto LAB_023c6ca8;
    UnityEngine_Material__SetColor_43830b0
              (0,0,0,*(long *)(param_1 + 0x50),*(undefined8 *)PTR_DAT_04cb68b8,0);
    fVar12 = *(float *)(param_1 + 0x44);
  }
  if (fVar12 <= 0.0) {
    bVar10 = *(float *)(param_1 + 0x40) <= 0.0;
  }
  else {
    bVar10 = false;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x58);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(long *)(param_1 + 0x58) == 0) goto LAB_023c6ca8;
    bVar2 = UnityEngine_Behaviour__get_enabled_43bc458(*(long *)(param_1 + 0x58),0);
    if (((bVar10 ^ bVar2) & 1) == 0) {
      if (*(long *)(param_1 + 0x58) == 0) goto LAB_023c6ca8;
      UnityEngine_Behaviour__set_enabled_43bc50c(*(long *)(param_1 + 0x58),bVar10 ^ 1,0);
    }
  }
  if (bVar10 != false) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_04cb68f0 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = Dino_BusSand_App_UI_GuideDimHoles__get_Cam_22c6770();
  fVar12 = *(float *)(param_1 + 0x30);
  if (fVar12 <= 0.0) {
    uVar11 = 0;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x60);
    if (lVar6 == 0) goto LAB_023c6ca8;
    if (*(int *)(lVar6 + 0x18) == 0) {
LAB_023c6d74:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    uVar15 = *(undefined8 *)(param_1 + 0x28);
    uVar11 = 1;
    *(float *)(lVar6 + 0x28) = fVar12;
    *(float *)(lVar6 + 0x2c) = fVar12;
    *(undefined8 *)(lVar6 + 0x20) = uVar15;
  }
  fVar12 = *(float *)(param_1 + 0x34);
  iVar3 = UnityEngine_Screen__get_height_436a6c8(0);
  lVar6 = *(long *)(param_1 + 0x20);
  if (lVar6 != 0) {
    iVar9 = 0;
    fVar12 = fVar12 * (float)iVar3;
    do {
      if ((*(int *)(lVar6 + 0x18) <= iVar9) || (0x1f < (int)uVar11)) {
        if (*(long *)(param_1 + 0x50) != 0) {
          UnityEngine_Material__SetVectorArray_43837a4
                    (*(long *)(param_1 + 0x50),*(undefined8 *)PTR_DAT_04cb6960,
                     *(undefined8 *)(param_1 + 0x60),0);
          if (*(long *)(param_1 + 0x50) != 0) {
            UnityEngine_Material__SetFloat_4383048
                      ((float)(int)uVar11,*(long *)(param_1 + 0x50),*(undefined8 *)PTR_DAT_04cb6968,
                       0);
            lVar6 = *(long *)(param_1 + 0x50);
            iVar3 = UnityEngine_Screen__get_height_436a6c8(0);
            if (lVar6 != 0) {
              UnityEngine_Material__SetFloat_4383048
                        ((float)iVar3 * _UNK_00e1ff20,lVar6,*(undefined8 *)PTR_DAT_04cb6970,0);
              lVar6 = *(long *)(param_1 + 0x50);
              iVar3 = UnityEngine_Screen__get_height_436a6c8(0);
              if (lVar6 != 0) {
                fVar12 = (float)iVar3 * _UNK_00e2011c;
                uVar4 = UnityEngine_Shader__PropertyToID_4372cb4
                                  (*(undefined8 *)PTR_DAT_04cb6978,*(undefined8 *)PTR_DAT_04cb6978,0
                                  );
                if ((bRam0000000004fa6d88 & 1) == 0) {
                  FUN_02132f7c(PTR_DAT_04cf6620);
                  FUN_02132f7c(PTR_DAT_04cab588);
                  bRam0000000004fa6d88 = 1;
                }
                if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                lVar8 = *(long *)(lVar6 + 0x10);
                if (lVar8 != 0) {
                  if (*(int *)(*(long *)PTR_DAT_04cab588 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  if (pcRam0000000004fa6f68 == (code *)0x0) {
                    pcRam0000000004fa6f68 = (code *)FUN_02132f40(&UNK_00e40218);
                  }
                    /* WARNING: Could not recover jumptable at 0x0447fb98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*pcRam0000000004fa6f68)(fVar12,lVar8,uVar4);
                  return;
                }
                    /* WARNING: Subroutine does not return */
                UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar6,0);
              }
            }
          }
        }
        break;
      }
      uVar5 = Dino_BusSand_App_UI_GuideDimHoles__TargetRect_22c6d78
                        (param_1,uVar7,iVar9,&uStack_48,&uStack_50);
      if ((uVar5 & 1) != 0) {
        lVar6 = *(long *)(param_1 + 0x60);
        if (lVar6 == 0) break;
        if (*(uint *)(lVar6 + 0x18) <= uVar11) goto LAB_023c6d74;
        lVar6 = lVar6 + (long)(int)uVar11 * 0x10;
        uVar11 = uVar11 + 1;
        fVar16 = (float)((ulong)uStack_48 >> 0x20);
        fVar18 = (float)((ulong)uStack_50 >> 0x20);
        *(ulong *)(lVar6 + 0x28) =
             CONCAT44(fVar12 + (fVar18 - fVar16) * 0.5,
                      fVar12 + ((float)uStack_50 - (float)uStack_48) * 0.5);
        *(ulong *)(lVar6 + 0x20) =
             CONCAT44((fVar16 + fVar18) * 0.5,((float)uStack_48 + (float)uStack_50) * 0.5);
      }
      lVar6 = *(long *)(param_1 + 0x20);
      iVar9 = iVar9 + 1;
    } while (lVar6 != 0);
  }
LAB_023c6ca8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

