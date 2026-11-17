/* IL2CPP: Dino.BusSand.App.UI.UiTweaks.Entry$$get_IsEmpty
bool Dino_BusSand_App_UI_UiTweaks_Entry__get_IsEmpty (Dino_BusSand_App_UI_UiTweaks_Entry_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x044c6fd8) */
/* WARNING: Removing unreachable block (ram,0x044c7008) */
/* WARNING: Removing unreachable block (ram,0x044c701c) */
/* WARNING: Removing unreachable block (ram,0x044c7020) */
/* WARNING: Removing unreachable block (ram,0x044c6fdc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.UiTweaks.Entry$$get_IsEmpty
   bool Dino_BusSand_App_UI_UiTweaks_Entry__get_IsEmpty (Dino_BusSand_App_UI_UiTweaks_Entry_o*
   __this, const MethodInfo* method); */

bool Dino_BusSand_App_UI_UiTweaks_Entry__get_IsEmpty_22a3d10(long param_1)

{
  float fVar1;
  undefined *puVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  
  if ((bRam0000000004f9c27a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c27a = 1;
  }
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  if (cRam0000000004f9b948 == '\0') {
    FUN_02132f7c(PTR_DAT_04cacfc0);
    cRam0000000004f9b948 = '\x01';
  }
  puVar2 = PTR_DAT_04cacfc0;
  fVar1 = _UNK_00e1fea0;
  puVar4 = *(undefined8 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
  fVar6 = (float)*puVar4;
  fVar8 = (float)uVar10 - fVar6;
  fVar7 = (float)((ulong)*puVar4 >> 0x20);
  fVar9 = (float)((ulong)uVar10 >> 0x20) - fVar7;
  if ((fVar8 * fVar8 + fVar9 * fVar9 < _UNK_00e1fea0) &&
     (fVar6 = (float)*(undefined8 *)(param_1 + 0x28) - fVar6,
     fVar7 = (float)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20) - fVar7,
     fVar6 * fVar6 + fVar7 * fVar7 < _UNK_00e1fea0)) {
    uVar10 = *(undefined8 *)(param_1 + 0x30);
    if (cRam0000000004f9b949 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b949 = '\x01';
      puVar4 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    fVar6 = (float)uVar10 - (float)puVar4[1];
    fVar7 = (float)((ulong)uVar10 >> 0x20) - (float)((ulong)puVar4[1] >> 0x20);
    if (((fVar6 * fVar6 + fVar7 * fVar7 < fVar1) && (*(float *)(param_1 + 0x38) <= 0.0)) &&
       (*(char *)(param_1 + 0x3c) == '\0')) {
      lVar5 = *(long *)(param_1 + 0x40);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      puVar2 = PTR_DAT_04ca9ae8;
      if ((bRam0000000004fa8637 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9ae8,0,0);
        bRam0000000004fa8637 = 1;
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if ((bRam0000000004fa85fa & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        bRam0000000004fa85fa = 1;
      }
      if (lVar5 == 0) {
        bVar3 = true;
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        bVar3 = *(long *)(lVar5 + 0x10) == 0;
      }
      return bVar3;
    }
  }
  return false;
}

