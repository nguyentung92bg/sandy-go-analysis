/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$UpdatePointerBlock
void Dino_BusSand_Cheat_CheatManager__UpdatePointerBlock (Dino_BusSand_Cheat_CheatManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$UpdatePointerBlock
   void Dino_BusSand_Cheat_CheatManager__UpdatePointerBlock (Dino_BusSand_Cheat_CheatManager_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_Cheat_CheatManager__UpdatePointerBlock_235f1b0
               (undefined1 param_1 [16],float param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  
  if ((bRam0000000004f9c73b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab380);
    FUN_02132f7c(PTR_DAT_04cabca8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c73b = 1;
  }
  puVar2 = PTR_DAT_04cab380;
  puVar1 = PTR_DAT_04ca9ae8;
  uVar9 = Dino_BusSand_Cheat_CheatManager__get_Scale_235f14c();
  *(undefined4 *)(param_3 + 0x84) = uVar9;
  fVar10 = (float)UnityEngine_Input__get_mousePosition_4430454(0);
  fVar11 = *(float *)(param_3 + 0x84);
  iVar4 = UnityEngine_Screen__get_height_436a6c8(0);
  if ((*(char *)(param_3 + 0x121) != '\0') || (*(char *)(param_3 + 0x122) != '\0')) {
    *(undefined1 *)(*(long *)(*(long *)puVar2 + 0xb8) + 5) = 1;
LAB_0245f250:
    if (*(int *)(*(long *)PTR_DAT_04cabca8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar5 = UnityEngine_EventSystems_EventSystem__get_current_46a1b64(0);
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar7);
    }
    uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
    if ((uVar6 & 1) == 0) {
      return;
    }
    if (lVar5 == 0) goto LAB_0245f3b4;
    uVar6 = UnityEngine_Behaviour__get_enabled_43bc458(lVar5,0);
    if ((uVar6 & 1) == 0) {
      return;
    }
    UnityEngine_Behaviour__set_enabled_43bc50c(lVar5,0,0);
    *(long *)(param_3 + 0x150) = lVar5;
    goto thunk_FUN_02134474;
  }
  if (*(char *)(param_3 + 0x120) == '\0') {
LAB_0245f314:
    *(undefined1 *)(*(long *)(*(long *)puVar2 + 0xb8) + 5) = 0;
  }
  else {
    fVar10 = fVar10 / fVar11;
    if ((fVar10 < *(float *)(param_3 + 0x88)) ||
       (*(float *)(param_3 + 0x88) + *(float *)(param_3 + 0x90) <= fVar10)) goto LAB_0245f314;
    fVar10 = ((float)iVar4 - param_2) / *(float *)(param_3 + 0x84);
    if (fVar10 < *(float *)(param_3 + 0x8c)) goto LAB_0245f314;
    bVar3 = fVar10 < *(float *)(param_3 + 0x8c) + *(float *)(param_3 + 0x94);
    *(bool *)(*(long *)(*(long *)puVar2 + 0xb8) + 5) = bVar3;
    if (bVar3) goto LAB_0245f250;
  }
  uVar8 = *(undefined8 *)(param_3 + 0x150);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (*(long *)(param_3 + 0x150) == 0) {
LAB_0245f3b4:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  UnityEngine_Behaviour__set_enabled_43bc50c(*(long *)(param_3 + 0x150),1,0);
  *(undefined8 *)(param_3 + 0x150) = 0;
thunk_FUN_02134474:
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << (param_3 + 0x150U >> 0xc & 0x3f),
                 (param_3 + 0x150U >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

