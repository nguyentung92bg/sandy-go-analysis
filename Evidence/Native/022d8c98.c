/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$<BindButtons>b__29_0
void Dino_BusSand_App_UI_PassportPanel___BindButtons_b__29_0 (Dino_BusSand_App_UI_PassportPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$<BindButtons>b__29_0
   void Dino_BusSand_App_UI_PassportPanel___BindButtons_b__29_0
   (Dino_BusSand_App_UI_PassportPanel_o* __this, const MethodInfo* method); */

ulong Dino_BusSand_App_UI_PassportPanel___BindButtons_b__29_0_21d8c98(ulong param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  
  uVar5 = param_1;
  if ((bRam0000000004f9bb6e & 1) == 0) {
    uVar5 = FUN_02132f7c(PTR_DAT_04caec80);
    bRam0000000004f9bb6e = 1;
  }
                    /* try { // try from 022d8cc4 to 023d8d17 has its CatchHandler @ 022d8dd0 */
  if ((*(char *)(param_1 + 0x49) != '\0') || (*(char *)(param_1 + 0x48) != '\0')) {
    return uVar5;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar5 = Dino_BusSand_App_Meta_PassportFeature__get_HavePurchasedPassport_2246400
                      (*(long *)(param_1 + 0x40),0);
    if ((uVar5 & 1) != 0) {
      return uVar5;
    }
    if (*(long *)(param_1 + 0x40) != 0) {
      iVar2 = Dino_BusSand_App_Meta_PassportFeature__CurrentStoreItemId_22467e8
                        (*(long *)(param_1 + 0x40),0);
      uVar6 = *(undefined8 *)PTR_DAT_04caec80;
      if ((bRam0000000004f9bb81 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        FUN_02132f7c(PTR_DAT_04cb01a8);
        FUN_02132f7c(PTR_DAT_04cb0810);
        FUN_02132f7c(PTR_DAT_04cb0818);
        FUN_02132f7c(PTR_DAT_04cb0820);
        bRam0000000004f9bb81 = 1;
      }
      puVar1 = PTR_DAT_04ca9ae8;
      if (cRam0000000004f9b94d == '\0') {
        FUN_02132f7c(PTR_DAT_04cad1b0);
        cRam0000000004f9b94d = '\x01';
      }
      lVar7 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar7,0,0);
      if ((iVar2 < 1) || ((uVar5 & 1) != 0)) {
        return 0;
      }
      if (lVar7 != 0) {
        uVar5 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                          (lVar7,*(undefined8 *)PTR_DAT_04cb0810);
        if ((uVar5 & 1) != 0) {
          return 0;
        }
        lVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb01a8);
        System_Object___ctor_4870e5c(lVar4,0);
        if (lVar4 != 0) {
          *(int *)(lVar4 + 0x10) = iVar2;
          *(undefined8 *)(lVar4 + 0x18) = uVar6;
          thunk_FUN_02134474((undefined8 *)(lVar4 + 0x18),uVar6);
          uVar6 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                            (lVar7,*(undefined8 *)PTR_DAT_04cb0820,2,lVar4,
                             *(undefined8 *)PTR_DAT_04cb0818);
          lVar7 = *(long *)puVar1;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_0218fdac(lVar7);
          }
          puVar1 = PTR_DAT_04ca9ae8;
          if ((bRam0000000004fa8638 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04ca9ae8,0,0);
            bRam0000000004fa8638 = 1;
          }
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar3 = UnityEngine_Object__CompareBaseObjects_43c6f94(uVar6,0);
          return (ulong)((uVar3 ^ 0xffffffff) & 1);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

