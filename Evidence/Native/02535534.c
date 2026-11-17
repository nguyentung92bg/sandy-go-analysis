/* IL2CPP: Dino.BusSand.Sdk.SandBusAdsRemoteConfig$$HookCampaign
void Dino_BusSand_Sdk_SandBusAdsRemoteConfig__HookCampaign (Dino_BusSand_Sdk_SandBusAdsRemoteConfig_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.SandBusAdsRemoteConfig$$HookCampaign
   void Dino_BusSand_Sdk_SandBusAdsRemoteConfig__HookCampaign
   (Dino_BusSand_Sdk_SandBusAdsRemoteConfig_o* __this, const MethodInfo* method); */

void Dino_BusSand_Sdk_SandBusAdsRemoteConfig__HookCampaign_2435534(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  long *plStack_28;
  
  puVar2 = PTR_DAT_04cbf298;
  if ((bRam0000000004f9cc45 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caaec8);
    FUN_02132f7c(PTR_DAT_04cbf2a0);
    FUN_02132f7c(PTR_DAT_04cbf200);
    FUN_02132f7c(PTR_DAT_04cbf2a8);
    FUN_02132f7c(PTR_DAT_04cbf2b0);
    FUN_02132f7c(PTR_DAT_04cbf298);
    bRam0000000004f9cc45 = 1;
  }
  plStack_28 = (long *)0x0;
  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Object___ctor_4870e5c(lVar4,0);
  puVar2 = PTR_DAT_04cbf200;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  *(undefined8 *)(lVar4 + 0x18) = param_1;
  thunk_FUN_02134474((undefined8 *)(lVar4 + 0x18),param_1);
  if (((*(char *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) == '\0') &&
      (uVar5 = Sisus_Init_Service__TryGet_object__28b2b2c
                         (&plStack_28,*(undefined8 *)PTR_DAT_04cbf2a8), plVar3 = plStack_28,
      puVar1 = PTR_DAT_04caaec8, (uVar5 & 1) != 0)) && (plStack_28 != (long *)0x0)) {
    lVar8 = *(long *)puVar2;
    *(undefined1 *)(lVar4 + 0x10) = 1;
    uVar6 = *(undefined8 *)puVar1;
    *(undefined1 *)(*(long *)(lVar8 + 0xb8) + 0x10) = 1;
    uVar6 = thunk_FUN_0216e89c(uVar6);
    System_Action_object____ctor_35f0008(uVar6,lVar4,*(undefined8 *)PTR_DAT_04cbf2b0,0);
    lVar8 = *plVar3;
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_04cbf2a0) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_025356a0;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)FUN_0216b7a4(plVar3,*(long *)PTR_DAT_04cbf2a0,0);
LAB_025356a0:
    (*(code *)*puVar7)(plVar3,uVar6,puVar7[1]);
    *(undefined1 *)(lVar4 + 0x10) = 0;
  }
  return;
}

