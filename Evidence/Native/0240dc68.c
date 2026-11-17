/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$OpenBuyPopup
void Dino_BusSand_App_UI_HudPanel__OpenBuyPopup (Dino_BusSand_App_UI_HudPanel_o* __this, Dino_BusSand_App_UI_HudPanel_ItemBtn_o* it, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$OpenBuyPopup
   void Dino_BusSand_App_UI_HudPanel__OpenBuyPopup (Dino_BusSand_App_UI_HudPanel_o* __this,
   Dino_BusSand_App_UI_HudPanel_ItemBtn_o* it, const MethodInfo* method); */

void Dino_BusSand_App_UI_HudPanel__OpenBuyPopup_230dc68(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined4 uStack_34;
  
  if ((bRam0000000004f9c52c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac420);
    FUN_02132f7c(PTR_DAT_04cb81c0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb81c8);
    FUN_02132f7c(PTR_DAT_04cb81d0);
    FUN_02132f7c(PTR_DAT_04cb81d8);
    bRam0000000004f9c52c = 1;
  }
  puVar2 = PTR_DAT_04cb81d8;
  if (*(long *)(param_1 + 0x40) != 0) {
    Dino_BusSand_App_Gameplay_GameplayController__SetPaused_229dda8
              (*(long *)(param_1 + 0x40),1,*(undefined8 *)PTR_DAT_04cb81d8,0);
    if (*(long *)(param_1 + 0x40) != 0) {
      *(undefined1 *)(*(long *)(param_1 + 0x40) + 0xa4) = 1;
      if (cRam0000000004f9b94d == '\0') {
        FUN_02132f7c(PTR_DAT_04cad1b0);
        cRam0000000004f9b94d = '\x01';
      }
      if (param_2 != 0) {
        uStack_34 = *(undefined4 *)(param_2 + 0x10);
        lVar5 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
        uVar3 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_34);
        puVar1 = PTR_DAT_04ca9ae8;
        if (lVar5 != 0) {
          lVar5 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                            (lVar5,*(undefined8 *)PTR_DAT_04cb81d0,2,uVar3,
                             *(undefined8 *)PTR_DAT_04cb81c8);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar1);
          }
          uVar4 = UnityEngine_Object__op_Equality_43c6f30(lVar5,0,0);
          if ((uVar4 & 1) == 0) {
            uVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac420);
            System_Action_bool____ctor_35ee0e8(uVar3,param_1,*(undefined8 *)PTR_DAT_04cb81c0,0);
            if (lVar5 == 0) goto LAB_0240de34;
            *(undefined8 *)(lVar5 + 0x38) = uVar3;
            thunk_FUN_02134474((undefined8 *)(lVar5 + 0x38),uVar3);
          }
          else {
            lVar5 = *(long *)(param_1 + 0x40);
            if (lVar5 == 0) goto LAB_0240de34;
            uVar3 = *(undefined8 *)puVar2;
            *(undefined1 *)(lVar5 + 0xa4) = 0;
            Dino_BusSand_App_Gameplay_GameplayController__SetPaused_229dda8(lVar5,0,uVar3,0);
          }
          return;
        }
      }
    }
  }
LAB_0240de34:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

