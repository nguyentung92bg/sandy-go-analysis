/* IL2CPP: Dino.BusSand.App.UI.BattleRoyalePanel$$RefreshLose
void Dino_BusSand_App_UI_BattleRoyalePanel__RefreshLose (Dino_BusSand_App_UI_BattleRoyalePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyalePanel$$RefreshLose
   void Dino_BusSand_App_UI_BattleRoyalePanel__RefreshLose (Dino_BusSand_App_UI_BattleRoyalePanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_BattleRoyalePanel__RefreshLose_218d500(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  
  puVar4 = PTR_DAT_04cade20;
  puVar3 = PTR_DAT_04cade18;
  puVar2 = PTR_DAT_04ca9d18;
  if ((bRam0000000004f9b98c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cade20);
    FUN_02132f7c(PTR_DAT_04cade28);
    FUN_02132f7c(PTR_DAT_04cade18);
    bRam0000000004f9b98c = 1;
  }
  Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)puVar3,0,0);
  lVar5 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar4,0);
  lVar10 = *(long *)puVar2;
  lVar9 = *(long *)(lVar10 + 0x38);
  if (lVar9 == 0) {
    FUN_0216b4cc(lVar10);
    lVar9 = *(long *)(lVar10 + 0x38);
  }
  lVar9 = *(long *)(lVar9 + 0x10);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_0216b470();
  }
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04cade28;
  lVar9 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_0216b470();
  }
  uVar6 = Dino_BusSand_App_UI_BattleRoyaleUi__L_219a060
                    (*(undefined8 *)puVar2,**(undefined8 **)(lVar9 + 0xb8),0);
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9b9f8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cada48,uVar6,0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9b9f8 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = UnityEngine_Object__op_Equality_43c6f30(lVar5,0,0);
  if ((uVar7 & 1) == 0) {
    if ((lVar5 == 0) ||
       (lVar5 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                          (lVar5,1,*(undefined8 *)PTR_DAT_04cada48), lVar5 == 0)) {
LAB_0229a1f0:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (0 < (int)uVar1) {
      lVar9 = 0;
      do {
        if (uVar1 <= (uint)lVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        plVar8 = *(long **)(lVar5 + 0x20 + lVar9 * 8);
        if (plVar8 == (long *)0x0) goto LAB_0229a1f0;
        (**(code **)(*plVar8 + 0x518))(plVar8,uVar6,*(undefined8 *)(*plVar8 + 0x520));
        uVar1 = *(uint *)(lVar5 + 0x18);
        lVar9 = lVar9 + 1;
      } while ((int)lVar9 < (int)uVar1);
    }
  }
  return;
}

