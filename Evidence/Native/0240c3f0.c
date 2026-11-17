/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$UpdateItemMask
void Dino_BusSand_App_UI_HudPanel__UpdateItemMask (Dino_BusSand_App_UI_HudPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$UpdateItemMask
   void Dino_BusSand_App_UI_HudPanel__UpdateItemMask (Dino_BusSand_App_UI_HudPanel_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_HudPanel__UpdateItemMask_230c3f0(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 uVar10;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c536 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cb81a0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cac518);
    bRam0000000004f9c536 = 1;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x50);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar8,0,0);
  if ((uVar5 & 1) == 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x138);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
    if ((uVar5 & 1) == 0) {
      if (*(long *)(param_1 + 0x50) == 0) goto LAB_0240c620;
      lVar9 = UnityEngine_GameObject__GetComponent_object__275a5dc
                        (*(long *)(param_1 + 0x50),*(undefined8 *)PTR_DAT_04cb81a0);
      *(long *)(param_1 + 0x138) = lVar9;
      thunk_FUN_02134474(param_1 + 0x138,lVar9);
    }
    else {
      lVar9 = *(long *)(param_1 + 0x138);
    }
    puVar3 = PTR_DAT_04caba50;
    if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    lVar6 = *(long *)puVar3;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar6 = *(long *)puVar3;
    }
    uVar8 = **(undefined8 **)(lVar6 + 0xb8);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
    lVar6 = lVar9;
    if ((uVar5 & 1) == 0) {
      bVar4 = *(char *)(param_1 + 0x130) == '\0';
      lVar7 = 0;
      uVar1 = _UNK_00e20094;
      if (!bVar4) {
        lVar6 = 0;
        lVar7 = lVar9;
      }
    }
    else {
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b88f == '\0') {
        FUN_02132f7c(PTR_DAT_04caba50);
        cRam0000000004f9b88f = '\x01';
      }
      lVar7 = *(long *)puVar3;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar7 = *(long *)puVar3;
      }
      if ((**(long **)(lVar7 + 0xb8) == 0) ||
         (lVar7 = *(long *)(**(long **)(lVar7 + 0xb8) + 0x28), lVar7 == 0)) goto LAB_0240c620;
      uVar5 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                        (lVar7,*(undefined8 *)PTR_DAT_04cac518);
      bVar4 = *(char *)(param_1 + 0x130) == '\0';
      lVar7 = 0;
      if (!bVar4) {
        lVar6 = 0;
        lVar7 = lVar9;
      }
      uVar1 = 0;
      if ((uVar5 & 1) == 0) {
        uVar1 = _UNK_00e20094;
      }
    }
    if (!bVar4) {
      lVar6 = lVar7;
    }
    if (lVar6 == 0) {
LAB_0240c620:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar10 = 0;
    if (!bVar4) {
      uVar10 = uVar1;
    }
    *(undefined4 *)(lVar6 + 0x40) = uVar10;
  }
  return;
}

