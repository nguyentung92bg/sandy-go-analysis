/* IL2CPP: Dino.BusSand.Sdk.SandBusAdConfig$$RegisterOnDataUpdated
void Dino_BusSand_Sdk_SandBusAdConfig__RegisterOnDataUpdated (Dino_BusSand_Sdk_SandBusAdConfig_o* __this, System_Action_o* onDataUpdated, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.SandBusAdConfig$$RegisterOnDataUpdated
   void Dino_BusSand_Sdk_SandBusAdConfig__RegisterOnDataUpdated (Dino_BusSand_Sdk_SandBusAdConfig_o*
   __this, System_Action_o* onDataUpdated, const MethodInfo* method); */

void Dino_BusSand_Sdk_SandBusAdConfig__RegisterOnDataUpdated_2434008
               (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined1 auStack_34 [4];
  
  puVar1 = PTR_DAT_04cbf1b0;
  if ((bRam0000000004f9cc35 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cacfd8);
    FUN_02132f7c(PTR_DAT_04cbf1a8);
    FUN_02132f7c(PTR_DAT_04cbf1b8);
    FUN_02132f7c(PTR_DAT_04cbf1b0);
    bRam0000000004f9cc35 = 1;
  }
  auStack_34[0] = 0;
  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar4,0);
  if (lVar4 != 0) {
    plVar6 = (long *)(lVar4 + 0x10);
    *plVar6 = param_2;
    thunk_FUN_02134474(plVar6,param_2);
    puVar3 = PTR_DAT_04cbf1b8;
    puVar2 = PTR_DAT_04cbf1a8;
    puVar1 = PTR_DAT_04cacfd8;
    if (*plVar6 != 0) {
      uVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
      System_Action___ctor_47b5ed0(uVar5,lVar4,*(undefined8 *)puVar3,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Meta_MonetizationSettings__add_Changed_2268e5c(uVar5,0);
      lVar4 = *plVar6;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      auStack_34[0] = Dino_BusSand_Sdk_SandBusAdConfig__AnnounceLater_2434150(lVar4);
      Cysharp_Threading_Tasks_UniTaskVoid__Forget_4078d30(auStack_34,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

