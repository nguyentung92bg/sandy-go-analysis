/* IL2CPP: Dino.BusSand.Sdk.SandBusTrackingProvider$$RouteTrackingPlan
void Dino_BusSand_Sdk_SandBusTrackingProvider__RouteTrackingPlan (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.SandBusTrackingProvider$$RouteTrackingPlan
   void Dino_BusSand_Sdk_SandBusTrackingProvider__RouteTrackingPlan (const MethodInfo* method); */

void Dino_BusSand_Sdk_SandBusTrackingProvider__RouteTrackingPlan_24305e8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  
  puVar2 = PTR_DAT_04cbef88;
  puVar1 = PTR_DAT_04ca9af8;
  if ((bRam0000000004f9cc6a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbef90);
    FUN_02132f7c(PTR_DAT_04cbef98);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cb2240);
    FUN_02132f7c(PTR_DAT_04cbefa0);
    FUN_02132f7c(PTR_DAT_04cbefa8);
    FUN_02132f7c(PTR_DAT_04cbef88);
    bRam0000000004f9cc6a = 1;
  }
  lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Object___ctor_4870e5c(lVar6,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  bVar5 = UnityEngine_Debug__get_isDebugBuild_4362220(0);
  puVar4 = PTR_DAT_04cbefa8;
  puVar3 = PTR_DAT_04cbefa0;
  puVar2 = PTR_DAT_04cbef90;
  puVar1 = PTR_DAT_04cb2240;
  if (lVar6 != 0) {
    uVar7 = *(undefined8 *)PTR_DAT_04cbef98;
    *(byte *)(lVar6 + 0x10) = (bVar5 ^ 0xff) & 1;
    uVar7 = thunk_FUN_0216e89c(uVar7);
    System_Action_object__object____ctor_35f783c(uVar7,lVar6,*(undefined8 *)puVar3,0);
    lVar8 = *(long *)puVar1;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar8 = *(long *)puVar1;
    }
    **(undefined8 **)(lVar8 + 0xb8) = uVar7;
    thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar7);
    uVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
    System_Action_object____ctor_35f0008(uVar7,lVar6,*(undefined8 *)puVar4,0);
    puVar9 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *puVar9 = uVar7;
    if (iRam00000000051c1b10 != 0) {
      FUN_02220bf0(1L << ((ulong)puVar9 >> 0xc & 0x3f),
                   ((ulong)puVar9 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

